#include <stdio.h>
void skip(char *msg)
{
	/*
	printf("７番目の文字列から%s\n",*(msg + 7)); これだと*(msg + 7)の部分がポインタ変数のアドレスを意味することになる
	puts(msg + 7);
}
int main()
{
	char *msg_from_amy = "Don't call me";
	skip(msg_from_amy);
	return 0;
}
