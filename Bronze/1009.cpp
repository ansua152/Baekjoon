#include <iostream>
using namespace std;

int main(void)
{
	int t;
	int a, b;

	cin >> t;

	for(int i = 0; i < t; i++)
	{
		cin >> a >> b;
		a = a % 10;
		if (a == 1)
			cout << 1 << '\n';
		else if(a == 2)
		{
			if(b % 4 == 1)
				cout << 2 << '\n';
			if(b % 4 == 2)
				cout << 4 << '\n';
			if(b % 4 == 3)
				cout << 8 << '\n';
			if(b % 4 == 0)
				cout << 6 << '\n';
		} 
		else if(a == 3)
		{
			if(b % 4 == 1)
				cout << 3 << '\n';
			if(b % 4 == 2)
				cout << 9 << '\n';
			if(b % 4 == 3)
				cout << 7 << '\n';
			if(b % 4 == 0)
				cout << 1 << '\n';
		} 
		else if(a == 4)
		{
			if(b % 2 == 1)
				cout << 4 << '\n';
			if(b % 2 == 0)
				cout << 6 << '\n';
		} 
		else if(a == 5)
		{
			cout << 5 << '\n';
		} 
		else if(a == 6)
		{
			cout << 6 << '\n';
		} 
		else if(a == 7)
		{
			if(b % 4 == 1)
				cout << 7 << '\n';
			if(b % 4 == 2)
				cout << 9 << '\n';
			if(b % 4 == 3)
				cout << 3 << '\n';
			if(b % 4 == 0)
				cout << 1 << '\n';
		} 
		else if(a == 8)
		{
			if(b % 4 == 1)
				cout << 8 << '\n';
			if(b % 4 == 2)
				cout << 4 << '\n';
			if(b % 4 == 3)
				cout << 2 << '\n';
			if(b % 4 == 0)
				cout << 6 << '\n';
		} 
		else if(a == 9)
		{
			if(b % 2 == 1)
				cout << 9 << '\n';
			if(b % 2 == 0)
				cout << 1 << '\n';
		}
		else if(a == 0)
			cout << 10 << '\n';
		
	}

	return 0;
}