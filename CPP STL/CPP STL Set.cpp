#include <bits/stdc++.h>

int main() {
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	std::set<int>S = {1, 2, 3, 4, 5, 6}; // every element is present with only one number of time and elements are sorted automatically

	/**
	* Looping Through a Set
	**/
	for(auto it = S.begin(); it != S.end(); ++it){
		std::cout << *it << ' ';
	}

	/**
	* std::set<Key,Compare,Allocator>::empty
	**/
	//check if the set is empty or not
	if(S.empty()) std::cout << "YES" << '\n';
	else std::cout << "NO" << '\n';

	/**
	* std::set<Key,Compare,Allocator>::size
	**/
	//output thew size of the set
	std::cout << S.size() << '\n';

	/**
	* std::set<Key,Compare,Allocator>::insert
	**/
	//inserts an element to the set
	S.insert(9);
	std::cout << S.size() << '\n';

	/**
	* std::set<Key,Compare,Allocator>::erase
	**/
	//erase a specific element
	S.erase(2);
	for(auto x: S){
		std::cout << x << ' ';
	}
	std::cout << '\n';

	/**
	* std::set<Key,Compare,Allocator>::count
	**/
	//output the number of times the element occured in the set
	std::cout << S.count(5) << '\n';

	/**
	* std::set<Key,Compare,Allocator>::find
	**/
	//search for an element in the set
	auto it = S.find(2);
	if(it != S.end()){
		std::cout << "Found" << ' ' << *it << '\n'; 
	} else{
		std::cout << "Not Found" << '\n';
	}

	/**
	* std::set<Key,Compare,Allocator>::contains [This is a C++20 function, so it won't work in the compilers below that and will get an error]
	**/
	//search for an element in the set and check if it contains that element
	for(auto x: S){
		if(S.contains(4)) std::cout << "Found" << '\n';
		else std::cout << "Not Found" << '\n';
	}

	/**
	* std::set<Key,Compare,Allocator>::clear
	**/
	//clear all elements and make the set empty
	S.clear();
	std::cout << S.size() << '\n';


	return 0;
}
