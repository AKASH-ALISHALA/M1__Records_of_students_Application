#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

void password_check()
{
    FILE *fp;
    int i=0,count=0;
    printf("\nenter password");
    char ch[6],c[6],a,b;
    fp=fopen("password.txt","r");
    while((b=getc(fp))!=EOF)
    {
        c[i]=b;
        i++;
    }
    for(i=0;i<6;i++)
    {
        a=getch();
        ch[i]=a;
        printf("*");
        if(ch[i]==c[i])
        {
            count++;
        }
    }
    if(count==6)
    {
        printf("\nlogin success");
    }
    else
    {
        printf("\nlogin failed re ");
        password_check();
    }
    fclose(fp);
}
