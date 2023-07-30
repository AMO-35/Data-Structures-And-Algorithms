#include <bits/stdc++.h>

using namespace std;

int fib(int x){
 if(x >= 3){
  return fib(x-1)+fib(x-2);
 }
 else return 1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  cout << fib(n) << '\n';
  return 0;
}

//Time Complexity - O(2^n)
