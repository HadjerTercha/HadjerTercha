#include<studio.h>
#include<stdlib.h>
typedef struct element {
int val;
struct element* suivant;
}element;
struct element* creerListe(){
  return NULL;
}
void* afficherListe(element* L){ 
element* courant=L;
}
while(courant!=NULL){
printf("%d->",courant->val);
  courant=courant->suivant;
}
printf("NULL");
}
element* supprimerEnFin(element* L){
  if(L==NULL){
printf("la liste est deja videln");
return NULL; 
  }
element* courant=L;
if(courant->suivant==NULL){
free(courant);
return NULL;
}
while(courant->suivant->suivant!=NULL)
  courant=courant->suivant;
free(courant->suivant);
courant->suivant=NULL;
return L;
elemant* ajouterEnDebut(element* L,int nouvval){
  elemant* nouvelement;
nouvelement=(element* )mallor(sizof(element);
nouvelement->val=nouvval;
nouvelement->suivant=NULL;
if(L!=NULL 
  nouvelement->soivant=L ;
  L=nouvelement;
return L;
}
element* viderListe(element* L){
  element* temp;
While(L!=NULL){
temp=L;
L=L->suivant;
free(temp);
}
printf("la liste est viden");
}
element* chargerListe(int Tab[],int n){
  element* L=NULL;
element* temp=NULL;
for(int i=0;i<n;i++){
element* nouvE=(element*)malloc(sizof(element));
nouvE->val=Tab[i];
L=nouvE;
temp=nouvE;
}else{
temp->suivant=nouvE;
temp=nouveE;
}
}
return L;
int moin(){
  int tab[10]={1,3,5,7,8,10,9,11,13,20}
element* L=ceerListe();
L=chargerListe(L);
afficherliste(L);
L=supprimerEnFin(L);
afficherlist(L);
L=ajouterEnDebut(L,40);
afficherlist(L);
viderList(L);
return 0;
}
