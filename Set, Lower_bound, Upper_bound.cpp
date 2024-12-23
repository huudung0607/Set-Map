#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

bool binarySearch(vector<int> a, int l, int r, int x)
{
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x)
		{
			return true;
		}
		else if (a[m] < x)
		{
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}
	return false;
}
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	multiset<int> se;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		se.insert(a[i]);
	}
	int t;
	cin >> t;
	while (t--)
	{
		int c, x;
		cin >> c >> x;
		if (c== 1)
		{
			se.insert(x);
		}
		if (c==2)
		{
			multiset<int>::iterator it = se.find(x);
			if (se.find(x) != se.end())
			{
				se.erase(it);
			}
		}
		if (c==3)
		{
			auto it = se.lower_bound(x);
			if (it == se.end())
			{
				cout << -1 << endl;
			}
			else
			{
				cout << *it << endl;
			}
		}
		if (c == 4)
		{
			auto it = se.upper_bound(x);
			if (it == se.begin())
			{
				cout << -1 << endl;
			}
			else
			{
				--it;
				cout << *it << endl;
			}
		}
	}
}
