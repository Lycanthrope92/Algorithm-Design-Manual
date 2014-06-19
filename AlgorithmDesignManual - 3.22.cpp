#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
#include <limits>
#include <algorithm>

#include <cstdlib>
#include <fstream>
#include <sstream>
#include <signal.h>
#include <utility>
using namespace std;

template <typename T> struct list {
	T item;
	list<T> *next;
};

template<typename T> struct binaryTree {
	T item;
	binaryTree<T> *left;
	binaryTree<T> *right;
};


template<typename T> convert_tree_to_list ( binaryTree<T> *root, list<T> **head ) {
	if ( root ) {
		convert_tree_to_list ( root->right, head);
		list<T> *temp = new list<T>;
		temp->item = root->item;
		temp->next = *head;
		*head = temp;
		convert_tree_to_list ( root->left, head);
	} else {
		return;
	}


}






int main()
{
	binaryTree<int> *tree = new binaryTree<int>;
	tree->item = 20;
	binaryTree<int> *temp = new binaryTree<int>;
	temp->item = 10; 
	binaryTree<int> *temp2 = new binaryTree<int>;
	temp2->item = 30;
	binaryTree<int> *temp3 = new binaryTree<int>;
	temp3->item = 25;
	temp->left = NULL; temp->right = temp3;
	temp2->left = NULL; temp2->right = NULL;
	temp3->left = NULL; temp3->right = NULL;
	tree->left = temp;
	tree->right = temp2;
	

	return 0;
}