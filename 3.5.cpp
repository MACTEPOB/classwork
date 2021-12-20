#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    int a[10];
    int max, k;
    srand(time(NULL));
    max = a[0] = rand() % 11 - 5;
    cout << a[0];
    for (int i = 1; i <= 9; i++)
    {
        a[i] = rand() % 11 - 5;
        cout << " " << a[i];
        if (a[i] > max)
            max = a[i];

    }
    for (int i = 1; i <= 9; i++)
    {
        if (a[i] == max) 
            k++;
    }
    cout << endl << "Max = " << max << endl << "Number of max elements = " << k;
    return 0;
}