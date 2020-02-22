// 006_c++_vector.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
// 引入vector
#include <vector>
using namespace std;

int main()
{
	vector<int> vec = {1,2,3,4};
	vec.push_back(5); // 在尾部追加数据
	cout << "在尾部追加数据" << endl;
	for (int i = 0; i < vec.size();i++) {
		cout << vec[i] << endl;
	}

	cout << "vector能够容纳的能力，有自己的扩容方式" << endl;
	cout << vec.capacity() << endl;


	// 插入操作，第一个参数是索引，第二个参数是数值
	cout << "在倒数第二个索引插入6" << endl;
	vec.insert(vec.end()-1,6);
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}

	// 删除操作
	vec.pop_back();
	cout << "在尾部删除数据" << endl;
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}

	cout << "指定位置删除数据" << endl;
	vec.erase(vec.end()-1);
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
    return 0;
}

