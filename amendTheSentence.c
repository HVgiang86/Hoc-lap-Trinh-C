#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* amendTheSentence(char* s)
{
    int k=0;
    char tg[100000];
    for(int i=0; i<strlen(s); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            tg[k]= ' ';
            k++;
            tg[k]= (s[i]+32);
            k++;
        }
        else{
            tg[k]=s[i];
            k++;
        }
    }
    tg[k]='\0';
    return tg;
}
int main(){
    char s[100000];
    scanf("%s",s);
    printf("%s\n",s);
    printf("%s",amendTheSentence(s));

}
