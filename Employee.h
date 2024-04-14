#pragma once


class MyClass {
public:
	MyClass();
	MyClass(int num,int number=0);
	~MyClass();
};

class NewClass : public MyClass {
public:
	NewClass();
	NewClass(int num,int number);
	~NewClass();
	void bbb();
};