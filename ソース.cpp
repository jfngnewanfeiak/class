#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <random>
#include "Employee.h"
using namespace std;
int aaa();
#include <stdio.h>

int bbb(void) {

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			printf("\x1b[%dm %03d \x1b[0m", i * 10 + j, i * 10 + j);
		}
		printf("\n");
	}
	return 0;
}


int main(void) {
	MyClass *myclass;
	return 0;
}

int aaa() {
	int end = 0;
	int num = 0;
	while (end == 0) {
		scanf("%d", &num);
		if (num == 1) {
			end = 1;
		}
		printf("%d\n", num);
		if (num == 2) {
			return 2;
		}
	}
	return 0;
}