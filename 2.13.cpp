#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    float a, b, c, x1, x2, D;
    cout << "Введите значения коэффицентов a, b и c" << endl;
    cin >> a >> b >> c;
    D = (b*b) - (4*a*c);
    cout << "D = " << D << endl;
    if (D == 0)
    {
        x1 = -b/(2*a);
        cout << "Ответ: x = " << x1;
    }
    if (D < 0)
        cout << "Корней нет";
    if (D > 0)
    {
        D = sqrt(D);
        x1 = (-b + D)/(2*a);
        x2 = (-b - D)/(2*a);
        cout << "Ответ: x1 =  " << x1 << ", x2 = " << x2;
    }
    return 0;
}
