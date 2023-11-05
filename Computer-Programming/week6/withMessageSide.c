#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char name2[100];
    int i, checklege, j = 0;
    printf("Enter your name :");
    scanf("%s", name);
    // strcpy(name, "Watcharapol");
    checklege = strlen(name);
    for (i = checklege - 1; i >= 0; i--)
    {
        name2[j] = name[i];
        j++;
    }
    name2[j] = '\0';
    printf("%s\n", name2);
    return 0;
}