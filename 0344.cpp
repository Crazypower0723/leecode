// 0344.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "0344.h"


int main()
{
	Solution s;
	vector<char> ans = { 'h', 'e', 'l', 'l', 'o' };
	s.reverseString(ans);
	for (auto T : ans) {
		cout << T << " ";
	}
	cout << endl;
	return 0;
}

