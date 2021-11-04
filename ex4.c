#include <stdio.h>
#include <string.h>

int main(){
    char letrinha;

    FILE * f;
    f = fopen("./arquivo_base.txt", "r");
    
    while (!feof(f)){
        letrinha = fgetc(f);
        printf("%c", letrinha);
    }
    puts("");
    fclose(f);

    return 0;
}