// 0344.cpp : �������̨Ӧ�ó������ڵ㡣
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

