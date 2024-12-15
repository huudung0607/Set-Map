#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	set<char>se;
	vector<char>a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i] = tolower(a[i]);
		if (a[i] < '0' || a[i] >'9')
		{
			se.insert(a[i]);
		}
	}
	cout << se.size() << endl;
	for (auto x : se)
	{
		cout << x << " ";
	}

}
