#include<stdio.h>
int main()
{
    // char s[10]="minna";
    char name[100];
    printf("enter your first name:");
    // scanf("%10s",name);
    fgets(name, sizeof(name),stdin);
    printf("hello, %s!",&name);
    // printf("%10s",s);
      

    return 0;
}    
                 