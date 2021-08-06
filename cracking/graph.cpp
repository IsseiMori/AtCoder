// 4.1 minimum-genetic-mutation

#include <cassert>

class Solution {
private:
    enum State {Unvisited, Visiting, Visited};

public:

    bool isOneAway(string s1, string s2) {
        
        assert(s1.size() == s2.size());
        
        int n_away = 0;
        for ( int i = 0; i < s1.size(); i++ ) {
            if ( s1[i] != s2[i] ) {
                n_away++;
                if ( n_away >= 2 ) return false;
            }
        }
        
        return n_away == 1;
    }
    
    int minMutation(string start, string end, vector<string>& bank) {
        
        if ( bank.size() == 0 ) return -1;
        
        bank.insert(bank.begin(), start);
        
        vector<State> status(bank.size(), State::Unvisited);
        vector<int> dists(bank.size(), 0);
        queue<int> q;
        
        q.push(0);
        status[0] = State::Visiting;
        
        while ( !q.empty() ) {
            int n = q.front(); q.pop();
            
            for ( int i = 0; i < bank.size(); i++ ) {
                
                if ( i == n ) continue;
                if ( status[i] == State::Unvisited && 
                     isOneAway(bank[i], bank[n]) ){
                    
                    dists[i] = dists[n]+1;
                    
                    if ( bank[i] == end ) {
                        return dists[i];
                    }
                    
                    status[i] = State::Visiting;
                    q.push(i);
                }
                status[n] = State::Visited;
            }
        }
        
        return -1;
        
    }
};


// 4.2 convert-sorted-array-to-binary-search-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    /*
     * Create a tree using left to right (inclusive) elements in the array
     */
    TreeNode* sortedArrayToBSTHelper(vector<int>& nums, int left, int right) {
        
        if ( left > right ) return nullptr;
        
        TreeNode* root = new TreeNode();
        
        int mid = (right + left) / 2;
        root->val = nums[mid];
        root->left = sortedArrayToBSTHelper(nums, left, mid-1);
        root->right = sortedArrayToBSTHelper(nums, mid+1, right);
        
        return root;
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return sortedArrayToBSTHelper(nums, 0, nums.size()-1);
        
    }
};

