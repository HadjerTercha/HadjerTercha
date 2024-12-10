#include <stdio.h>

int Longueur(char *ch) {
    int i = 0;
    while (ch[i] != '/0') {
        i++;
    } 
    return i;
}

int main() {
    char m[50]; 
    printf("chain est: ");
    scanf("%s", m);
    ch = Longueur(m);
    printf("taille de chain: %d",i);

    return 0;
}
