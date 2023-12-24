#include <stdio.h>

int main()
{
    FILE *pf = fopen("test.txt", "r");
    char buffer[200];
    if (pf == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        while (fgets(buffer, 200, pf) != NULL)
        {
            printf("%s", buffer);
        }
        fclose(pf);
    }

    printf("\n");
    return (0);
}