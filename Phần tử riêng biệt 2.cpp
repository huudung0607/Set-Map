#include <set>
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<long long> a(n);
	unordered_set<long long> se;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (se.find(a[i]) == se.end())
		{
			cout << a[i] << " ";
			se.insert(a[i]);
		}
	}
}
