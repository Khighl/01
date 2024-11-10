//#define _CRT_SECURE_NO_WARNINGS 1
#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;


int* fun()
{
	int* p = new int(100);
	return p;
}


int main()
{
	int a = 2;
	int* p=fun();
	cout << *p;


	return 0;
}