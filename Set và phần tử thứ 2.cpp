#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
#include <iomanip>
using namespace std;
const int mod = 1e9 + 7;

int main()
{
	int n;
	cin >> n;
	set<int> se;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		se.insert(a[i]);
	}
	cout << se.size() << endl;
	auto it = se.begin();
	auto it2 = se.rbegin();
	cout << *it2 << " " << *it << endl;
	se.erase(*it);
	se.erase(*it2);
	auto it3 = se.begin();
	auto it4 = se.rbegin();
	cout << *it4 << " " << *it3 << endl;
}
