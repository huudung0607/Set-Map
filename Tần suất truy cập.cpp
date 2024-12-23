#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
	string s;
	map<string, int> mp;
	while (cin >> s)
	{
		mp[s]++;
	}
	for (auto x : mp)
	{
		cout << x.first << " " << x.second << endl;
	}
}
