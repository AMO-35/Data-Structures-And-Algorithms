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


//insert the element in the begining of the linked list
void insert_at_head(node* &head, int data) {
	node* n = new node(data);
	n -> next = head;
	head = n;
}


//insert the element in the end of the linked list
void insert_at_tail(node* &head, int data) {
	node* n = new node(data);

	if (head == NULL) {
		head = n;
		return;
	}

	node* temp = head;

	while (temp -> next != NULL)
		temp = temp -> next;

	temp -> next = n;
}

void display(node* head) {
	while (head != NULL) {
		cout << head -> data << ' ';
		
		head = head -> next;
	}
}

void run_case() {
	node* head = NULL;
	
	insert_at_head(head, 5);
	insert_at_head(head, 2);
	insert_at_head(head, 8);
	insert_at_head(head, 3);
	insert_at_tail(head, 7);
	insert_at_tail(head, 6);
		
	display(head);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int tests = 1;

    while (tests-- > 0)
        run_case();

    return 0;
}
