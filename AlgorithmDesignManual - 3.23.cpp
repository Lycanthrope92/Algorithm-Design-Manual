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

template <typename T> void reverse ( list<T> **head )
{
	if ( head == NULL ) return;

	list<T> *prev = NULL; list<T> *it = *head;
	list<T> *next = NULL;
	while ( it != NULL )
	{
		next = it->next;
		it->next = prev;
		prev = it;
		*head = it;
		it = next;
	}

	return;
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
	
	reverse(&myList);

	return 0;
}