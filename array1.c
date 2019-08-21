#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j;

    int art[4][4] ={

                    {1,1,1,1},
                    {1,0,0,1},
                    {1,0,0,1},
                    {1,1,1,1}

                    };


    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
        {
            if(art[i][j]==1)
                printf("%c",art[i][j]='*');
            else
                printf("%c",art[i][j]=' ');

        }
                printf("\n");

                    }

    return 0;
}
