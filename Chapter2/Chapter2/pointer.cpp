#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	int ival = 42;
	int *p = &ival;	//p����ű���ival�ĵ�ַ������˵p��ָ�����ival��ָ��
	cout << *p << endl;	//�ɷ���*�õ�ָ��p��ָ�Ķ������42

	*p = 0;	//�ɷ���*�õ�ָ��p��ָ�Ķ��󣬼��ɾ���pΪ����ival��ֵ
	cout << ival << endl;	//���0

	int *p1 = nullptr;	//�ȼ���int *p1 = 0
	int *p2 = 0;	//ֱ�ӽ�p2��ʼ��Ϊ���泣��0
	int *p3 = NULL;		//�ȼ���int *p3 = 0

	int zero = 0;
	//p1 = zero;	//���󣺲��ܰ�int����ֱ�Ӹ���ָ��

	double obj = 3.14, *pd = &obj;
	//��ȷ��void*�ܴ���������Ͷ���ĵ�ַ
	void *pv = &obj;	//obj�������������͵Ķ���
	pv = pd;	//pv���Դ���������͵�ָ��

	int val = 1024;
	int *pi = &val;		//piָ��һ��int�͵���
	int **pp = &pi;		//ppָ��һ��int�͵�ָ��
	cout << "The value of val\n"
		<< "direct value: " << val << "\n"
		<< "indirect value: " << *pi << "\n"
		<< "doubly indrect value: " << **pp << endl;

	system("pause");
	return 0;
}