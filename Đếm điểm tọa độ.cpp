#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	map<pair<int, int>, int> mp;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		mp[{x, y}]++;
	}
	for (auto x : mp)
	{
		cout << x.first.first << " " << x.first.second << " " << x.second << endl;
	}
}
