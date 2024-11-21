#include <stdio.h>
#include <string.h>

void custom_strcpy(char s1[], char s2[]) {
    int i = 0;
    while (s2[i] != '\0') {
        s1[i] = s2[i]; // Copy character from s2 to s1
        i++;
    }
    s1[i] = '\0'; // Add null terminator to the end of s1
}


int custom_len(char str[])
{
    int length = 0;
    while(str[length] != '\0')
    {
        length++;
    }
    return length;
}

int custom_cmp(char s1[], char s2[])
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

int main(void)
{
    char name[] = "Aarya";
    printf("lenght of name is: %d", custom_len(name));
    
    char s1[100] = "Hey";
    char s2[100];
    custom_strcpy(s2, s1);
    printf("\n %s", s2);
    
    int result = custom_cmp(s1, s2);
    printf("\n %d", result);
}
