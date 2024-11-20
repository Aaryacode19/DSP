#include <stdio.h>

int custom_len_funcn(char str[])
{
    int length = 0;
    while(str[length] != '\0')
    {
        length ++;
    }
    return length;
}

int custom_cmp_funcn(char s1[], char s2[])
{
    int i = 0;
    while(s1[i] == s2[i])
    {
        if(s1[i] == '\0')
        {
            return 0;
        }
        i++;
    }
    return s1[i] - s2[i];
}

void custom_cpy_funcn(char s1[], char s2[])
{
    int i = 0;
    while((s1[i] = s2[i]) != '\0')
    {
     i++;   
    }
}

int main(void)
{
    char name[] = "Aarya";
    printf("lenght of name is: %d", custom_len_funcn(name));
    
    char s1[100] = "Hey";
    char s2[100];
    custom_cpy_funcn(s2, s1);
    printf("\n %s", s2);
    
    int result = custom_cmp_funcn(s1, s2);
    printf("\n %d", result);
}
