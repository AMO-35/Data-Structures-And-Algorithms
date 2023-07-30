#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; ++i){
   cin >> arr[i];
  }
  int best = 0, sum = 0;
  for(int i = 0; i < n; ++i){
   sum = max(arr[i], sum + arr[i]);
   best = max(sum, best);
  }
  cout << best << '\n';
  return 0;
}
//Time Complexity - O(n)
