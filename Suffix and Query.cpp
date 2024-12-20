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
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	vector<int> F(n);
	unordered_set<int> se;
	for (int i = n - 1; i >= 0; i--)
	{
		se.insert(a[i]);
		F[i] = se.size();
	}
	int q;
	cin >> q;
	while (q--)
	{
		int l;
		cin >> l;
		cout << F[l] << endl;
	}
}
