#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int n, d, p = 1;
    while ((n % 2 == 0) or (n <= 3))
    {
        cout << "Задайте значение длины основания (нечетное число больше 3)" << endl;
        cin >> n;
        if ((n % 2 == 0) or (n <= 3))
            cout << "Данное число не удовлетворяет условиям" << endl;
    }
    d = (n - 1) / 2;
    while (p <= n)
    {
        for (int i = 1; i <= d; i++)
            cout << " ";
        for (int i = 1; i <= p; i++)
            cout << "*";
        p += 2;
        d -= 1;
        cout << endl;
    }
    return 0;
}
