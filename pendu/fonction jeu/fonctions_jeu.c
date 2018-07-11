//
//  fonctions_jeu.c
//  pendu
//
//  Created by Mohamed Nabil ISMAÏL on 10/07/2018.
//  Copyright © 2018 Mohamed Nabil ISMAÏL. All rights reserved.
//

#include "fonctions_jeu.h"

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
