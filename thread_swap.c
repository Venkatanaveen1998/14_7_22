#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void* swap(int* );
int main()
{
	pthread_t t1;
	int var[2];
	var[0]=5;
	var[1]=10;
	printf("Before swapping %d %d \n",var[0],var[1]);
	pthread_create(&t1,NULL,&swap,&var);
	pthread_join(t1,NULL);
	printf("After swapping %d %d \n",var[0],var[1]);
}
void *swap(int* var)
{
	int temp=var[0];
          var[0]=var[1];
	  var[1]=temp;
}

