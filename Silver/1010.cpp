#include <iostream>
using namespace std;

int main()
{
    int t;
    int n, m;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;

        long long result = 1;

        int r = 1;
        for (int j = m; j > m - n; j--)
        {
            result *= j;
            result /= r++;
        }
        
        cout << result << '\n';
    }
    
    return 0;
}