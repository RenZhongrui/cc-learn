// 003_c++_array.cpp : 定义控制台应用程序的入口点。
// 数组的声明和使用

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() 
{
	const int size = 6;
	int arr[size] = {0,1,2,3,4,5};
	// 1、sizeof()函数可以返回数组所占的内存，而sizeof(a[0])返回的是数组第一个元素所占的内存。
	int length = sizeof(arr) / sizeof(arr[0]); // 获取数组长度，在数组长度为5，但是值只有3个的时候，算出来的可能不对
	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;
	}

	// 2、将数组arr赋值给指针p
	int* p = arr;
	cout << *p << endl; // 获取数组第0个位置的数值
	cout << *(p+5) << endl; // 获取数组第5个位置的数值

	///3、二维数组,下面是2行4列，从0行0列开始到3行，3列结束
	int a[2][4] = { 
		{1,2,3,4},
		{5,6,7,8} 
	};
	///4、尽可能的将长的循环放在内部，短的循环放在外部，因为在小的时间段内，访问地址越接近越快，
	// 减少cpu跨切循环层的次数
	cout << "二维数组" << endl;
	for (int row = 0; row < 2; row++) {
		for (int col = 0; col < 4; col ++) {
			cout << a[row][col] << endl;
		}
	
	}

    return 0;
}