#include <bits/stdc++.h>

int main() {
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int N = 5;
	int A[] = {1, 2, 3, 4, 5, 6}; //iterate the first item with A.first & second item with A.second
	
	/**
	* std::make_pair(t1, t2)
	**/
	//makes pair of two elewments
	auto p = std::make_pair(N, A[2]);
	std::cout << p.first << ' ' << p.second << '\n'; //output 5 & 3

	//we can sort it by making it a vector
	std::vector<pair<int, int>> v;
	for(int i = 0; i < 6; ++i){
		v.push_back(make_pair(A[i], i));
	}
	sort(v.begin(), v.end());	

	return 0;
}
