#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size ;
    int i,j,k;
    int max;
    printf("enter size of n \n");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
        max = arr[0];
            for(j=0;j<size;j++){

                if(arr[j]> max){
                    max = arr[j];

            }
        }
            printf("largest number from the array is %d\n",max);
            printf("after adding largest number with each array element\n");
            for(k=0;k<size;k++)
                arr[k]=arr[k]+max;
            for(i=0;i<size;i++)
                printf("%d \n",arr[i]);

    return 0;
}
