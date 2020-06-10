/*
*Delete the ref pointer for testing
@author wabslygzj@163.com (Tony Li)
*/
#include  <iostream>
#include <stdio.h>

void PointDelete() {
	int* p = new int;
	*p = 3;
	printf("before delete" + *p);
	delete p;
	//p = NULL;
	printf("after delete" + *p);
}
