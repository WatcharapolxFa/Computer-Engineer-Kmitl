#include <stdio.h>
#include <stdbool.h>

bool has_T_A_in(char string[]);

int main()
{
    char name[20];
    printf("Enter your name : ");
    scanf("%s", &name);
    if (has_T_A_in(name))
        printf("Your are cute >///<");
    else
        printf("Not cute ._.");
}

bool has_T_A_in(char string[])
{
    /* CODE FUNCTION HERE */
    // if have T and A in name is cute
    bool has_T = false;
    bool has_A = false;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'T' || string[i] == 't')
            has_T = true;
        if (string[i] == 'A' || string[i] == 'a')
            has_A = true;
    }
    if (has_T && has_A)
        return true;
    else
        return false;
}