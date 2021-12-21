
#include <iostream>

using namespace std;

int main()
{
    int n, d, c = 1;
    cin >> n;
    if (n == 0)
    {
        cout << "Последовательность не задана";
        return 0;
    }
    while (n != 0)
    {
        d = n;
        cin >> n;
        if ((n<=d) and (n != 0))
        {
            c = 0;
        }
    }
    if (c == 1)
        cout << "Последовательность возрастающая"; 
    else
        cout << "Последовательность не возрастающая";
    return 0;
}
