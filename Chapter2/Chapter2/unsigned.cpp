#include<iostream>
int main() {
	unsigned u = 10;
	int i = -42;
	std::cout << i + i << std::endl;	//>>>-84
	std::cout << u + i << std::endl;	//>>>4294967264

	unsigned u1 = 42, u2 = 10;
	std::cout << u1 - u2 << std::endl;	//��ȷ�����32
	std::cout << u2 - u1 << std::endl;	//��ȷ�������ȡģ���ֵ

	for (int j = 10; j >= 0; j--){
		std::cout << j << std::endl;
	}

	//���󣺱���k��ԶҲ����С��0��ѭ������һֱ����
	/*for (unsigned k = 10; k >= 0; k--){
		std::cout << k << std::endl;
	}*/

	unsigned u3 = 11;	//ȷ��Ҫ�������������ӱ�����1������ʼ
	while (u3 > 0){
		--u3;	//�ȼ�1���������һ�ε���ʱ�ͻ����0
		std::cout << u3 << std::endl;
	}

	int i1 = 10, i2 = 42;
	std::cout<< i2 - i1 <<std::endl;
	std::cout<< i1 - i2 <<std::endl;
	std::cout<< i1 - u1 <<std::endl;
	std::cout<< u1 - i1 <<std::endl;

	system("pause");	//Ϊ���ó���������ͣһ�£���Ȼ���Զ��˳�����̨
	return 0;
}