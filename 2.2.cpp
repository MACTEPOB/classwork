#include <iostream>

using namespace std;

int main()
{
int N, sum;
sum = 1;
cout << "Введите число N" << endl;
cin >> N;
for (int i = 1; i <= N; i++)
    sum = sum * i;
cout << "Результат: " << sum;
return 0;
} 