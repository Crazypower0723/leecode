// 0027.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "0027.h"


int main()
{
	Solution s;
	vector<int> v = { 3,2,2,3 };
	s.removeElement(v, 2);
	for (auto T:v)
	{
		cout << T << "";
	}
	cout << endl;
    return 0;
}

