#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STACK_CAPACITY 100000

/*
* 보통 스택 문제는 push(int n), pop() 으로 (수열)출력을 만드나, 
* 이 문제는 수열이 주어지고, push(n), pop()으로 되려 본 수열을 만들 수 있는지
* 만들 수 있다면 어떠한 연산 순서로 만들어야 하는지 역 추적 하는 문제.
* 오름 차순으로만 입력 되야 하며, 현재 스택에 남아있는 수중 가장 상단의 값만 pop()할 수 있다.
* 1) 스택에 남아 있는 수 보다 큰 값이 들어가는 것은 상관 없으나
* 2) 뺄 때, 오류가 날 수 있다. ex) 1 2 5 가 있을 때 5를 pop()할 수 있다. (4 3 6 5 2 1) (+++- - ++- ---)
* '2' 는pop()할 수 없으며, 즉, 해당 수열은 만들 수 없는 것이다. 
* 따라서 값이 j와 같거나 클 경우에만(n>=j)(오름차순 이니까) push(n)를 하며 ex) n이4(4는 pop), j는5가 되었음. 그다음 n이 5가 들어오면 push,pop가 된다.  
* 값이 작으면 pop을 하며, 이때 해당 값을 뺄수 있는지 검사하면 된다. 
* 빼지 못하는 경우라면 "No"를 출력한다. 
*/
int top = -1;
int stack_depth = 0;
int stack[STACK_CAPACITY];

void push(int n);
int pop();

char op[STACK_CAPACITY] = { 0 };
int k = 0;

int main(void)
{
	int Answer = 1;
	freopen("input.txt", "r", stdin);
	setbuf(stdout, NULL);
	int N,n;
	scanf("%d\n", &N);
	int j = 1; //증가하는 수, 스택에 push는 오름차순으로 
	//j는 스택에 값을 저장하면서, 들어온 값이 오름차순 임을 검사하는 역할을 한다. 

	for (int i = 0; i < N; i++) //8번 
	{
		scanf("%d\n", &n); //입력 되는 수, 4

		if (n >= j)// n=4(j는 5까지 증가) , 5
		{
			while (j <= n)//j는 5, n 도 5, 따라서 5는 push 된다. 
			{
				push(j++);//+ + + +
			}
			pop();
		}
		else //n=3
		{
			/*
			pop();
			while (stack[top] == n)
			{
				pop();
			}
			*/
			if (stack[top] == n) //(n == 2)가 되면 No
			{
				pop();
			}
			else
			{
				Answer = 0;
				printf("No\n");
				break;
			}
		}
	}

	int i = 0;
	if (Answer)
	{
		while(op[i] !='\0')
			printf("%c\n", op[i++]);
	}
	

	return 0;

}

void push(int n)
{
	/*/
	if (stack_depth == STACK_CAPACITY)
	{
		printf("stack is full!!\n");
		return;
	}
	*/
	//printf("+\n");
	op[k++] = '+';
	top++;
	stack[top] = n;

	return;
}

int pop()
{
	int r = 0;

	/*
	if (stack_depth == 0)
	{
		printf("stack is emtpy!!\n");
		return 0; //#1 이때 r=0가 되는데 [0]이 굳이 출력될 필요는 없다. 어떻해야 할까.
	}
	*/
	//printf("-\n");
	op[k++] = '-';
	stack[top]=0;
	top--;
	return r;
}