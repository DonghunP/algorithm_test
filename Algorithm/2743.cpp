#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
	string s;

	getline(cin, s);

	printf("%d\n", s.size());

	return 0;
}