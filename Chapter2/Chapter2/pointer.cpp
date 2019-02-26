#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	int ival = 42;
	int *p = &ival;	//p存放着变量ival的地址，或者说p是指向变量ival的指针
	cout << *p << endl;	//由符号*得到指针p所指的对象，输出42

	*p = 0;	//由符号*得到指针p所指的对象，即可经由p为变量ival赋值
	cout << ival << endl;	//输出0

	int *p1 = nullptr;	//等价于int *p1 = 0
	int *p2 = 0;	//直接将p2初始化为字面常量0
	int *p3 = NULL;		//等价于int *p3 = 0

	int zero = 0;
	//p1 = zero;	//错误：不能把int变量直接赋给指针

	double obj = 3.14, *pd = &obj;
	//正确：void*能存放任意类型对象的地址
	void *pv = &obj;	//obj可以是任意类型的对象
	pv = pd;	//pv可以存放任意类型的指针

	int val = 1024;
	int *pi = &val;		//pi指向一个int型的数
	int **pp = &pi;		//pp指向一个int型的指针
	cout << "The value of val\n"
		<< "direct value: " << val << "\n"
		<< "indirect value: " << *pi << "\n"
		<< "doubly indrect value: " << **pp << endl;

	system("pause");
	return 0;
}