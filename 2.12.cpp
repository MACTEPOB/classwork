#include <iostream>

using namespace std;

int main()
{
    int N, max, min, a, k;
    cout << "Задайте длину последовательности и заполните ее числами" << endl;
    cin >> N >> a;
    max = min = a;
    for (int i = 0; i <= N-2; i++)
    {
        cin >> a;
        if (a > max)
            max = a;
        if (a < min)
            min = a;
    }
    cout << max + min << endl;
    return 0;
}
