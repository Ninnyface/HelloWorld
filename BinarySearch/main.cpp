#include <iostream>
using namespace std;

struct node {
	int value;
	struct node* left = NULL;
	struct node* right = NULL;
};

struct node* root = NULL;

void insert_integer(struct node** tree, int value, node* parent, node* currentNode, int i) {
	if (currentNode == NULL) {
		currentNode = new node;
		currentNode->value = value;
		if (i != 0) {
			parent->left = currentNode;
		}
		else {
			
			root = currentNode;

		}
		tree[i] = currentNode;
	}
	else if (value < currentNode->value){		
		insert_integer(tree, value, currentNode, currentNode->left, i);
	}
	else {
		insert_integer(tree, value, currentNode, currentNode->right, i);
	}

}

void print_tree(struct node* tree) {
	
	if (tree->left != NULL) {
		print_tree(tree->left);
	}
	
	cout << "Value: " << tree->value << "\n";
	
	if (tree->right != NULL) {
		print_tree(tree->right);
	}
	
}

void terminate_tree(struct node* tree) {

}

int main() {

	node** tree;
	int size;
	int value;
	cout << "Enter the size of the tree." << "\n";
	cin >> size;
	tree = new node*[size];

	cout << "The size of the tree is: " << size << "\n";
	for (int i = 0; i < size; i++) {
		cout << "Enter value number " << (i + 1) << "." << "\n";
		cin >> value;
		insert_integer(tree, value, root, root, i);
		
	}
	
	print_tree(tree[0]);
//	terminate_tree(*tree);

	int x;
	cout << "Enter a value to finish." << "\n";
	cin >> x;
	return 0;
}
