#include <stdio.h>
#include <string.h>

int main()
{
    char titulo[100], texto[1000];
    int contVogal = 0;

    FILE *f;
    puts("Digite o nome que será usado para criar o arquivo:");
    fgets(titulo, 101, stdin);

    titulo[strlen(titulo)-1] = '\0';

    f = fopen(strcat(titulo,".txt"), "w+");
    fclose(f);

    f = fopen(titulo, "a");

    puts("Digite o texto que será salvo no arquivo, quando terminar digite apenas um \"@\".");
    while (1)
    {
        fgets(texto, 1001, stdin);

        if (strchr(texto, '@') != NULL)
        {
            if(strlen(texto) <= 2){
                break;
            }
        }

        fputs(texto, f);
    }
    fclose(f);

    return 0;
}