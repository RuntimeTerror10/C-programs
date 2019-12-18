#include <stdio.h>
#include <stdlib.h>


void print_arr(char *arr){
        int i;
        for(i=0;i<10;i++){
        printf("%c |",arr[i]);
        }
        printf("\n");
    }
void right(char *arr,char in_right){
        int i;
        for(i=0;i<9;i++){
                arr[i]=arr[i+1];
        }
        arr[9]=in_right;
    }
void left(char *arr,char in_left){
        int i;
        for(i=9;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=in_left;
    }


int main(){

    char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
    int j;
    char input,direction='d';
    print_arr(&arr);
    for(j=0;;j++){
         input=getch();
         if(input=='d' || input=='a'){
            direction=input;
            if(direction=='a'){
                printf("Insertion direction set to left\n");
            }
            if(direction=='d')
                printf("Insertion direction set to right\n");
         }
        else if(input>='0'&&input<='9'){
            if(direction=='a'){
               left(&arr,input);
               print_arr(&arr);
            }
            if(direction=='d'){
               right(&arr,input);
               print_arr(&arr);
            }

        }

    }

    return 0;
}
