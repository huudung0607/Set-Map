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
	vector<int> a(n);
	map<int, int> mp;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp.insert({ a[i],1 });
	}
	cout << mp.size() << endl;
}
