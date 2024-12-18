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
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		mp[x]++;
	}
	for (pair<int, int> x : mp)
	{
		cout << x.first << " " << x.second << endl;
	}
}
