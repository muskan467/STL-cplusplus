#include <bits/stdc++.h>
using namespace std;

int main()
{
  pair <int, int> p = {5, 4};

  cout << p.first << p.second; //5 4

  // for 3 variables
  pair<int, pair<int, int>> p1 = {1, {3, 4}};
  
  cout << p1.first << p1.second.second << p1.second.first; //1 4 3
  
  pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
  cout << arr[1].second;
  
  return 0;  
}
