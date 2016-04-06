/*
*カードの値を評価するプログラム
*ベガスパブリッシングライセンスの下公開されています。
*(c)2014 カレッジブラックジャックチーム
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int count = 0;
	char card_name[3];
	do{
		puts("カード名を入力してください：");
		scanf("%2s",card_name);
		int val = 0;
		switch(card_name[0]){
		case 'K':
		case 'Q':
		case 'J':
			val = 10;
			break;
		case 'A':
			val = 11;
			break;
		case 'X':
			continue;
		default:
			val = atoi(card_name);
			if((val < 1) || (val > 10)){
			puts("値が不正です");
			continue;
			}
		}
		if((val >= 3) && (val <= 6)){
			puts("カウントが増えます\n");
			count++;
		}else if(val == 10){
			puts("カウントが減ります");
			count--;
		}
		printf("現在のカウント：%i\n",count);
	} while(card_name[0] != 'X');
	return 0;
}
	
