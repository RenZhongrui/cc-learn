// 002_c++_const.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

// cout要引入iostream并且使用命名空间namespace
#include <iostream>
using namespace std;
int main()
{
	const int a = 0xFe;// 254
	const int b = 017;// 15
	cout << a<<endl;
	std:cout << "hell" << endl;
	printf("b = %d\n", b);
    return 0;
} 

