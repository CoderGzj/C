#include <stdio.h>

//ָ�����

int main()
{
	//1. �ַ�ָ��
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

	//2. ָ������
	int* arr3[6];  //�������ָ�������

	//3. ����ָ��
	int(*p)[5] = &arr3;    //ָ�������ָ��
	//ע�⣺���� arr &arr


	//4. ���鴫�κ�ָ�봫��
	//һά����ά����    һ��������ָ�룺����ƥ�䣬�໥��Ӧ
	
	//5. ����ָ��
	int (*pf)(int, int);
	/*************************************/
	( * ( void (*)() ) 0 )();

	void ( * signal( int,void(*)(int) ) )(int);
	//����
	typedef void(*pf_t)(int);
	pf_t signal(int, pf_t);

	//6. ����ָ������
	int (*arr4[5])(int, int);

	//7. ָ����ָ�������ָ��
	int (*(*pfp)[])(int, int) = &arr4;

	//8. �ص�����
	//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ������
	//�����ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص�������

	
	//9. ָ�������������Ľ���

	//int main()
	//{
	//	int a[5][5];
	//	int(*p)[4];
	//	p = a;
	//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); //FF FF FF FC��-4
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