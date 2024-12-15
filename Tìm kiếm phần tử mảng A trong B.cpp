#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main()
{
	set<int> se;
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
		se.insert(b[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (se.find(a[i]) != se.end())
		{
			cout << "28tech" << " ";
		}
		else
		{
			cout << "29tech" << " ";
		}
	}
}
