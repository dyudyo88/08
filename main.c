#include <stdio.h>


int addfunc(int a,int b);
int subfunc(int a, int b);
int mulfunc(int a, int b);
int divfunc(int a, int b);


int main(void)
{
	
	int num1;
	int num2;
	char op;
	
	int (*calcfunc)(int, int); //int를 반환하는 함수포인터  
	
	
	printf("input calculation : ");
	scanf("%d %c %d",&num1, &op, &num2);
	
	
	switch(op)
	{
		case '+' : 
			calcfunc = addfunc;
			break;
		case '-' : 
			calcfunc = subfunc;
			break;
		case '*' : 
			calcfunc = mulfunc;
			break;
		case '/' : 
			calcfunc = divfunc;
			break;	
	}
	
	
	printf("result = %i\n",calcfunc(num1, num2));
	
	return 0;

}





int addfunc(int a, int b)
{
	return a+b;
}


int subfunc(int a, int b)
{
	return a-b;
}

int mulfunc(int a, int b)
{
	return a*b;
}

int divfunc(int a, int b)
{
	return a/b;
}




