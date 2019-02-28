#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (auto &i : v){	//对于v中的每个元素（注意：i是一个引用）
		i *= i;		//求元素值的平方
	}
	for (auto i : v){	//对于v中的每个元素
		cout << i << " ";	//输出该元素
	}
	cout << endl;
	system("pause");
	return 0;
}