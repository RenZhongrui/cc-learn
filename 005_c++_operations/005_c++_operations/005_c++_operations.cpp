// 005_c++_operations.cpp : 定义控制台应用程序的入口点。
/*
杂项运算符
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	int a = 3;
	// sizeof:返回变量的大小
	cout << sizeof(a) << endl; // 输出4
	// 三目运算符
	int b = 2;
	int c = a > b ? a : b;
	cout << c << endl; // 输出3
					   // 逗号运算符
	int d = (1, 2, 3);
	cout << d << endl; // 返回最后一个数3

	// Case 强转运算符
	// &取址运算，如&a，获取的是a的内存地址

	// *指针运算符，指向一个变量
	int *p = &d; // 将变量d的地址赋值给p
	cout << p << endl; // 返回d的地址 返回008FFDA8
	cout << *p << endl; // *取值运算，将指针p所指向的地址的值取出，返回3

	// 定义结构体
	typedef struct {
		short Sundy = 0;
		short Monday = 1;
		short Tuesday = 2;
		short Wednesday = 3;
		short Thursday = 4;
		short Friday = 5;
		short Saturday = 6;
	} Week;

	Week week;
	cout <<week.Sundy << endl; // 输出0
	cout << sizeof(week) << endl; // 输出14，一个short占俩字节，7个short = 14，结构体的大小是所有成员变量的和
	// 由于存储变量时地址对齐的要求，编译器在编译程序时会遵循两条原则：

	//一、成员的偏移量必须是成员大小的整数倍（0被认为是任何数的整数倍）；

	//	二、结构体大小必须是所有成员大小的整数倍。
	// 所以不一定是所有变量之和，必须是整数倍

    return 0;
}

