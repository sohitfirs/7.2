/* https://github.com/sohitfirs/7.2.git */

#include <stdio.h>
#include <cstdlib>
#include <time.h>

int mas(int mas1[], int x)
{
	for (int i=0; i<x; i++)
	{
		mas1[i]=rand()%11;
		printf("%i ", mas1[i]);
	}
}

main()
{
	int a,b;
	int masa[100];
	int masb[100];
	srand(time(NULL));
	
	printf("a=");
	scanf("%i", &a);

	printf("b=");
	scanf("%i", &b);
	
	mas(masa, a);
	printf("\n");
	mas(masb, b);
	printf("\n");
	
	system("pause");
}
