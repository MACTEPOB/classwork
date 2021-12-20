#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    int a[10];
    int max;
    srand(time(NULL));
    max = a[0] = rand() % 101 - 50;
    cout << a[0];
    for (int i = 1; i <= 9; i++)
    {
        a[i] = rand() % 101 - 50;
        cout << " " << a[i];
        if (a[i] > max)
            max = a[i];

    }
    cout << endl << "Max = " << max;
    return 0;
}