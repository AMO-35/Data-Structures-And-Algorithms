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
  for(int i = 0; i < n; ++i){
   for(int j = 0; j < n-1; ++j){
    if(arr[j] > arr[j+1]){
     swap(arr[j], arr[j+1]);
    }
   }
  }
  for(int x: arr){
   cout << x << ' ' ;
  }
  cout << '\n';
  return 0;
}
// Time Complexity - O(n^2)
