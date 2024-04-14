#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "Employee.h"
using namespace std;
//基本コンストラクタ
MyClass::MyClass() {
	cout << "基本：コンストラクタ" << endl;
}

MyClass::MyClass(int num,int number) {
	cout << "基本:引数ありコンストラクタ" << endl;
}

MyClass::~MyClass() {
	cout << "基本；デストラクタ" << endl;
}

NewClass::NewClass() {
	cout << "派生コンストラクタ" << endl;
}

NewClass::NewClass(int num,int number) :MyClass(num) {
	cout << "派生引数ありコンストラクタ" << endl;
}

NewClass::~NewClass() {
	cout << "派生；デストラクタ" << endl;
}

void NewClass::bbb() {
	cout << "bbbの処理" << endl;
}