//program to simulate a simple login system with 3 attempts to enter the correct password.
#include<stdio.h>
#include<string.h>

int main() 
{
    char p[]="password", pass[100];
    int i;
    for (i=0;i<3;i++)
    {
        printf("input login password\n");
        gets(pass);
        int result=strcmp(p, pass);
        if (result==0){
            printf("login successful\n");
            break;
        }
        else {
            printf("password incorrect\n");
        }
        
    }
    return 0;
    
}