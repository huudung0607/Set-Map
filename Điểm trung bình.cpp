#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
#include <iomanip>
using namespace std;
int main()
{
	map<string, pair<int,int>> mp;
  string name;
  int diem;
  int tinchi;
  while(cin >> name >> diem >> tinchi){
    if (mp.find(name) == mp.end()) {
      mp[name] = {0,0};
    }
    mp[name].first += diem;
    mp[name].second += diem*tinchi;
  }
  vector<string> tensv;
  for (auto x : mp){
    tensv.push_back(x.first);
  }
  sort(tensv.begin() , tensv.end() , greater<>());
  for (auto x : tensv){
    double tb = 1.0 * mp[x].second * 1.0 / mp[x].first;
    cout << x << " : " << fixed << setprecision(2) << tb << endl;
  }
}
