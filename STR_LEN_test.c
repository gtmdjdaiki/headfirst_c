#include <stdio.h>
#include <string.h>

int main()
{
	char search[5];
	int len;
	printf("検索語:");
	fgets(search,sizeof(search),stdin);
	/* len = strlen(serch); これだとfgetsでキーボードから入力した改行コードがNULLの前にあるため、一文字多くなる。*/
	search[strlen(search) -1] = '\0'; /*これで改行コードを消す*/
	len = strlen(search);
	printf("%d文字です\n",len);
	return 0;
}

