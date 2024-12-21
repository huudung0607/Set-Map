#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	cin >> n;
	map<int, int> mp;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		mp[x]++;
	}
	cout << mp.size() << endl;
	vector<int> v;
	for (auto x : mp)
	{
		v.push_back(x.first);
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
}
