#pragma once
#include <iostream>
using namespace std;

template<class T>
class TemplateT {
public:
	TemplateT(T t);
	~TemplateT();
	void print();
private:
	TemplateT t;
};

template<class T>
TemplateT<T>::TemplateT(T t) {
	this->t = t;
}

template<class T>
TemplateT<T>::~TemplateT() {
}

template<class T>

void TemplateT<T>::print() {
	printf("template test");
}



