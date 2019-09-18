#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i,j,k;
    int sum=0;
    printf("enter a number between 5 to 20 :\n");
    scanf("%d",&n);
    int arry[n];
    for(i=0;i<n;i++){
        printf("enter a random number(1 TO 100)\n");
        scanf("%d",&arry[i]);
    }
        printf("all the elements of the array are :");
            for(j=0;j<n;j++)
                    printf("%d ,",arry[j]);
            for(k=0;k<n;k++)
                    sum+=arry[k];
        printf("\nsum of all the elements of array is : %d",sum);
    return 0;
}
