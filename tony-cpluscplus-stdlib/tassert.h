#pragma once
#define NDEBUG
#include <assert.h>

class TAssert {

public:
	static TAssert getInstance();
	virtual ~TAssert();
	void test();
private:
	TAssert();
	int assert_v;
};
