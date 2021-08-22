#include <stdio.h>
#include <string.h>

int main ()
{
	int i = 0;
	int n = 0;
	int MAX;
	scanf_s("%d", &n);
	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			MAX = i;
			
		}
	}
	printf("%d\n", MAX);
	return 0;
}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}