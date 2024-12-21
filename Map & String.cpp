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
	cin.ignore();
	map<string, int> mp;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		mp[s]++;
	}
	cout << endl;
	for (auto x : mp)
	{
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;
	string maxscore, minscore;
	int maxghiban = 0;
	int minghiban = 1000000;
	for (auto x : mp)
	{
		if (x.second < minghiban || x.second == minghiban && minscore < x.first)
		{
			minghiban = x.second;
			minscore = x.first;
		}
		if (x.second > maxghiban || x.second == maxghiban && maxscore < x.first)
		{
			maxghiban = x.second;
			maxscore = x.first;
		}
	}
	cout << minscore << " " << minghiban << endl;
	cout << maxscore << " " << maxghiban << endl;
}
