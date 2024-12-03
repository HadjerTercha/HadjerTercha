#include <stdio.h>

void InverserTab(char Tab[], char T[], int m) {
    for (int i = 0; i < m; i++) {
        T[i] = Tab[m-i-1];
    }
}

int main() {
    char Tab[10];
    char T[10];
    int m = 10;

    printf("Tab: ");
    for (int i = 0; i < m; i++) {
        scanf(" %c", &Tab[i]);  
    }

    InverserTab(Tab, T, m);
    
    printf("Tab apré: ");
    for (int i = 0; i < m; i++) {
        printf("%c ", T[i]);
    }
    
    return 0;
}
