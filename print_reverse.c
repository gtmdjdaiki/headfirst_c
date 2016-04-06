#include <stdio.h>
#include <string.h>

void print_reverse(char *s)
{
	size_t len = strlen(s);
	char *t = s + len -1;
	while(t >= s){
		printf("%c",*t);
		t = t -1;
	}
	puts("");
}

int main()
{
	char moji[20];
	char gyaku[20];
	printf("文字列入力：");
	fgets(moji,sizeof(moji),stdin);
	moji[strlen(moji) -1] = '\0';
	printf("入力した文字は%sです\n",moji);
	printf("逆順だと");
	print_reverse(moji);
	return 0;
}
