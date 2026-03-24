#include <stdio.h>
#include "header.h"

int helloword()
{
    printf("Hello Word\n");
    return(0);
}

float comparevalues(float a,float b)
{
    if (a>b) {return a;}
    else {return b;}
}

int floop100()
{
    for (int i=1;i<101;i++){ printf("%d",i); printf(" ");}
    return(0);
}

int wloop100()
{
    int i=0;
    while (i<100){ i++; printf("%d",i); printf(" ");}
    printf("\n");
    return(0);
}

int memory(int nb)
{
    printf("%d",nb);
    printf("\n%p",&nb);
    return(0);
}

int somme(int a, int b)
{
    int somab = a+b;
    printf("\n%d",somab);
}

int find_nb(int nb, int liste[], int taille)
{   
    int h =0;
    for (int i=0; i < taille; i++){ if (liste[i]==nb){h++;printf("\nLe nombre %d",nb);printf(" apparait à l'indice %d",i);}}
    if (h==0) {printf("Ce nombre n'apparait pas dans la liste %d",nb);}
    return 0;
}

int ordered_bin(int nb, int liste[], int taille)
{
    int debut=0;
    int fin=taille-1;
    int h=0;

    while(debut<=fin){
        h++;
        int milieu =debut+(fin-debut)/2;

        if(liste[milieu]==nb){ printf("\nTrouve en %d essais à l'indice %d", h, milieu); return milieu;}
        if(liste[milieu]>nb){fin=milieu-1;}
        else{debut= milieu+1;}
    }

    printf("\nPas trouvé après %d essais", h);
    return -1;
    
}

void print_list(int liste[], int taille){
    printf("\n[");
    for(int i =0;i<taille;i++){printf("%d",liste[i]); if(i<taille-1){printf(",");}}
    printf("]\n");
}

int sort(int liste[], int taille){

    for(int i=0; i<taille-1;i++){
        int indice_min=i;

        for(int j=i+1; j<taille;j++){
            int min = liste[i];
            if(liste[j]<liste[indice_min]){indice_min=j;}
        }

        int initial= liste[indice_min];
        liste[indice_min]=liste[i];
        liste[i]=initial;

    }
    print_list(liste,taille);
    return 0;


}
