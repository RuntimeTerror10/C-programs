#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[10];
    int i,n,j,c;
    printf("Enter elements\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("%d |",arr[i]);
    }
    printf("\n");
    for(j=0;;j++){
        printf("\nenter new element :");
        scanf("%d",&n);
    for (c = 0; c < 9; c++){
        arr[c] = arr[c+1];
    }
    arr[9]=n;
    system("cls");
    printf("Resultant array:\n");
    for (c = 0; c < 10; c++)
         printf("%d |", arr[c]);
    }
    return 0;
}
