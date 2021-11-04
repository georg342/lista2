#include <stdio.h>
#include <string.h>

int main(){
    char letrinha;
    int contLetrinhas = 0;
    
    FILE * f;
    f = fopen("./arquivo_base.txt", "r");
    
    while (!feof(f)){
        letrinha = fgetc(f);
        if (letrinha != ' ') contLetrinhas++;
    }
    fclose(f);

    f = fopen("./arquivo_base.txt", "a");
    fprintf(f, "\n%d", contLetrinhas);

    printf("%d\n", contLetrinhas);

    fclose(f);
    return 0;
}