#include <stdio.h>
#include <stdlib.h>

int main(){
    char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
    int i,c;
    char ch,num;
    for(i=0;i<10;i++){
        printf("%c |",arr[i]);
    }

    printf("\n");

    for(j=0;;j++){
        for (c = 0; c < 9; c++){
            arr[c] = arr[c+1];
        }
        num=getch();
        arr[9]=num;
        system("cls");
        printf("Resultant array:\n");
        for (c = 0; c < 10; c++)
            printf("%c |",arr[c]);
    }

    return 0;
}
