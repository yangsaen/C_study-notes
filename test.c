#define _CRT_SECURE_NO_WARNINGS 1//忽略所有"c语言本身函数不安全，建议使用编译器函数"的提醒
//很多c语言自带的函数都有不安全的问题，但是编译器提供的安全函数不具有跨平台性/可移植性
#include <stdio.h>//包含外部文件stdio.h standard input output
int main()       //主函数-程序的入口
{

	printf("hello world\n");//打印函数
	char ch = 'A';
	printf("%c\n", ch);
	int age = 25;
	printf("%d\n", age);
	float f= 5;
	printf("%f\n", f);	
	printf("%d\n", sizeof(char));  //1数据类型的大小
	printf("%d\n", sizeof(short)); //2
	printf("%d\n", sizeof(int));   //4
	printf("%d\n", sizeof(long));  //4/8
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8

	int num1 = 0;//求和
	int num2 = 0;
	scanf("%d%d", &num1, &num2);//取地址符号
    int sum = num1 + num2;
	printf("sum=%d\n", sum);

	int a = 0;//关于首行代码#define  _CRT_SECURE_NO_WARNINGS 1的报错例子
	scanf("%d", &a);
	printf("%d\n", a);



	return 0;
}
//void main
//{

//}是过时的写法，不要用