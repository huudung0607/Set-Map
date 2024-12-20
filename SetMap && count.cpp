#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	multiset<int> se;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
		se.insert(b[i]);
	}
	for (int i = 0; i < n; i++)
	{
		cout << se.count(a[i]) << " ";
	}
}
