//
//  DICO.h
//  pendu
//
//  Created by Mohamed Nabil ISMAÏL on 10/07/2018.
//  Copyright © 2018 Mohamed Nabil ISMAÏL. All rights reserved.
//

#ifndef DICO_h
#define DICO_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//fonction traitement sur le fichier
void f1 (FILE *dictionnaire, char *tableau);

//Fonction tirage au sort du mot
int tirage_sort (int comptage);

//Fonction qui positionne le curseur
int pcurseur (FILE *D, int tp);

#endif /* DICO_h */
