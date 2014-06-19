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


template <typename T> void insert_list ( list<T> **l, T x)
{
	list<T>* p = new list<T>;
	p->item = x;
	p->next = *l;
	*l = p;
}

template <typename T> list<T> *middle_node (list<T> *head )
{
	if ( head == NULL )
		return NULL;

	list<T> *it1 = head;
	list<T> *it2 = head;

	while ( it2 != NULL && it2->next != NULL )
	{
		it1 = it1->next;
		it2 = it2->next->next;
	}

	return it1;
}








int main()
{
	list<char> *myList = new list<char>; myList = NULL;
	list<char> **p= &myList;

	insert_list ( p, 'a');
	insert_list ( p, 'b');
	insert_list ( p, 'b');
	insert_list ( p, 'a');
	//insert_list ( p, ' ');
	/*insert_list ( p, 't');
	insert_list ( p, 'u');
	insert_list ( p, 'b');
	//insert_list ( p, ' ');*/
	insert_list ( p, 'a');
	
	list<char> *b = middle_node(myList);

	return 0;
}