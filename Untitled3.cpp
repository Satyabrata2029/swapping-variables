#include<stdio.h>
main()
{
	int a;
	int b;
	printf("Enter two number:\n");
	scanf("%d,%d", &a, &b);
	printf("Here a = %d and b = %d", a, b);
	a=a+b;
	b=a-b;/*The value of b becomes [(a+b)-b=a]*/
	a=a-b;/*The value of a becomes [(a+b)-a=b] */
	printf("\nswapped values are a=%d and b=%d", a, b);
	return 0;
}
