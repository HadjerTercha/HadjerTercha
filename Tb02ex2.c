#include <stdio.h>

int Longueur(char *ch) {
    int i = 0;
    while (ch[i] != '0') {
        i++;
    } 
    return i;
}

int main() {
    char m[50]; 
    printf("chain est: ");
    scanf("%s", m);
    Longueur(m);
    printf("taille de chain: %dn", length);

    return 0;
}
