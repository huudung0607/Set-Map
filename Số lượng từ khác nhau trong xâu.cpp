#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
	string s;
	set<string> se;
	while (cin >> s)
	{
		se.insert(s);
	}
	set<string>::iterator it = se.begin();
	set<string>::reverse_iterator it2 = se.rbegin();
	cout << se.size() << endl;
	cout << *it << " ";
	cout << *it2 << endl;
	
}
