// 0134.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "0134.h"


int main()
{
	Solution s;
	vector<int> p = {1,2,3,4,5};
	vector<int> q = {3,4,5,1,2};
	cout << s.canCompleteCircuit(p,q) << endl;
    return 0;
}

