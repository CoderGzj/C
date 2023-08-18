#include <stdio.h>
#include <string.h>
#include <errno.h>

//C语言 文件

//1. 为什么使用文件？
//使用文件我们可以将数据直接存放在电脑的硬盘上，做到了数据的持久化。

//2. 什么是文件？
//文件名包含3部分：文件路径+文件名主干+文件后缀

//3. 文件的打开和关闭
//文件指针 FILE* 
//打开 fopen() "r"只读 "w"只写
//关闭 fclose()
 
//4. 文件的顺序读写

//5. 文件的随机读写
 
//6. 文本文件和二进制文件
 
//7. 文件读取结束的判定

//8. 文件缓冲区

int main()
{
	//打开文件 用FILE* 接收
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//写文件
	fputc('a', pf);
	
	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}