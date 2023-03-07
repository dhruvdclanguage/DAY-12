#include<stdio.h>
int main()
{
    int i = 1, number;
    
            printf("\n Please Enter the Maximum Limit Value : ");
            scanf("%d", &number);
   
    while (i <= number) {
         
		    printf(" %d\n", i);
                    i = i+2;
    }
    return 0;
}
