#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int T, test_case;
	int Answer = 0;
	int i;
	//freopen("input.txt", "r", stdin);

	setbuf(stdout, NULL);

	//scanf("%d", &T);
	//for (test_case = 0; test_case < T; test_case++)
	//{
		/////////////////////////////////////////////////////////////////////////////////////////////////

		int n;
		scanf("%d", &n);

		//3  13 31 36  103 131 320  136 306 630 936 
		//()03 ()-1 -()0  ()-6 -06 --0 --6 

		for (int j = 1; j <= n; j++)
		{
			i = j;
			if ((i / 100 == 3) || (i / 100 == 6) || (i / 100 == 9) || ((i - (i / 100) * 100) / 10 == 3) || ((i - (i / 100) * 100) / 10 == 6) || ((i - (i / 100) * 100) / 10 == 9) || (i % 10 == 3) || (i % 10 == 6) || (i % 10 == 9))
			{
				if ((i / 100 == 3) || (i / 100 == 6) || (i / 100 == 9))
				{
					printf("-");
					i = i - (i / 100) * 100;
				}
				i = i - (i / 100) * 100; //36

				if ((i / 10 == 3) || (i / 10 == 6) || (i / 10 == 9))
				{
					printf("-");
					i = i - (i / 10) * 10;
				}
				i = i - (i / 10) * 10; //6

				if ((i == 3) || (i == 6) || (i == 9))
				{
					printf("-"); //6
				}
				printf(" ");

			}
			else
			{
				printf("%d ", i);
			}
			//printf("\n");
		//}

		/////////////////////////////////////////////////////////////////////////////////////////////////
		//3 13 31 36 103 131 320  136 306 630 936 1000
		//들어온 것 만큼만 Arr에 넣고 싶은데... 그게 안되나..
		/*
		int arr[4] = { 0 };
		int *ptr = arr;
		int i = 0;

		while(arr[i] != '\n')
		{
			scanf("%1d", &arr[i]);
			i++;
		}
		*/

		/////////////////////////////////////////////////////////////////////////////////////////////////


		//printf("Case #%d ", test_case + 1);
		//printf("%d\n", Answer);
		}
	return 0;

}


/* 936만 가능한 테스트, 630은 안된다.*/
/*
if ((n % 10 == 3) || (n % 10 == 6) || (n % 10 == 9)) // 1의 자리수
{
printf("-");
n = n / 10; //936은 93
}

if ((n % 10 == 3) || (n % 10 == 6) || (n % 10 == 9))
{
printf("-");
n = n / 10; //93은 9로
}

if ((n % 10 == 3) || (n % 10 == 6) || (n % 10 == 9))
{
printf("-");
n = n / 10; //9 는 0으로
}
*/