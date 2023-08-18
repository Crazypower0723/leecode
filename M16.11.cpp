// M16.11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "M16.11.h"


int main()
{
	Solution s;
	for (auto T: s.divingBoard(1, 2, 3))
	{
		cout << T << " ";
	}
	cout << endl;
    return 0;
}

