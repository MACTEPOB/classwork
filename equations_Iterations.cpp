#include <iostream>
#include <cmath>

using namespace std;

// f(x) = 0.25x^3 + x - 1.2502
// f'(x) = 0.75x^2 + 1
// [0, 2]
// ф(x) = x + λ(0.25x^3 + x - 1.2502)
// -1/r < λ < 0, если f'(x) > 0   -1/4 < λ < 0
// 0 < λ < 1/r, если f'(x) < 0
// r = max(|f'(a)|, |f'(b)|) = 4
// λ = -1/8 = -0.125

int main()
{
    float x, xPrev;
    double lambda = -0.125; // -1/8
    x = 1; // можно выбрать любое x0 из [0, 2] — выбранного заранее промежутка
    xPrev = 0; //делаем заведомо сильно меньше x, чтобы цикл правильно сработал
    double eps = 0.000001;

    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = lambda * (0.25*pow(xPrev, 3) + xPrev - 1.2502) + xPrev;
    }
    cout << "Корень по методу итераций: " << x << endl;
    return 0;
} 