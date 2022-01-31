#include <iostream>
using namespace std;

int main()
{
	int t;
	int x1, y1, x2, y2;
	int n;
	int cx, cy, r;
	
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;
		int count = 0;

		for (int j = 0; j < n; j++)
		{
			cin >> cx >> cy >> r;

			if ((x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy) < r * r && (x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy) < r * r)
			{
				continue;
			}

			if ((x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy) < r * r || (x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy) < r * r)
			{
				count++;
			}
		}

	cout << count << '\n';

	}

	return 0;
}