// M10.01.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "M10.01.h"


int main()
{
	Solution s;
	vector<int> A = {1,2,3,0,0,0};
	vector<int> B = {2,5,6};
	s.merge(A,3,B,3);
	for (int i = 0;i < 6;++i)
	{
		cout << A[i] << " ";
	}
	cout << endl;
    return 0;
}

