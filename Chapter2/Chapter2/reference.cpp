//#include<iostream>
//int main() {
//	int ival = 1024;
//	int &refVal = ival;	//refVal指向ival（是ival的另一个名字）
//	std::cout << ival << " " << refVal << std::endl;	//>>>1024 1024
//	//int &refVal2;	//	报错：引用必须被初始化
//	refVal = 2;	//把2赋给refVal指向的对象，此处既是赋给了ival
//	std::cout << ival << " " << refVal << std::endl;	//>>>2 2
//	int li = refVal;	//与li=ival执行结果一样
//	std::cout << li << std::endl;	//>>>2
//	//正确：refVal3绑定到了那个与refVal绑定的对象上，这里就是绑定到ival上
//	int &refVal3 = refVal;
//	//利用与refVal绑定的对象的值初始化变量i
//	int i = refVal;	//正确：i被初始化为ival的值
//	std::cout << i << " " << refVal3 << std::endl;	//>>>2 2
//	system("pause");
//	return 0;
//}