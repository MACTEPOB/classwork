#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
        cout << "Введите последовательно 3 числа" << endl;
        cin >> a >> b >> c;
        if (a>b and a>c) 
            cout << "Наибольшее число: " << a;
        else 
            if (b>a and b>c)
                cout << "Наибольшее число: " << b;
            else 
                if (c>b and c>a)
                    cout << "Наибольшее число: " << c;
                else
                    cout << "Наибольших чисел несколько";
return 0;
}
