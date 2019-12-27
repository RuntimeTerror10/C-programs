#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
int generate_random(int l, int r, int count){
   int i,rand_num;
   for (i = 0; i < count; i++) {
            rand_num = (rand() % (r - l + 1)) + l;
      return rand_num;

   }
}
int grid[10][10]={
                        {0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0,0,0},
    };
void print_grid(){
       int i,j;
       for(i=0;i<10;i++){
            for(j=0;j<10;j++){
                if(grid[i][j]==1){
                    printf("%c",grid[i][j]='*');
                }
                else{
                    printf("%c",grid[i][j]='.');
                }
            }
            printf("\n");
       }
}
void delay(unsigned int milliseconds){

    clock_t start = clock();

    while((clock() - start) * 1000 / CLOCKS_PER_SEC < milliseconds);
}

 int main(){
   int lower =0,upper =9,count =1;
   int num,x,y=0,k,c,l;

   for(k=0;;k++){
   srand(time(0));
   num=generate_random(lower, upper, count);
   x=0;
   y=num;
   grid[x][y]=1;
   for(c=0;c<10;c++){
        print_grid();
        x++;
        grid[x][y]=1;
        delay(20);
        printf("\n");
        system("cls");
   }
    for(c=0;c<10;c++){
            for(l=0;l<10;l++){
                if(grid[c][l]==1){
                    grid[c][l]=0;
                }
            }
   }
   print_grid();
    printf("\n");
    system("cls");
   }
   return 0;
 }



