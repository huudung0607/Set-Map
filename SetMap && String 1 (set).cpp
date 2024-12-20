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
	set<string> se;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		se.insert(a[i]);
	}
	cout << se.size() << endl;
	for (set<string>::iterator it = se.begin(); it != se.end(); it++)
	{
		cout << *it << " ";
	}

}
