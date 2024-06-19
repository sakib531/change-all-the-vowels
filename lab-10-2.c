#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20]; int i;
    printf("Enter the value :\n");
    gets(s1);

    int x=strlen(s1);

        for( i=0; i<x; ++i)
        {
            if(s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'||s1[i]=='a'||s1[i]=='E'||s1[i]=='e'||s1[i]=='i'||s1[i]=='u'||s1[i]=='o')
            {
                s1[i]='e';
            }
            else
            {
                s1[i]=s1[i];
            }
        }

        s1[i]='\0';
        printf("After replacing vowels with e: %s",s1);

return 0;
}

