#include <stdio.h>

int main () {
    char userpass[]={};

    printf("enter your passwored to be encryped");

    scanf("%s",userpass);

    int lenght=sizeof(userpass)/sizeof(userpass[0]);


    char passAfterEcn[lenght];
    for (int i = 0; i < lenght; i++)
    {
        passAfterEcn[i]=userpass[i]+3;
    }
    
    return 0;
}