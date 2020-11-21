#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
enum OrderType { PRE_ORDER, IN_ORDER, POST_ORDER};

class node {
	public:
	char data;
	node* left;
	node* right;
};

class tree{

	public:
		tree();
		tree(const tree& originalTree);
		void operator=(tree& originalTree);
		~tree();

		bool IsOperator(char data);//----------------
		node* NewNode(char data);//---------------
		node* ConstructTree(string expression);//------------------

		void MakeEmpty();
		bool IsEmpty(tree *tree)const;//-------------------------------
		void DeleteItem(node item);

		void PrintInOrder(node* tree)const;//-----------------??
		void PrintPreOrder(node* tree)const;//--------------??
		void PrintPostOrder(node* tree)const;//-------------------??

	private:
		node* root;
};

#endif

