/*If a chatracter is entered through the keyboard, write a program to determine whether the character is a capital letter, a small
case letter, a digit or a special symbol.*/

#include<stdio.h>
int main(){
    char ch;
    printf("\n Enter a Character from the Keyboard = ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90){
        printf("The character is an uppercase letter.");
    }
    else if(ch>=97 && ch<=122){
        printf("The character is lowercase letter");
    }
    else if(ch>=48 && ch<=57){
        printf("The character is digit");
    }
    else if(ch>=0 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch <= 96 || ch<=123 && ch>=127){
        printf("The character is special symbol");
    }
    return 0;
}