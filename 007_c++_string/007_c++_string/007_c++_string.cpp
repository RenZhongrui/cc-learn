// 007_c++_string.cpp : 定义控制台应用程序的入口点。

#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;
/*
c++中定义字符串是以空字符('\0')结束的字符数组,
空字符('\0')会自动添加到字符串的内部表示中

注释快捷键：ctrl+k+c 反注释：ctrl+k+u
*/

int main()
{
	// 一、字符串的表示
	// 1、字符串数组
	char str1[] = {"hello world"}; // 内存指向变量区，可以更改数组内的值，数组本身不可更改
	cout << str1 << endl;
	
	// 2、0,'\0','0'的区别
	// 计算机机器码表示：0：0x00；'\0'：0x00；'0'：十六进制是0x30 十进制就是48
	char c1 = 0;
	char c2 = '\0';
	char c3 = '0';


	// 3、字符串的指针表示法
	char* str2 = "Hello String"; // 内存指向常量区，指向的值是常量则不可更改，变量则可以改变，指针本身可以改变
	cout << str2 << endl;

	// 二、字符串的常见操作 引入string.h头文件

	// 1、字符串长度
	int length = strlen(str2);
	cout << "获取字符串长度：" << endl;
	cout << length << endl;
	cout << "获取字符串占用空间：" << endl;
	cout << sizeof(str2) << endl;

	// 2、字符串的比较，a > b返回值大于0，a < b返回值小于0， a = b返回值等于0
	// 比较规则是字符串从左向右比较字符的ASCII值，直到'\0'结束
	int result = strcmp(str1, str2);
	cout << "字符串的比较：" << endl;
	cout << result << endl;

	// 3、字符串拷贝，将str2内容复制到str1
	char str3[16] = { 0 };
	strcpy_s(str3, str1); // 安全的拷贝
	cout << "字符串的拷贝：" << endl;
	cout << str3 << endl;
	
	// 4、字符串拷贝，将字符串str2前n个字符，拷贝到str3中
	strncpy_s(str3, str2, 2);
	cout << "将字符串str2前n个字符，拷贝到str3中：" << endl;
	cout << str3 << endl;

	// 5、字符串拼接
	cout << "将字符串str1拼接到str3中：" << endl;
	strcat_s(str3, str1);
	cout << str3 << endl;

	// 6、查找字符，返回h第一次出现的位置
	cout << "查找字符，返回h第一次出现的位置：" << endl;
	char* index1 = strchr(str1, 'r');
	cout << index1 << endl; // 返回r之后的内容 rld，即返回r所在的后面的子串

	// 7、查找字符串，返回字符串第一次出现的位置
	cout << "查找字符串，返回h第一次出现的位置：" << endl;
	char* index2 = strstr(str1, "wo"); // 如果wo在str1中，则返回wo往后的字符串，即wo所在的字符串
	cout << index2 << endl;// 返回world

	// 8、字符串string
	string stri = "c++ string";
	string stri2 = "string";
	int length1 = stri.length();// 字符串长度
	int length2 = stri.size(); // 字符串大小
	int capacity = stri.capacity(); // 容量
	cout << "字符串长度：" << endl;
	cout << length << endl; // 10
	cout << length2 << endl;// 12
	cout << capacity << endl;// 15
	cout << (stri == stri) << endl; // 不等返回0，相等返回1

	// 9、c++风格的字符串转化为c风格的字符串
	const char* c_str = stri.c_str();
	cout << c_str << endl;

	// 10、通过[index]随机访问某个字符
	char s = stri[2];
	cout << s << endl;

	// 11、字符串赋值，使用=号
	string s1 = "ddd";
	cout << s1.c_str() << endl;

	// 12、使用连接符号+
	string s3 = stri + s1;
	cout << s3.c_str() << endl;

    return 0;
}

