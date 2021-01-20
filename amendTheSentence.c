#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* amendTheSentence(char *s)
{
    int k=0;
    char tg[100000];
    if(s[0]>='A' && s[0]<= 'Z'){
        s[0]+=32;
    }
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
    strcpy(s,tg);
    return s;
    //return tg;
}
int main(){
    char s[100000];
    scanf("%s",s);
    printf("%s\n",s);
    char result[100000];
//    strcpy(result,amendTheSentence(s));
//    puts(result);
puts(amendTheSentence(s));
    return 0;

}
