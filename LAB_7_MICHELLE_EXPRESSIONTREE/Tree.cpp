#include "Tree.h"

node* tree::NewNode(char data) {
	node* tempNode = new node; //-------------------try catch
	tempNode->left = tempNode->right = nullptr;
	tempNode->data = data;
	return tempNode;
}

bool tree::IsOperator(char data) {
	return (data == '+' || data == '-' || data == '*' || data == '/' || data == '^');
}

bool tree::IsEmpty(tree* tree)const {
	return tree->root = nullptr;
}

void tree::PrintInOrder(node* tree) const { //---------------print as a string with parenthesis
	if (tree) {
		PrintInOrder(tree->left);
		cout << tree->data << " ";
		PrintInOrder(tree->right);
	}

}

void tree::PrintPreOrder(node* tree)const { //---------------print as a string separated by tabs

	if (tree) {
		cout << tree->data << " ";
		PrintPreOrder(tree->left);
		PrintPreOrder(tree->right);
	}

}

void tree::PrintPostOrder(node* tree) const {//---------------print as a string separated by tabs
	PrintPreOrder(tree->left);
	PrintPreOrder(tree->right);
	cout << tree->data << " ";
}

node* tree::ConstructTree(string expression) {
	//--------------make a stack class. you need push and pop.
	node*t1,*t2,*t2;

	for (int i = 0; i < expression.length(); i++) {
		if (!IsOperator(expression[i])) {

		}

	}


}