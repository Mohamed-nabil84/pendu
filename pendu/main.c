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
    int *mot_trouver = NULL, i =0;
    unsigned long taille = 0;
    // intialisation du mot a trouver
    taille = strlen (mot_secret);
    mot_trouver= malloc(sizeof(int)*taille);
    for (i=0; i<=taille;i++){
        mot_trouver[i]= 0;
    }
    

    free(mot_trouver);
    return 0;
}
