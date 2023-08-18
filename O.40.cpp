// O.40.cpp : 定义控制台应用程序的入口点。
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

