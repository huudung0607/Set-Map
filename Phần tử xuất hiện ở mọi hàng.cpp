#include <iostream>
#include <cmath>
#include <set>
#include <map>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	map <int, int> mp;
	for (int i = 0; i < n; i++)
	{
		set<int> se;
		for (int j = 0; j < n; j++)
		{
			se.insert(a[i][j]);
		}
		for (auto x : se)
		{
			mp[x]++;
		}
	}
	vector<int> res;
	for (pair<int, int> pa : mp)
	{
		if (pa.second == n)
		{
			res.push_back(pa.first);
		}
	}
	if (res.empty())
	{
		cout << "NOT FOUND" << endl;
	}
	else
	{
		for (auto x : res)
		{
			cout << x << " ";
		}
	}
}
