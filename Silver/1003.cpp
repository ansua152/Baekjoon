#include <iostream>
using namespace std;

int fiboarr[50] = {0, 1, };
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return fiboarr[n];
    } else if (fiboarr[n] == 0)
        fiboarr[n] = fibonacci(n-2) + fibonacci(n-1);
	return fiboarr[n];
}

int main(void)
{
	int t;
	int n;

	cin >> t;

	for(int i = 0; i < t; i++)
	{
		cin >> n;
		if(n == 0)
			cout << "1 0" << '\n';
		else
			cout << fibonacci(n-1) << " " << fibonacci(n) << '\n';
	}

	return 0;
}