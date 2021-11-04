#include <stdio.h>
#include <string.h>

int main(){
    char linha[502];
    int contLinhas = 0;
    
    FILE * f;
    f = fopen("./arquivo_linhas.txt", "r");
    
    while (!feof(f)){
        fgets(linha, 500, f);
        contLinhas++;
    }
    printf("%d\n", contLinhas);

    fclose(f);
    return 0;
}