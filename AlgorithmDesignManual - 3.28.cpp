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

int *array_m ( int *X, int n ) {
	if ( !X || n < 2 ) return NULL;

	int *M = new int[n];
	int product = X[0];
	for ( int i = 1; i <= n-1; i++ ) {
		M[i] = product;
		product = product * X[i];
	}
	product = X[n-1];
	for ( int i = n-2; i>0; i-- ) {
		M[i] = M[i] * product;
		product = product * X[i];
	}
	M[0] = product;
	return M;
}



int main()
{
	int *a = new int[4];
	for ( int i = 0; i<4; i++)
		a[i] = i+1;

	int *b = array_m(a, 4);
	for ( int i = 0; i < 4; i++)
		cout << b[i];
	
	return 0;
}