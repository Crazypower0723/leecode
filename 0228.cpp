// 0228.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "0228.h"


int main()
{
	Solution s;
	vector<int> v = {0,1,2,4,5,7};
	for (auto T:s.summaryRanges(v))
	{
		cout << T << endl;
	}
    return 0;
}

