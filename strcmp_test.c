#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[] = "abc";
	char b[] = "ABC";
	char c[80];

	printf("strcmp(%s,%s)の結果：%d\n",a,a,strcmp(a,a));
	printf("strcmp(%s,%s)の結果：%d\n",a,b,strcmp(a,b));
	printf("strcmp(%s,%s)の結果：%d\n",b,a,strcmp(b,a));
	printf("アルファベット入力：");
	scanf("%s",c);
	printf("strcmp(%s,Z)の結果：%d\n",c,strcmp(c,"Z"));
	printf("strcmp(Z,%s)の結果：%d\n",c,strcmp("Z",c));
	printf("strcmp(%s,N)の結果：%d\n",c,strcmp(c,"N"));
	printf("strcmp(N,%s)の結果：%d\n",c,strcmp("N",c));

	return 0;
}
