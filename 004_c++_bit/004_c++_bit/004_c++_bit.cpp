// 004_c++_bit.cpp : �������̨Ӧ�ó������ڵ㡣
// λ������߼�& | ~,�ǰ���ת��Ϊ�����ƺ��ٽ�ÿһλ���жԱ����㣬Ȼ��ó������

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{

	// ����5 & 3
	int a = 5, b = 3; // ������a=101 b = 011(ǰ��λ��������0) 101&011 = 1
	cout << (a&b) << endl; // �õ������1
	cout << (a|b) << endl; // �õ������6�� 101&011 = 111 = 7
	cout << (~a) << endl; // 0000000000000101ȡ�����õ�1111111111111010��ת��Ϊʮ���Ƶ�ʱ��Ҫȡ���� = -6

	cout << (a << 2) << endl; // 101������λ�õ�10100 = 20
	cout << (a >> 2) << endl; // 101������λ�õ�1 = 1
    return 0;
}
