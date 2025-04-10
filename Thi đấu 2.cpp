
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	map<string, vector<string>> mp;
	for (int i = 0; i < n; i++)
	{
		string s;
		getline(cin, s);
		int index = s.find('-');
		string team1 = s.substr(0,index - 1);
		string team2 = s.substr(index + 2);
		mp[team1].push_back(team2);
		mp[team2].push_back(team1);
	}
	vector<pair<string, vector<string>>>v;
	for (auto x : mp) {
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for (auto x : v) {
		cout << x.first << " : ";
		sort(x.second.begin(), x.second.end());
		for (int i = 0; i < x.second.size(); i++) {
			cout << x.second[i];
			if (i != x.second.size() - 1) {
				cout << ", ";
			}
		}
		cout << endl;
	}
}

