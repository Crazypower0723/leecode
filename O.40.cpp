// O.40.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "O.40.h"


int main()
{
	Solution s;
	vector<int> arr = {3,2,1};
	for (auto T: s.getLeastNumbers(arr, 2))
	{
		cout << T;
	}
	return 0;
}

