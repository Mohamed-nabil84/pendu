//
//  main.c
//  pendu
//
//  Created by Mohamed Nabil ISMAÏL on 10/07/2018.
//  Copyright © 2018 Mohamed Nabil ISMAÏL. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "fonctions_jeu.h"
#include "DICO.h"

int main(int argc, const char * argv[]) {
    
    char *mot_secret = "marron", caractere_proposer= 0;
    int *mot_trouver = NULL, i =0, coups_restant =10;
    unsigned long taille = 0;
    
    // intialisation du mot a trouver
    taille = strlen (mot_secret);
    mot_trouver= malloc(sizeof(int)*taille);
    for (i=0; i<=taille;i++){
        mot_trouver[i]= 0;
    }
    printf ("bienvenue dans le jeu du pendu\n\n");
    
    while (coups_restant > 0 && ! gagner_partie(mot_trouver, taille)){
        // afficher les caractere retrouver
        afficher(mot_trouver, mot_secret, taille);
        // affecter un caractere proposer par le joueur
        printf ("proposer un caractere \n");
        caractere_proposer = saisi_caractere();
        if (! recherche_caractere(mot_secret, caractere_proposer, mot_trouver, taille)){
            coups_restant--;
        }
        
        
    }
    free(mot_trouver);
    return 0;
}
