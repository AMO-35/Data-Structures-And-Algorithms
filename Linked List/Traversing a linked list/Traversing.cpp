#include <bits/stdc++.h>
using namespace std;

//Time complexity -> O(N)
//Space complexity -> O(1)

struct Node {
	int data;
	struct Node *next;
};

struct Node* head = NULL;

void insert(int new_data) {
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node -> data = new_data;
	new_node -> next = head;
	head = new_node;
}

void display() {
	struct Node* ptr;
	ptr = head;

	while (ptr != NULL) {
		cout << ptr -> data << ' ';
		ptr = ptr -> next;
	}
}

void run_case() {
	insert(3);
	insert(1);
	insert(7);
	insert(2);
	insert(9);
	display();
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests = 1;

    while (tests-- > 0)
        run_case();

    return 0;
}
