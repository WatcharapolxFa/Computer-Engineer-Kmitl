#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }
    printf("Capital : %s\n", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
    printf("Small : %s\n", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 || str[i - 1] == ' ')
        {
            str[i] = toupper(str[i]);
        }
    }
    printf("Title : %s\n", str);

    return 0;
}