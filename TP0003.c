#include <stdio.h>
#include <stdlib.h>
typedef struct element {
    int val;
    struct element* suivant;
}element;

element* creerListe() {
return NULL;
}
void afficherListe(element* L) { 
    element* courant = L;
    while (courant != NULL) {
        printf("%d->", courant->val);
        courant = courant->suivant;
    }
    printf("NULL");
}
element* supprimerEnFin(element* L) {
    if (L == NULL) {
        printf("la liste est deja viden");
        return NULL; 
    }
    element* courant = L;
    if (courant->suivant == NULL) {
        free(courant);
        return NULL;
    }
    while (courant->suivant->suivant != NULL) {
        courant = courant->suivant;
    }
    free(courant->suivant);
    courant->suivant = NULL;
    return L;
}
element* ajouterEnDebut(element* L, int nouvval) {
    element* nouvelement;
    nouvelement = (element*)malloc(sizeof(element));
    nouvelement->val = nouvval;
    nouvelement->suivant = NULL;
    if (L != NULL) { 
        nouvelement->suivant = L;
    }
    L = nouvelement;
    return L;
}
element* viderListe(element* L) {
    element* temp;
    while (L != NULL) {
        temp = L;
        L = L->suivant;
        free(temp);
    }
    printf("la liste est viden");
}
element* chargerListe(int Tab[], int n) {
    element* L = NULL;
    element* temp = NULL;    
    for (int i = 0; i < n; i++) {
        element* nouvE = (element*)malloc(sizeof(element));
        nouvE->val = Tab[i];
        nouvE->suivant = NULL;        
        if (L == NULL) {
            L = nouvE;
            temp = nouvE;
        } else {
            temp->suivant = nouvE;
            temp = nouvE;
        }
    }
    return L;
}
int main() {
    int tab[10] = {1, 3, 5, 7, 8, 10, 9, 11, 13, 20};
    element* L = creerListe();
    L = chargerListe(tab, 10); 
    afficherListe(L);   
    printf("\n_____________________________________\n");
    L = supprimerEnFin(L);
    afficherListe(L); 
    printf("\n_____________________________________\n");
    L = ajouterEnDebut(L, 40);
    afficherListe(L); 
    printf("\n_____________________________________\n");
    viderListe(L);
    return 0;
}
