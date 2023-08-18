#include <stdio.h>

//指针进阶

int main()
{
	//1. 字符指针
	char ch = 'w';
	char* pc = &ch;
	*pc = 'b';
	/************************/
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";

	char arr1[] = "abcdef";
	char arr2[] = "abcdef";

	if (p1 == p2)
		printf("p1==p2\n");//1
	else
		printf("p1!=p2\n");

	if (arr1 == arr2)
		printf("arr1==arr2\n");
	else
		printf("arr1!=arr2\n");//1

	//2. 指针数组
	int* arr3[6];  //存放整形指针的数组

	//3. 数组指针
	int(*p)[5] = &arr3;    //指向数组的指针
	//注意：区分 arr &arr


	//4. 数组传参和指针传参
	//一维、二维数组    一级、二级指针：类型匹配，相互对应
	
	//5. 函数指针
	int (*pf)(int, int);
	/*************************************/
	( * ( void (*)() ) 0 )();

	void ( * signal( int,void(*)(int) ) )(int);
	//改造
	typedef void(*pf_t)(int);
	pf_t signal(int, pf_t);

	//6. 函数指针数组
	int (*arr4[5])(int, int);

	//7. 指向函数指针数组的指针
	int (*(*pfp)[])(int, int) = &arr4;

	//8. 回调函数
	//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个函数
	//当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。

	
	//9. 指针和数组面试题的解析

	//int main()
	//{
	//	int a[5][5];
	//	int(*p)[4];
	//	p = a;
	//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); //FF FF FF FC，-4
	//	return 0;
	//}
	
	//int main()
	//{
	//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	//	char** cp[] = { c + 3,c + 2,c + 1,c };
	//	char*** cpp = cp;
	//	printf("%s\n", **++cpp);         //POINT
	//	printf("%s\n", *-- * ++cpp + 3); //ER
	//	printf("%s\n", *cpp[-2] + 3);    //ST
	//	printf("%s\n", cpp[-1][-1] + 1); //EW
	//	return 0;
	//}
	
	
	
	
	
	
	
	
	return 0;
}