#include <stdio.h>
#include "header.h"


int main()
{
    helloword();
    //printf("%f\n",comparevalues(1.0,2.2));
    //floop100();
    //wloop100();

    int nb = 42; // la réponse à presque tout
    //memory(nb);
    somme(2,4);

    int liste[40]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
    int liste2[43]={10,4,2,8,5,6,22,45,12,1,99,65,76,34,56,23,44,134,90,53,3,77,88,41,30,11,35,111,110,80,61,71,91,86,0,100,104,7,9,13,14,15,29};
    int taille=40;
    int taille2=43;
    find_nb(9, liste, taille);
    ordered_bin(9,liste,taille);
    sort(liste2,taille2);
    
    printf("\n");
    return(0);

 
}