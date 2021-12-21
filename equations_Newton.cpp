#include <iostream>
#include <cmath>

using namespace std;

// f(x) = 0.25x^3 + x - 1.2502
// f'(x) = 0.75x^2 + 1
// f''(x) = 1.5x;
// [0, 2]
// f(b) * f''(b) > 0
// 8.2494 > 0 => x0 = b;

int main()
{
    float x, xPrev;
    // f(b) * f''(b) > 0
    // 8.2494 > 0 => x0 = b;
    x = 2;
    xPrev = 0;
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = xPrev - ((0.25*pow(xPrev, 3) + xPrev - 1.2502) / (0.75*pow(xPrev, 2) + 1));
    }
    cout << "Корень: " << x << endl;
    return 0;
} 