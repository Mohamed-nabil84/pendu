//
//  DICO.c
//  pendu
//
//  Created by Mohamed Nabil ISMAÏL on 10/07/2018.
//  Copyright © 2018 Mohamed Nabil ISMAÏL. All rights reserved.
//

#include "DICO.h"

// fonction traitement sur le fichier

void f1 (FILE *dictionnaire, char *tableau){
    int lettre =0, compteur =0, p =0;
    
    do{
        lettre = fgetc (dictionnaire);
        if ( lettre == '\n'){
            compteur ++;
        }
    }while ( !feof(dictionnaire));
    p = tirage_sort(compteur);
    rewind(dictionnaire);
    fseek(dictionnaire, pcurseur(dictionnaire, p), SEEK_SET);
    
}
// Fonction tirage au sort du mot

int tirage_sort (int comptage){
    
    int ts = 0 ;
    srand((unsigned int)time(NULL));
    ts = rand () % comptage;
    return ts;
}
// Fonction qui positionne le curseur

int pcurseur (FILE *D, int tp){
    
    int l =0, r = 0, position =0;
    
    do{
        l = fgetc(D);
        position ++;
        if( l == '\n'){
            r++;
        }
    }while(r < tp-1);
    if(r == 0){
        position =0;
    }
    return position;
}
