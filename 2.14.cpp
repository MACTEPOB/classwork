#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0;
    cout << "Введите произвоольное число N" << endl;
    cin >> N;
    while (N > 0)
    {
        sum = sum + N % 10;
        N = N / 10;
    }
    cout << "Сумма цифр данного числа = " << sum;
    return 0;
}
