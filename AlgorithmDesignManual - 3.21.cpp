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


template<typename T> struct binaryTree {
	T item;
	binaryTree<T> *left;
	binaryTree<T> *right;
};


template<typename T> bool compare ( binaryTree<T> *r1, binaryTree<T> *r2 ) {
	if ( r1 && r2 ) {
		if ( r1->item == r2->item )
			return ( compare(r1->left, r2->left) && compare(r1->right, r2->right) );
		else
			return false;
	} else if ( r1 || r2 ) {
		return false;
	} else {
		return true;
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
	
	traverse(tree, 50);

	return 0;
}