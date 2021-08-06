#include <iostream>
#include <vector> 

using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define PI 3.14159265358979

int main() {

    double n, x0, y0, xn2, yn2;
    cin >> n >> x0>> y0 >> xn2 >> yn2;

    double cx = (x0+xn2) / 2;
    double cy = (y0+yn2) / 2;

    x0 -= cx;
    y0 -= cy;

    double angle = -2*PI/n;
    double x1 = x0 * cos(angle) + y0 * sin(angle);
    double y1 = -x0 * sin(angle) + y0 * cos(angle);

    x1 += cx;
    y1 += cy;

    printf("%0.9f %0.9f\n", x1, y1);

    return 0;
}
