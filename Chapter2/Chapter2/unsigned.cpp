#include<iostream>
int main() {
	unsigned u = 10;
	int i = -42;
	std::cout << i + i << std::endl;	//>>>-84
	std::cout << u + i << std::endl;	//>>>4294967264

	unsigned u1 = 42, u2 = 10;
	std::cout << u1 - u2 << std::endl;	//正确：输出32
	std::cout << u2 - u1 << std::endl;	//正确：结果是取模后的值

	for (int j = 10; j >= 0; j--){
		std::cout << j << std::endl;
	}

	//错误：变量k永远也不会小于0，循环条件一直成立
	/*for (unsigned k = 10; k >= 0; k--){
		std::cout << k << std::endl;
	}*/

	unsigned u3 = 11;	//确定要输出的最大数，从比它大1的数开始
	while (u3 > 0){
		--u3;	//先减1，这样最后一次迭代时就会输出0
		std::cout << u3 << std::endl;
	}

	int i1 = 10, i2 = 42;
	std::cout<< i2 - i1 <<std::endl;
	std::cout<< i1 - i2 <<std::endl;
	std::cout<< i1 - u1 <<std::endl;
	std::cout<< u1 - i1 <<std::endl;

	system("pause");	//为了让程序运行完停一下，不然会自动退出控制台
	return 0;
}