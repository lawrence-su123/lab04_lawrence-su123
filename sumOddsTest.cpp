#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

	int first[5] = {1,2,3,4,5};
	assertEquals(9,
			sumOdds(first,5),
			"sumOdds(first,5)" );

	int second[5] = {0,0,0,0,0};
	assertEquals(0,
			sumOdds(second,5 ),
			"sumOdds(second,5)" );

	int third[5] = {-1,2,-3,4,-5};
	assertEquals(-9,
			sumOdds(third,5),
			"sumOdds(third,5)" );

	int fourth[5] = {3,3,3,3,3};
	assertEquals(15,
			sumOdds(fourth,5),
			"sumOdds(fourth,5)" );

	int fifth[5] = {2,4,6,8,10};
	assertEquals(0,
			sumOdds(fifth,5),
			"sumOdds(fifth,5)" );

	int sixth[5] = {-1,-1,-1,-1,-1};
	assertEquals(-5,
			sumOdds(sixth,5),
			"sumOdds(sixth,5)" );

	int seventh[5] = {11,12,13,14,15};
	assertEquals(39,
			sumOdds(seventh,5),
			"sumOdds(seventh,5)" );
	return 0;
}



// Fill this in with exactly seven tests that determine whether your
// code for sumOdds() correctly sums up all the odd numbers in
// arrays of various sizes.  Include both positive, negative and
// zero values in your test arrays.

