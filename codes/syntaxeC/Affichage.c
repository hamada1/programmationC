#include <stdio.h>
#define eps 1E-6

int main()
{
	char c='c';              //caractère
	int a=3;

	float b=3.14;
	int a1,a2,a3,a4;
	a1=1;a2=2;a3=3;a4=4;

	printf("c=%c\n",c);

	printf("a=%d\tb=%.2f\n",a,b);

	printf("epsilon=%f\n",eps );
	printf("epsilon=%e\n",eps );
	printf("epsilon=%g\n",eps );
	printf("%d\t%d\n%d\t%d\n",a1,a2,a3,a4);
	return 0;
}