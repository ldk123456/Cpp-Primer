//#include<iostream>
//int main() {
//	int ival = 1024;
//	int &refVal = ival;	//refValָ��ival����ival����һ�����֣�
//	std::cout << ival << " " << refVal << std::endl;	//>>>1024 1024
//	//int &refVal2;	//	�������ñ��뱻��ʼ��
//	refVal = 2;	//��2����refValָ��Ķ��󣬴˴����Ǹ�����ival
//	std::cout << ival << " " << refVal << std::endl;	//>>>2 2
//	int li = refVal;	//��li=ivalִ�н��һ��
//	std::cout << li << std::endl;	//>>>2
//	//��ȷ��refVal3�󶨵����Ǹ���refVal�󶨵Ķ����ϣ�������ǰ󶨵�ival��
//	int &refVal3 = refVal;
//	//������refVal�󶨵Ķ����ֵ��ʼ������i
//	int i = refVal;	//��ȷ��i����ʼ��Ϊival��ֵ
//	std::cout << i << " " << refVal3 << std::endl;	//>>>2 2
//	system("pause");
//	return 0;
//}