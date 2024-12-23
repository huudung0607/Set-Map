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
	char n;
	map<char, int> mp;
	while (cin >> n) {
    mp[n]++;
  }
	int maxfreq = INT_MIN;
	int minfreq = INT_MAX;
	char maxfreqchar, minfreqchar;
	for (auto x : mp)
	{
		if (x.second > maxfreq )
		{
			maxfreq = x.second;
			maxfreqchar = x.first;
		}
	}
  for (auto x : mp)
  {
    if (x.second <= minfreq)
    {
      minfreq = x.second;
      minfreqchar = x.first;
    }
  }
	cout << maxfreqchar << " " << maxfreq << endl;
	cout << minfreqchar << " " << minfreq << endl;
	cout << mp.size() << endl;
}
