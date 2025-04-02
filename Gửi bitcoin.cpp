#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	map<string, string> mp;
	for (int i = 0; i < n; i++)
	{
		string name, dex;
		getline(cin, name);
		getline(cin, dex);
		mp.insert({ dex,name });
	}
	int t;
	cin >> t;
	cin.ignore();
	for (int i = 0; i < t; i++)
	{
		string a, b;
		int n;
		cin >> a >> b >> n;
		if (mp.find(a) == mp.end())
		{
			mp[a] = "Unknown wallet";
		}
		if (mp.find(b) == mp.end())
		{
			mp[b] = "Unknown wallet";
		}
		cout << mp[a] << " " << "send" << " " << n << " " << "bitcoin" << " "
			<< "to" << " " << mp[b] << endl;
	}
}
