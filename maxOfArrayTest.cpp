#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {
  int first[5]={1,2,3,4,5};
  assertEquals(5,
		  maxOfArray(first,5),
		  "maxOfArray(first,5)" );

  int second[5]={1,1,1,1,1};
  assertEquals(1,
		  maxOfArray(second,5),
		  "maxofArray(second,5)");
	// Fill this in with exactly seven tests of maxOfArray
  int third[5]={5,6,7,8,9};
  assertEquals(9,
		  maxOfArray(third,5),
		  "maxofArray(third,5)");
  // that all pass, and that test various cases,
  int fourth[5]={-1,-2,-3,-4,-5};
  assertEquals(-1,
		  maxOfArray(fourth,5),
		  "maxofArray(fourth,5)");
  // i.e. where the max is at the beginning, middle and end of the array
  int fifth[5]={10,20,30,40,50};
  assertEquals(50,
		  maxOfArray(fifth,5),
		  "maxofArray(fifth,5)");
  // See lab instructions for details.
  int sixth[5]={2,3,6,8,10};
  assertEquals(10,
		  maxOfArray(sixth,5),
		  "maxofArray(sixth,5)");

  int seventh[5]={0,0,0,0,0};
  assertEquals(0,
		  maxOfArray(seventh,5),
		  "maxofArray(seventh,5)");
  return 0;
}
