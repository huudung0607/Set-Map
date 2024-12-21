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
	set<char> se;
	for (int i = 0; i < n; i++)
	{
		char x;
		cin >> x;
		se.insert(x);
	}
	cout << se.size() << endl;
	set<char>::iterator small_it = se.begin();
	set<char>::reverse_iterator big_it = se.rbegin();
	auto lonnhat = *big_it;
	auto lonnhi = *(++big_it);
	auto nhonhat = *small_it;
	auto nhonhi = *(++small_it);
	cout << lonnhat << " " << nhonhat << " " << lonnhi << " " << nhonhi;
}
