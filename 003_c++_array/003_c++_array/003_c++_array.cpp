// 003_c++_array.cpp : 定义控制台应用程序的入口点。
// 数组的声明和使用

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() 
{
	const int size = 6;
	int arr[size] = {0,1,2,3,4,5};
	// sizeof()函数可以返回数组所占的内存，而sizeof(a[0])返回的是数组第一个元素所占的内存。
	int length = sizeof(arr) / sizeof(arr[0]); 
	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;
	}
    return 0;
}