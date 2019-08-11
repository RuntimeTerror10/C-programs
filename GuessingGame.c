#include <stdio.h>
#include <stdlib.h>

int main()
{
   int secnum=9;
   int num;
   int guesscount=0;
   int guesslimit=3;
   int outofguesses=0;
        while(num!=secnum && outofguesses==0){
            if(guesslimit>guesscount){
                printf("enter a number \n");
                scanf("%d",&num);
                guesscount++;
    }
            else
                outofguesses=1;
}
            if(outofguesses==1)
                printf("you lose!!");
            else
                printf("you win !!!");

   return 0;


   }


