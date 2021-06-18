//Credits: https://www.programming9.com/programs/c-programs/230-c-program-to-convert-infix-to-postfix-expression-using-stack

//For theory - https://prepinsta.com/data-structures/infix-to-postfix-conversion/

//CODE WORKS FOR FULLY,PARTIALLY OR NOT PARENTHESISED EXPR

#include<stdio.h>
#include <ctype.h>

char stack[20];
int top = -1;//as stack empty

void push(char x)
{
    stack[++top] = x;//first increment
}
 
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];//First return the data then decrement the top to point to new top position
}
 
int priority(char x) //assigning priorities
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
}
 
int main()
{
    char exp[20];
    char *e, x;
    printf("Enter the expression :: ");
    scanf("%s",exp);//as exp is const char pointer pointing to 1st ele, so no need of &exp
    e = exp;//e is pointer to char array, pointing to addr of 1st ele
    while(*e != '\0') //reads string till end
    {
        if(isalnum(*e)) // if alphanumeric ==TRUE then if stmt true
            printf("%c",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')//pop returns current ele then removes it
                printf("%c", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c",pop());//pop returns current ele then removes it
            push(*e);
        }
        e++;//Pointer arithmetic (here char pointer)--i.e pointing to next char in string
    }
    while(top != -1) //if anything in stack, then pop it
    {
        printf("%c",pop());
    }
}
 