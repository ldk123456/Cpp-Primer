#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (auto &i : v){	//����v�е�ÿ��Ԫ�أ�ע�⣺i��һ�����ã�
		i *= i;		//��Ԫ��ֵ��ƽ��
	}
	for (auto i : v){	//����v�е�ÿ��Ԫ��
		cout << i << " ";	//�����Ԫ��
	}
	cout << endl;
	system("pause");
	return 0;
}