#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    int a[10];
    int max, k;
    srand(time(NULL));
    max = a[0] = rand() % 101 - 50;
    cout << "Default sequence:";
    for (int i = 0; i <= 9; i++)
    {
        a[i] = rand() % 101 - 50;
        cout << " " << a[i];
    }
    cout << endl << "Reversed sequence:";
    for (int i = 9; i >= 0; i--)
    {
        cout << " " << a[i];
    }
    return 0;
}