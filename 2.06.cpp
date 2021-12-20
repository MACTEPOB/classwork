
#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Введите длину катета равнобедренного прямоугольного треугольника" << endl;
    cin >> N;
    int k, l = 0;
    k = N;
    for (int i = 0; i < N; i++)
    {    
        for (int g = 0; g < l; g++)
            cout << "  ";
        for (int j = 0; j < k; j++)
            cout << "* ";
        cout << endl; 
        k--;
        l++;
    }    
}
