#include <bits/stdc++.h>

int main() {
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	
	/**
	* std::map
	* std::map is a sorted associative container that contains key-value pairs with unique keys
	*/
	//declaration
	std::map<key, value> mp;

	//example
	//inserting
	std::map<int, int> A
	A[1] = 100;
	A[2] = -1;
	A[3] = 200;
	A[20] = 1;

	//find
	A.find(1);

	//erase
	A.erase(1);

	//iterate and insert
	std::map<char, int> cnt;
	string s = "Sabib";
	for(char c: s){
		++cnt[c];
	}
	cout << cnt['a'] << ' ' << cnt['z'];

	//the number of occuring time of an element in an array or string can be measured by mapping through that
	
	return 0;
}
