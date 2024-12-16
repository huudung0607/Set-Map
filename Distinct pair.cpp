#include <iostream>
#include <set>	
#include <map>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	set<pair<int,int>> s;
	for (int i = 0; i < n; i++)
	{
		pair<int, int> temp;
		cin >> temp.first >> temp.second;
		s.insert(temp);
	}
	cout << s.size() << endl;
}
