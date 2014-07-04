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

void reverse_wrods_in_sentence ( char *a ) {
	if ( a == NULL ) return;
	int size = strlen(a);
	for ( int i = 0; i< size/2; i++) {
		swap(a[i],a[size-1-i]);
	}
	int start = 0; int i;
	for ( i = 1; i < size; i++ ) {
		if ( a[i] == ' ' ) {
			int end = i -1;
			int count = (end-start)/2 + (end-start)%2;
			while ( count > 0 ) {
				swap(a[start],a[end]);
				start++; end--;
				count--;
			}
			start = i + 1;

		}
	}

	if ( start < size -1 ) {
		int end = size -1;
		int count = (end-start)/2 + (end-start)%2;
		while ( count > 0 ) {
			swap(a[start],a[end]);
			start++; end--;
			count--;
		}

	}
}






int main()
{
	char a[] = "I love Computer ScienceS";

	reverse_wrods_in_sentence(a);

	return 0;
}