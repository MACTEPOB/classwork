#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Введите делимое и делитель" << endl;
    cin >> a >> b;
        if (b == 0)
            cout << "Делитель не может быть равен нулю" << endl;
        else
            cout << a / b << endl;
return 0;
}