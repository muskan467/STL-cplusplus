#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v;
  
  v.push_back(1);
  v.emplace_back(2); // similar to push_back but faster, as it does not makes copies of old vectors
  
  vector<pair<int, int>> vec;
  
  vec.push_back({1, 3});
  vec.emplace_back(4, 5); // already assumes to be a pair
  
  return 0;
}
