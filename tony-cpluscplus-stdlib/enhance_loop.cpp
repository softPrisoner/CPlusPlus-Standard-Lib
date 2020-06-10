/*
*Enhance  Loop
@author wabslygzj@163.com (Tony Li)
*/
#include <iostream>
#include <stdio.h>
#include <vector>
#include <set>
using namespace std;

void forPlus() {
	vector<unsigned> scores;

	unsigned int grade;
	while (cin >> grade) {
		if (grade <= 100) {
			++scores[grade / 10];
		}
	}
	for (unsigned i : scores) {
		cout << i << endl;
	}
}

void forPlus2() {
	//Use auto to visit array
	int array[] = { 1,2,3,5 };
	for (auto s : array) {
		printf("" + s);
	}
}

void forPlus3() {
	multiset<int> ms = { 1,2,6,2,4,3,3,8 };
	for (auto item : ms) {
		cout << item << endl;
	}

	//visit elements by iterator.
	for (multiset<int>::iterator it = ms.begin();it != ms.end();it++) {
		cout << *it << " ";
	}

	cout << endl;
}
