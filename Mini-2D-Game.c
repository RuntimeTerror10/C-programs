#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{   int x=0,y=0;
    char direction;
    int grid[10][10]={
                        {1,0,0,0,0,0,0,0,0,0},
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
        int i,j,k;
        for(i=0;i<10;i++){
            for(j=0;j<10;j++){
                if(grid[i][j]==1){
                    printf("%c",grid[i][j]='x');
                }
                else{
                    printf("%c",grid[i][j]='.');
                }
            }

        printf("\n");
        }

        for(k=0;;k++){
            printf("enter direction\n");
            scanf(" %c",&direction);
            if(direction=='s'){
              grid[x][y]=0;
              x++;
              grid[x][y]=1;
              for(i=0;i<10;i++){
                for(j=0;j<10;j++){
                    if(grid[i][j]==1){
                        printf("%c",grid[i][j]='x');
                    }
                    else{
                    printf("%c",grid[i][j]='.');
                    }
                }

                printf("\n");
                }

            }
            else if(direction=='d'){
              grid[x][y]=0;
              y++;
              grid[x][y]=1;
              for(i=0;i<10;i++){
                for(j=0;j<10;j++){
                    if(grid[i][j]==1){
                        printf("%c",grid[i][j]='x');
                    }
                    else{
                    printf("%c",grid[i][j]='.');
                    }
                }

                printf("\n");
                }
            }
            else if(direction=='a'){
               grid[x][y]=0;
               y--;
               grid[x][y]=1;
               for(i=0;i<10;i++){
                for(j=0;j<10;j++){
                    if(grid[i][j]==1){
                        printf("%c",grid[i][j]='x');
                    }
                    else{
                    printf("%c",grid[i][j]='.');
                    }
                }

                printf("\n");
                }
            }
            else if(direction=='w'){
               grid[x][y]=0;
               x--;
               grid[x][y]=1;
               for(i=0;i<10;i++){
                for(j=0;j<10;j++){
                    if(grid[i][j]==1){
                        printf("%c",grid[i][j]='x');
                    }
                    else{
                    printf("%c",grid[i][j]='.');
                    }
                }

                printf("\n");
                }
            }

        }

        return 0;
}

