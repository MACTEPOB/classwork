#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int N, Z;
    cout << "Введите произвольное число N и цифру Z" << endl;
    cin >> N >> Z;
    while (N > 0)
    {
        if (N % 10 == Z)
        {
            cout << "Цифра " << Z << " входит в запись данного числа" << endl;
            break;
        }
        N = N / 10;
    }
    if (N <= 0)
        cout << "Цифра " << Z << " не входит в запись данного числа" << endl;
    return 0;
}
