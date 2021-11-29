#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int sum = 0, N;
    sum = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 1)  
            sum -= i;
        if (i % 2 == 0)
            sum += i;
    }
    cout << sum;
    return 0;
}
