#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "Employee.h"
using namespace std;
//��{�R���X�g���N�^
MyClass::MyClass() {
	cout << "��{�F�R���X�g���N�^" << endl;
}

MyClass::MyClass(int num,int number) {
	cout << "��{:��������R���X�g���N�^" << endl;
}

MyClass::~MyClass() {
	cout << "��{�G�f�X�g���N�^" << endl;
}

NewClass::NewClass() {
	cout << "�h���R���X�g���N�^" << endl;
}

NewClass::NewClass(int num,int number) :MyClass(num) {
	cout << "�h����������R���X�g���N�^" << endl;
}

NewClass::~NewClass() {
	cout << "�h���G�f�X�g���N�^" << endl;
}

void NewClass::bbb() {
	cout << "bbb�̏���" << endl;
}