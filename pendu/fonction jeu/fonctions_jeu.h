//
//  fonctions_jeu.h
//  pendu
//
//  Created by Mohamed Nabil ISMAÏL on 10/07/2018.
//  Copyright © 2018 Mohamed Nabil ISMAÏL. All rights reserved.
//

#ifndef fonctions_jeu_h
#define fonctions_jeu_h

#include <stdio.h>
#include <stdlib.h>
#include <string.H>
#include <ctype.h>

// fonction qui affiche les caractere retrouver
void afficher (int *motrouver, char *motsecret, unsigned long taille);

// fonction qui recherche le caractere dans le mot secret
int recherche_caractere ( char *mottrouve, char caractere_proposer, int *mot_trouver, unsigned long taille);

// saisir le caractere
char  saisi_caractere();

// fonction qui verifie si le joueur a gagner
int gagner_partie (int *motrouver, unsigned long taille);

#endif /* fonctions_jeu_h */
