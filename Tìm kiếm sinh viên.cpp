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
	int n;
	cin >> n;
	map<string, string> mp;
	while (2*n--)
	{
		string ms;
		cin >> ms;
		cin.ignore();
		string name;
		getline(cin, name);
		mp.insert({ ms,name });
	}
	int q;
	cin >> q;
	cin.ignore();
	while (q--)
	{
		string ms;
		cin >> ms;
		auto it = mp.find(ms);
		if (it!=mp.end())
		{
			cout << it->second << endl;
		}
		else
		{
			cout << "NOT FOUND" << endl;
		}
	}
}
