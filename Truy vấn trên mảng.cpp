#include <set>
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

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
				multiset<int>::iterator it = se.find(x);
				se.erase(it);
			}
		}
		if (t == 3)
		{
			int x;
			cin >> x;
			if (se.find(x) != se.end())
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}
}
