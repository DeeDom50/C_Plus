/*
name: devante dominicci
date: 2024 june 09
description:  a program that lends itself to a buffer overflow, compile it, and run it.
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[8];
    int pass = 0;
    printf("\n Enter the password: \n");
    gets(buff);

    if(strcmp(buff, "password"))
    {
        printf("\n Wrong Password. \n");
    }
    else
    {
        printf("\n Correct Password. \n");
        pass = 1;
    }

    if (pass)
    {
        // Now give root or admin rights to user
        printf(" \n Root privileges given to the user. \n");
    }
}