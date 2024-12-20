#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<char> a(n);
	set<char>se;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		se.insert(a[i]);
	}
	cout << se.size() << endl;
	for (set<char>::iterator it = se.begin(); it != se.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	for (set<char>::reverse_iterator it = se.rbegin(); it != se.rend(); it++)
	{
		cout << *it << " ";
	}
}
