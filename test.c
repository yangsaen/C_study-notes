#define _CRT_SECURE_NO_WARNINGS 1//��������"c���Ա���������ȫ������ʹ�ñ���������"������
//�ܶ�c�����Դ��ĺ������в���ȫ�����⣬���Ǳ������ṩ�İ�ȫ���������п�ƽ̨��/����ֲ��
#include <stdio.h>//�����ⲿ�ļ�stdio.h standard input output
int main()       //������-��������
{

	printf("hello world\n");//��ӡ����
	char ch = 'A';
	printf("%c\n", ch);
	int age = 25;
	printf("%d\n", age);
	float f= 5;
	printf("%f\n", f);	
	printf("%d\n", sizeof(char));  //1�������͵Ĵ�С
	printf("%d\n", sizeof(short)); //2
	printf("%d\n", sizeof(int));   //4
	printf("%d\n", sizeof(long));  //4/8
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8

	int num1 = 0;//���
	int num2 = 0;
	scanf("%d%d", &num1, &num2);//ȡ��ַ����
    int sum = num1 + num2;
	printf("sum=%d\n", sum);

	int a = 0;//�������д���#define  _CRT_SECURE_NO_WARNINGS 1�ı�������
	scanf("%d", &a);
	printf("%d\n", a);



	return 0;
}
//void main
//{

//}�ǹ�ʱ��д������Ҫ��