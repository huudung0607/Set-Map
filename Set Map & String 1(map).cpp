#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cin.ignore();
	vector<string> a(n);
	map<string, int> mp;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	cout << mp.size() << endl;
	for (auto x : mp)
	{
		cout << x.first << " ";
	}
}
