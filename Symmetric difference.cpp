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
	for (auto x : a)
	{
		mp[x] = 1;
	}
	for (auto x : b)
	{
		if (mp[x] == 1)
		{
			mp[x] = 2;
		}
	}
	set<int>se;
	for (auto x : a)
	{
		if (mp[x] != 2)
		{
			se.insert(x);
		}
	}
	for (auto x : b)
	{
		mp[x] = 1;
	}
	for (auto x : a)
	{
		if (mp[x] == 1)
		{
			mp[x] = 2;
		}
	}
	for (auto x : b)
	{
		if (mp[x] != 2)
		{
			se.insert(x);
		}
	}
	for (auto x : se)
	{
		cout << x << " ";
	}
}
