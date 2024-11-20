#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int prec(char c)
{
    if(c == '^')
    {
        return 3;
    }
    else if(c == '/' || c == '*')
    {
        return 2;
    }
    else if(c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void infixtopostfix(char* exp)
{
    int len = strlen(exp);
    char postfix[len + 1];  // Store postfix expression
    char stack[len];        // Stack for operators
    int postfixIndex = 0;   // Index for postfix array
    int top = -1;           // Top of the stack
    
    for (int i = 0; i < len; i++)
    {
        char c = exp[i];

        // If the character is an operand, add it to postfix
        if (isalnum(c))  
        {
            postfix[postfixIndex++] = c;
        }
        // If it's an opening parenthesis, push it onto the stack
        else if (c == '(')  
        {
            stack[++top] = c;
        }
        // If it's a closing parenthesis, pop until '(' is found
        else if (c == ')')  
        {
            while (top != -1 && stack[top] != '(')
            {
                postfix[postfixIndex++] = stack[top--];
            }
            top--;  // Remove '(' from the stack
        }
        // If it's an operator, handle precedence
        else  
        {
            while (top != -1 && prec(c) <= prec(stack[top]))
            {
                postfix[postfixIndex++] = stack[top--];
            }
            stack[++top] = c;  // Push current operator onto stack
        }
    }
    // Pop remaining operators in the stack
    while (top != -1)
    {
        postfix[postfixIndex++] = stack[top--];
    }
    postfix[postfixIndex] = '\0';  // Null-terminate the postfix expression
    
    printf("%s\n", postfix);
}


int main()
{
    char exp[] ="a+b-(s+d)*9";
    infixtopostfix(exp);
    return;
}
