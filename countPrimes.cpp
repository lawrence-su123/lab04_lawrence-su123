#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
#include "utility.h"

int countPrimes(int a[], int size) {
	int primes =0;
	for (int i = 0; i<size; i++) {
		if (a[i] <=0 || a[i] == 1)
		{
		}

		else if (isPrime(a[i])) {
			primes++;
		}
	}
	return primes;
}
