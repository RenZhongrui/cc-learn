// 008_c++_stack_heap.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int a = 0; // GVAR全局初始化区
int* p4; // bss全局未初始化区
int main()
{

	int b = 1; // stack栈区变量
	char s[] = "abc"; // stack栈区变量
	int* p = NULL; // stack栈区变量
	char* p1 = "123456"; // 124567\0在常量区，p1在stack栈区
	static int c = 0; // (GVAR)全局（静态）初始化区
	int* p2 = new int(10); // heap堆区变量
	char* p3 = new char[7]; // heap堆区变量
	strcpy_s(p3, 7, "123"); // text代码区
	if(p2 != NULL){
		delete p2;
		p2 = NULL;
	}
	if (p3!=NULL) {
		// 删除数组，释放资源
		delete[] p3;
		p3 = NULL;
	}	
    return 0;
}

