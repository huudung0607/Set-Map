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
	map<int, int> mp;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		if (it->second % 2 == 0)
		{
			cout << it->first << " " << it->second << endl;
		}
	}
	cout << endl;
	for (map<int, int>::reverse_iterator it = mp.rbegin(); it != mp.rend(); it++)
	{
		if (it->second % 2 == 0)
		{
			cout << it->first << " " << it->second << endl;
		}
	}
	
}
