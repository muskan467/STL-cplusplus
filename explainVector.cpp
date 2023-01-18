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
  
  vector<int> v1(5, 100); // {100, 100, 100, 100, 100}
  
  vector<int> v1(5); // 5 times 0 or garbage value depending upon compiler
  vector<int> v2(v1); // copy v1 -> v2
  
  
  return 0;
}
