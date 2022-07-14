#include<stdio.h>
static int j=1;//static will active upto the end of program , but it was static global it will work with until program get ends.intaially the value was zero , internal lekages has chances to occur , stores in data area. 
int main()
{
	auto int a=10; // without mentioning auto storage class , it automatically as a auto class.it is works in with in compound block, initally value is garabaze , no leakages , stores in the stack area.
       static int i=0; //static will active upto the end of program , but it was static local it will work with in the compound block.intaially the value was zero , internal lekages has chances to occur , stores in data area.	
       register int b=20;//it is works in with in compound block, initally value is garabaze , no leakages , stores in the cpu registers for fast accessing.
       for(int s=0;s<5;s++)
       {
	       i=i++;
	       j=j++;
	       c=c++;
       printf("%d %d %d",i,j,c);// prints the final value if i like updated value.
       }
       extern int c=0; // it will works upto the end of program , and some times external leaksges will occurs ,stores at the data area
}


