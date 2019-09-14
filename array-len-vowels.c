#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char st[30];
    int count=0;
    int x=0;
    char ch;
    printf("enter a sentence\n");
    gets(st);
    printf("length of sentence%d \n",strlen(st));
    for(int i =0;i<strlen(st);i++){
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='0'||st[i]=='u')
            count++;
        else
            x++;


    }
    printf("number of vowels %d\n",count);
    return 0;
}
