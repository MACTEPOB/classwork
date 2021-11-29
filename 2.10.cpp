
#include <iostream>

using namespace std;

int main()
{
    int N, a, i = 0, max = 0;
    cin >> N;
    for (int i = 0; i <= N - 1; i++)
    {
        cin >> a;
        if (a > max)
            max = a;
    }
    cout << "Наибольшее число " << max << endl;
    return 0;
}
