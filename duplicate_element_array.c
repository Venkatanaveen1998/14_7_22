#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,6,3,1,4,5},size,cnt=0,i,j;
	size=sizeof(arr)/sizeof(arr[0]);
	printf(" size = %d \n",size);
	for(i=0;i<size;i++)
	{
		cnt=0;
		for(j=i+1;j<size;j++)
		{
			
			if((arr[i]==arr[j])&&(arr[j]!=-1))
			{
				arr[j]=-1;
				cnt++;
			}
		}
		if(cnt>0) printf(" \n %d \n",arr[i]);
		arr[i]=-1;
	}
}


