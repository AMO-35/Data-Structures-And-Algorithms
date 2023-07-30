#include <bits/stdc++.h>

using namespace std;

int fact(int x){
 if(x >= 1){
  return x*fact(x-1);
 }
 else return 1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  cout << fact(n) << '\n';
  return 0;
}

//Time Complexity - O(2^n)
