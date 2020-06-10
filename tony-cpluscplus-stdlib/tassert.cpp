/*test assert macro*/
#include <stdio.h>
#include <stdlib.h>
#include "tassert.h"

//If use assert,must define NDEBUG
void test() {
	assert(0 < assert_v);
	abort();
}