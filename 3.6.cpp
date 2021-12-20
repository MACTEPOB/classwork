#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    int a[10];
    int max, min;
    srand(time(NULL));
    max = min = a[0] = rand() % 101 - 50;
    cout << a[0];
    for (int i = 1; i <= 9; i++)
    {
        a[i] = rand() % 101 - 50;
        cout << " " << a[i];
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    cout << endl << "Max = " << max << endl << "Min = " << min;
    return 0;
}

