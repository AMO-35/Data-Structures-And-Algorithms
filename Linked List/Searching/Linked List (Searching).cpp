#include <bits/stdc++.h>
using namespace std;

class node {
	public:
		int data;
		node *next;
		node (int val) {
			data = val;
			next = NULL;
		}
};

//Searching for an element
bool search(node* head, int key) {
	node* temp = head;

	while (temp != NULL) {
		if (temp -> data == key)
			return true;

		temp = temp -> next;
	}

	return false;
}

void run_case() {
	node* head = NULL;
	
	cout << search(head, 1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests = 1;

    while (tests-- > 0)
        run_case();

    return 0;
}
