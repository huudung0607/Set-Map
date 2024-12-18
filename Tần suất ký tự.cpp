#include <set>
#include <iostream>
#include <vector>
#include <unordered_set>
#include <map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<char> a(n);
	multiset<char> se;
	map<char, int> mp;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		se.insert(a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		mp.insert({ a[i],se.count(a[i]) });
	}
	for (auto x : mp)
	{
		cout << x.first << " " << x.second << endl;
		break;
	}
	for (auto x : mp)
	{
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;
	for (map<char, int>::reverse_iterator it = mp.rbegin(); it != mp.rend(); it++)
	{
		cout << (*it).first << " " << (*it).second << endl;
	}
}
