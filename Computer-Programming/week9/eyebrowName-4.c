#include <stdio.h>
void cutify(char *p);

int main()
{
    char name[20];
    printf("Enter name : ");
    scanf("%[^\n]", &name);
    cutify(name);
    printf("Cutify name : %s", name);
}

void cutify(char *p)
{
    while (*p != '\0')
    {
        /* CODE HERE */
        if (*p == 'a' || *p == 'e' || *p == 'o' || *p == 'u')
        {
            *p = 'i';
        }
        else if (*p == 'A' || *p == 'E' || *p == 'O' || *p == 'U')
        {
            *p = 'I';
        }
        p++;
    }
}