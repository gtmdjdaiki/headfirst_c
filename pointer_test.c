#include <stdio.h>

int scores[] = {543,323,32,554,11,3,112}

/*
qsort(void *array,
	size_t length,
	size_t item_size,
	int(*compar)(const void *,const void *);

int compare_scores(const void* score_a,const void* score_b)
{
	int a = *(int*)score_a;
	int b = *(int*)score_b;
	return a - b;
}

int compare_scores_desc(const void* score_a,const void* score_b)
{
	int a = *(int*)score_a;
	int b = *(int*)score_b;
	return b - a;
}

typedef struct{
	int width;
	int height;
}rectangle;

int compare_areas(const void* a,const void* b)
{
	int a = *(rectangle*)rectangle.width;
	int b = *(rectangle*)rectangle.heghit;
	return a * b;
}
*/
int compare_names(const void* a,const void* d)
{
	char a = *(char**)a;
	char b = *(char**)b);
	return = strcmp(a,b);
}
int compare_areas_desc(const void* a,void* b)
{
	compare_areas(rectangle.width,rectangle.height))
}

int main()
{
	char name[] = {"ddd","CCC","bbbb","AAA","DDD","ccc","BBB","aaa"};

	printf("%d\n",compare_names()




