// 001_c++_hello.cpp: 定义控制台应用程序的入口点。
//按住 ctrl+f5调试

#include "stdafx.h"

class Trace {
public:
	void print(const char* s) {
		printf("%s\n", s);
	};
};

int main()
{
	printf("%s\n", "hello C");
	Trace t;
	t.print("hello C++");
	return 0;
}