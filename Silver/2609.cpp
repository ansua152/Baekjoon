#include <iostream>
using namespace std;

int min(int x, int y)
{
    int r;
    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }

    return x;
}

int main()
{
    int a, b;
    cin >> a >> b;
    
    int n = min(a, b);
    cout << n << '\n';
    cout << a * b / n << '\n';

    return 0;
}