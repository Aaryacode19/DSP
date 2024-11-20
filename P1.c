#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[] = "Aarya";
    printf("Length of Aarya is: %d", strlen(name));
    
    char firstname[100] = "Aari";
    char lastname[100];
    strcpy(lastname, firstname);
    printf("\n The name is: %s", lastname);
    
    char string1[100] = "Hi myself";
    char string2[100] = " Ari";
    strcat(string1, string2);
    printf("\n %s", string1);
    
    int result = strcmp(firstname, string1);
    printf("\n %d", result);
    
    return 0;
}
