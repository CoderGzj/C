#include <stdio.h>
#include <string.h>
#include <errno.h>

//C���� �ļ�

//1. Ϊʲôʹ���ļ���
//ʹ���ļ����ǿ��Խ�����ֱ�Ӵ���ڵ��Ե�Ӳ���ϣ����������ݵĳ־û���

//2. ʲô���ļ���
//�ļ�������3���֣��ļ�·��+�ļ�������+�ļ���׺

//3. �ļ��Ĵ򿪺͹ر�
//�ļ�ָ�� FILE* 
//�� fopen() "r"ֻ�� "w"ֻд
//�ر� fclose()
 
//4. �ļ���˳���д

//5. �ļ��������д
 
//6. �ı��ļ��Ͷ������ļ�
 
//7. �ļ���ȡ�������ж�

//8. �ļ�������

int main()
{
	//���ļ� ��FILE* ����
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//д�ļ�
	fputc('a', pf);
	
	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}