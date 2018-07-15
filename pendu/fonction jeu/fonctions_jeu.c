//
//  fonctions_jeu.c
//  pendu
//
//  Created by Mohamed Nabil ISMAÏL on 10/07/2018.
//  Copyright © 2018 Mohamed Nabil ISMAÏL. All rights reserved.
//

#include "fonctions_jeu.h"

// fonction qui afficher les caractere trouver du mot secret
void afficher (int *motrouver, char *motsecret, unsigned long taille){
    int i =0;
    for (i = 0; i < taille; i++){
        if (motrouver[i] == 1){
            printf ("%c", motsecret[i]);
        }else
            printf ("*");
    }
    printf ("\n");
}

// fonction de saisi du caractere proposer
char  saisi_caractere(){
    char caractere = 0;
    caractere= getchar();
    caractere = toupper(caractere);
    while (getchar() != '\n');
    return caractere;
}

// fonction qui rechercher le crarctere dans le mot secret

int recherche_caractere ( char *mottrouve, char caractere_proposer, int *mot_trouver, unsigned long taille){
    int i=0, resultat=0;
    for(i=0; i < taille; i++){
        if(mottrouve[i] == caractere_proposer){
            mot_trouver[i]=1;
            resultat=1;
        }
    }
    return resultat;
}

// fonction qui test si le jeueur a ganger ou pas

int gagner_partie (int *motrouver, unsigned long taille){
    int i = 0, resultat =1;
    
    for (i=0; i< taille; i++){
        if(! motrouver[i]){
            resultat = 0;
        }
    }
    return resultat;
}

// fonction qui remplace \n par un \0

void changer_caractere (char *tac){
    int i = 0;
    unsigned long d = 0;
    d = strlen(tac);
    for (i = 0; i <= d; i++){
        if (tac[i] == '\n'){
            tac[i] = '\0';
        }
    }
}
