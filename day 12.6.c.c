#include <stdio.h>

int main()
{
	
	int a=1;
	int n;
	
     	printf("Enter the value of 1: ");
     	scanf("%d",&n);


	    printf("Even Numbers from 1 to %d:\n",n);
 
    while(a<=n)	{
	
		if(n%2==0)
	        printf("%d\n",n);
		n--;
	}

	return 0;
}
