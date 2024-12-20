#include <iostream>
#include <cmath>
#include <set>
#include <map>
#include <vector>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	map <int, int> mp;
	for (auto it = a.begin(); it != a.end(); it++)
	{
		mp[*it] = 1;
	}
	for (auto it = b.begin(); it != b.end(); it++)
	{
		if (mp[*it] == 1)
		{
			mp[*it] = 2;
		}
	}
	set<int> se;
	for (auto it = a.begin(); it != a.end(); it++)
	{
		if (mp[*it] != 2)
		{
			se.insert(*it);
		}
	}
	for (auto x : se)
	{
		cout << x << " ";
	}
}
