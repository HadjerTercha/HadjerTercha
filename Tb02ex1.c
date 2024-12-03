#include <stdio.h>
#include <stdlib.h>

char *ChargerChaine(int N) {
    char *chaine =(char *)malloc(N * sizeof(char));
    
    
    printf("la chaine de caractères : N ");
    scanf("%s", chaine);

    return chaine;
}

int main() {
    int t;
    printf("la chaine: ");
    scanf("%d", &t);

    char *chaine_t = ChargerChaine(t);

    printf("La chaine lue est: %s N", chaine_t);
    free(chaine_t);

    return 0;
    
