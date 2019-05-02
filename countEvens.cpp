#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
#include "utility.h"

int countEvens(int a[], int size) {
	int x = 0;
	for (int i=0; i<size; i++)
	{
		if (isEven(a[i])) {
			x++;
			//return 42; // STUB!  Replace with correct code.
		} 
	}
	return x;
}
