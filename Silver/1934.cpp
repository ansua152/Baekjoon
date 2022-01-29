#include <iostream>
using namespace std;

int main()
{
	int t;
	int a, b;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int min;
		cin >> a >> b;

		if (a > b)
		{
			int temp = a;
			a = b;
			b = temp;
		}
		for (int j = a; ; j--)
		{
			if (!(a % j) && !(b % j))
			{
				min = j;
				break;
			}
		}

		cout << a * b / min << '\n';
	}
	return 0;
}