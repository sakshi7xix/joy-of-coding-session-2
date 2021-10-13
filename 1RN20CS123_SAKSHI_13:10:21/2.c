#include <stdio.h>
#include <conio.h>
#include <string.h>
void stringUpr(char *s)
{
    int i=0;
    while(s[i]!='x')
    {
        if(s[i]>='a' && s[i]<='z'){
        s[i]=s[i]-32;
        }
    ++i;
    }
}

int main()
{
    char str[50];
    char st[11];
    printf("Enter a string: \n");
    gets(str);
    printf("you entered: %s\n",str);
    printf("Enter a string to concatenate: \n");
    gets(st);
    printf("you entered: %s\n",st);
    int x;
    x=strlen(str);
    printf("length of the string is: %d\n",x);
    strcat(str,st);
    printf("concatenated string is: %s\n",str);
    stringUpr(str);
    printf("String after stringUpr : %s\n",str);
    stringUpr(st);
    printf("String after stringUpr : %s\n",st
    );
    return 0;
}