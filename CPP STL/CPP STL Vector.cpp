#include <bits/stdc++.h>

int main() {
	using namespace std;
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	std::vector<int> v{1, 2, 3, 4, 5};

	/**
	* std::vector<T,Allocator>:: at
	**/
	//output the element of the index of .at(index)
	//if index is out of range then shows out of range
	std::cout << v.at(2) << '\n'; 

	/**
	* std::vector<T,Allocator>:: front
	**/
	//output the first element
	std::cout << v.front() << '\n';

	/**
	* std::vector<T,Allocator>:: back
	**/
	//output the last element
	std::cout << v.back() << '\n';

	/**
	* std::vector<T,Allocator>:: begin
	* std::vector<T,Allocator>:: cbegin
	**/
	//output the first element
	std::cout << *v.begin() << '\n';
	std::cout << *v.cbegin() << '\n';

	/**
	* std::vector<T,Allocator>:: rbegin
	* std::vector<T,Allocator>:: crbegin
	**/
	//output the first element from the last
	std::cout << *v.rbegin() << '\n';
	std::cout << *v.crbegin() << '\n';

	/**
	* std::vector<T,Allocator>:: empty
	**/
	//checks if it is empty
	std::cout << (v.empty()? "YES" : "NO") << '\n';

	/**
	* std::vector<T,Allocator>:: size
	**/
	//output its size
	std::cout << v.size() << '\n';
	
	/**
	* std::vector<T,Allocator>:: emplace_back
	**/
	//insert a new element at the end of the vector
	v.emplace_back(6);

	/**
	* std::vector<T,Allocator>:: erase
	**/
	//erase elements from the vector
	v.erase(v.begin()); //erase the first element
	v.erase(v.begin()+2); //erase the third element
	v.erase(v.begin()+2, v.begin()+5); //erase elements from the third position to fifth position

	/**
	* std::vector<T,Allocator>:: push_back
	**/
	//appends a new element at the end of the vector
	v.push_back(8);

	/**
	* std::vector<T,Allocator>:: pop_back
	**/
	//pop out the element at the end of the vector
	v.pop_back();

	/**
	* std::vector<T,Allocator>:: clear
	**/
	//clears every element of the vector
	// /v.clear();
	for(int i : v) cout << i << ' '; //output nothing

	/**
	* Lower Bound
	*/
	std::vector<int> v{1, 2, 3, 5, 6};
	auto it = lower_bound(v.begin(), v.end(), 3); 
	std::cout << *it << '\n';						//returns 3
	auto it2 = lower_bound(v.begin(), v.end(), 4);
	std::cout << *it2 << '\n';						//returns 5
	auto it3 = lower_bound(v.begin(), v.end(), 7);
	std::cout << *it3 << '\n';						//returns 0
	auto it4 = lower_bound(v.begin(), v.end(), 5);
	std::cout << *it4 << '\n';						//returns 5

	/**
	* Upper Bound
	**/
	std::vector<int> vi{8, 9, 10, 13, 15};
	auto it5 = upper_bound(vi.begin(), vi.end(), 10);
	std::cout << *it5 << '\n';							//returns 13
	auto it6 = upper_bound(vi.begin(), vi.end(), 12);
	std::cout << *it6 << '\n';							//returns 13
	auto it7 = upper_bound(vi.begin(), vi.end(), 16);
	std::cout << *it7 << '\n';							//returns 0
	auto it8 = upper_bound(vi.begin(), vi.end(), 15);
	std::cout << *it8 << '\n';							//returns 0

	return 0;
}
