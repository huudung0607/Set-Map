#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin >> n;
    cin.ignore(); 
    map<string, set<string>> matches;
    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        auto pos = line.find(" - ");
        string team1 = line.substr(0, pos);
        string team2 = line.substr(pos + 3);
        matches[team1].insert(team2);
        matches[team2].insert(team1);
    }
    for (auto x : matches)
    {
        cout << x.first << " : ";
        vector<string> doithu(x.second.begin(), x.second.end());
        for (auto i = 0; i < doithu.size(); i++)
        {
            if (i > 0)
            {
                cout << ", ";
            }
            cout << doithu[i];
        }
        cout << endl;
    }
}
