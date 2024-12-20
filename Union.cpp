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
	set<int>se;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		se.insert(a[i]);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
		se.insert(b[i]);
	}
	for (auto it = se.rbegin(); it != se.rend(); it++)
	{
		cout << *it << " ";
	}
}
