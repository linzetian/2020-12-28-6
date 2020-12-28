///make use of fscanf to solve the struct//
#include<stdio.h>
#include<string.h>
#include<errno.h>
struct S
{
	int a;
	float b;
	char ch[10];
};
int main()
{
	struct S s = { 3,3.14,"hello" };
	FILE* SPwrite = fopen("F:\\c语言基础\\test1.txt", "w");//w is write
	if (SPwrite == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	//write the file(格式化输入数据)
	fprintf(SPwrite, "%d %4.2f %s", s.a, s.b, s.ch);//这里不能有逗号，如scanf一样
	//printf("%d %f %s", s.a, s.b, s.ch);
	fclose(SPwrite);
	SPwrite = NULL;
	return 0;
}