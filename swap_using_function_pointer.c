#include<stdio.h>
int (*fun[2])(int *,int *);
int pointers_swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("%d %d \n", *a,*b);
}

int xor_swap(int *a,int *b)
{

	*a=*a^*b;
	*b=*b^*a;
	*a=*a^*b;
	printf("%d %d \n",*a,*b);
        
}

int main()
{
	int a=10,b=20;
	int (*fun[2])(int *,int *)={pointers_swap,xor_swap};
       (*fun[0])(&a,&b);
	(*fun[1])(&a,&b);
	
}
