#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v;
  
  v.push_back(1);
  v.emplace_back(2); // similar to push_back but faster, as it does not makes copies of old vectors
  
  return 0;
}
