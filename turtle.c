#include <stdio.h>

typedef struct {
	const char *name;
	const char *species;
	int age;
} turtle;

void happy_birthday(turtle *a)
{
	a->age = a->age + 1;
	printf("誕生日おめでとう、%s！これで%i才ですね！\n",
		a->name,a->age);
}

int main()
{
	turtle myrtle = {"マートル","オサガメ",99};
	happy_birthday(&myrtle);
	printf("%sの年齢は%i才です\n",myrtle.name,myrtle.age);
	return 0;
}

