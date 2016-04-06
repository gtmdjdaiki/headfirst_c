/*
*カードの値を評価するプログラム
*ベガスパブリッシングライセンスの下公開されています。
*(c)2014 カレッジブラックジャックチーム
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char card_name[3];
	puts("カード名を入力してください：");
	scanf("%2s",card_name);
	int val = 0;
	if(card_name[0] == 'K'){
		val = 10;
	}else if (card_name[0] == 'Q'){
		val = 10;
	}else if (card_name[0] == 'j'){
		val = 10;
	}else if (card_name[0] == 'A'){
		val = 11;
	}else{
		val = atoi(card_name);
	}
	int count;
	if(val >= 3 && val <= 6){
		puts("カウントが増えます\n");
		count++;
	}else if(val == 10){
		puts("カウントが減ります");
		count--;
	}
	
	printf("カードの値：%i\n",val);
	return 0;
}
	
