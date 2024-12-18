#include <iostream>
#include <set>	
#include <map>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>
#include <iomanip>
using namespace std;
using ll = long long;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	set<int>se;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		se.insert(a[i]);
	}
	int q;
	cin >> q;
	while (q--)
	{
		int t;
		cin >> t;
		if (t == 1)
		{
			int x;
			cin >> x;
			se.insert(x);
		}
		if (t == 2)
		{
			int x;
			cin >> x;
			if (se.find(x) != se.end())
			{
				se.erase(x);
			}
		}
		if (t == 3)
		{
			set<int>::iterator it = se.begin();
			cout << *it << endl;
		}
		if (t == 4)
		{
			set<int>::reverse_iterator it = se.rbegin();
			cout << *it << endl;
		}
	}
}
