/* send_dear_johns.cのコードでresuponseの各データを呼び出す処理を
　switch文から関数ポインタの配列を利用したコードに書き換える
 20160321 */

#include <stdio.h>

enum response_type{DUMP,SECOND_CHANCE,MARRIAGE};
typedef struct{
	char *name;
	enum response_type type;
}response;

void dump(response r)
{
	printf("%sさんへ,\n",r.name);
	puts("残念ながら、前回のデートの結果、");
	puts("再度お会いすることは無いとの連絡を受けました。");
}

void second_chance(response r)
{
	printf("%sさんへ,\n",r.name);
	puts("よいお知らせです。前回のデートの結果、");
	puts("もう一度お会いしたいとの連絡を受けました。");
}

void marriage(response r)
{
	printf("%sさんへ,\n",r.name);
	puts("おめでとうございます！前回のデートの結果、");
	puts("結婚を申し込みたいとの連絡を受けました。");
}

void(*replies[])(response) = {dump,second_chance,marriage};

int main()
{
	response r[] = {
	{"マイク",DUMP},{"ルイス",SECOND_CHANCE},
	{"マット",SECOND_CHANCE},{"ウィリアム",MARRIAGE}
	};
	int i;
	for(i = 0;i < 4;i++){
		(*replies[r[i].type])(r[i]);
/*
		switch(r[i].type){
			case DUMP:
				dump(r[i]);
				break;
			case SECOND_CHANCE:
				second_chance(r[i]);
				break;
			default:
				marriage(r[i]);
			}
*/
		}
	return 0;
}
