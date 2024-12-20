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
	vector<int> a(n);
	multiset <int> se;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		se.insert(a[i]);
		cout << se.count(a[i]) << " ";
	}
}
