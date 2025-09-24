#include<stdio.h>
void inverse(int *tab,int taille){
for(int i=taille-1; i>=0; i--){
printf("%d",tab[i]);
}
}
int main(){
int tab[100],taille;
printf("entre la taille de votre tableau :");
scanf("%d",&taille);
printf("entre votre tableau a inverser :\n");
for(int i=0; i<taille; i++){
scanf("%d",&tab[i]);
}
printf("l'inverse est :");
inverse(tab,taille);
return 0;
}
