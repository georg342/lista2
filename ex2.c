#include <stdio.h>
#include <string.h>

int main()
{
    char letrinha;
    int contVogal = 0;

    FILE *f;
    f = fopen("./arquivo_base.txt", "r");

    while (!feof(f))
    {
        letrinha = fgetc(f);
        if (strchr("aeiouAEIOU", letrinha) != NULL)
        {
            contVogal++;
        }
    }
    fclose(f);

    printf("%d\n", contVogal);

    return 0;
}