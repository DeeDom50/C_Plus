/*
name: devante dominicci
date: 2024 may 17
description: program below uses a do..while() statement to display a message.
*/
#include<stdio.h>

int main(){

char ans; //sentinel value to allow the user to end the loop when they wish

do{

printf("C is fun!\n");

printf("Do you want to see the message again (Y/N): ");  //prompt the user to continue   or not

scanf(" %c", &ans); //be sure to include a space between the " and % sign

} 
while(ans=='Y' || ans=='y');  //condition to continue - || is the Or operator and == means equality

printf("\nThat's all for now.");    

return 0;

}