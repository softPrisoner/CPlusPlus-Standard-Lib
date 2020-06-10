/*
*Puzzle c++ problem
@author wabslygzj@163.com (Tony Li)
*/
#include <iostream>
#include <string>
#include <stdio.h>

//Define the elements collection.
#define TOTAL_ELEMENTS (sizeof(array)/sizeof(array[0]))
int array[] = { 23,34,12,17,204,99,16 };
/*
Test the index from index of -1 with [sizeof]
Analyze the the puzz
*/
void test5() {
	int d;
	//from -1,no right guess which skips the loop by sizeof.
	for (d = -1;d < (TOTAL_ELEMENTS - 2);d++) {
		printf("%d\n", array[d + 1]);
	}
	//
	unsigned int m = (unsigned int)-1;
	printf("Unsigned Int Value:" + 2 + m);

}