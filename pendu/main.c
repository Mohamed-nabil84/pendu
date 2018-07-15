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
    
    FILE* fichier = NULL;
    char mot_secret[100] = {}, caractere_proposer= 0;
    int *mot_trouver = NULL, i =0, coups_restant =10;
    unsigned long taille = 0, djeu =1;
    while(djeu == 1){
        // Ouvrir le fichier DICO
        fichier = fopen("/Users/ismailmohamednabil/Documents/Codages/exercices/DICO.txt", "r");
    
        // verifier que le fichier c'est bien ouvert
        if(!fichier){
            printf("erreur de lecture de fichier\n");
            exit(1);
        }
        f1(fichier, mot_secret);
        fgets(mot_secret, 100, fichier);
        printf ("%s\n", mot_secret);
        // remplacer le \n par \0
        changer_caractere(mot_secret);
        // intialisation du mot a trouver
        taille = strlen (mot_secret);
        mot_trouver= malloc(sizeof(int)*taille);
        for (i=0; i<=taille;i++){
            mot_trouver[i]= 0;
        }
        printf ("bienvenue dans le jeu du pendu\n\n");
    
        while (coups_restant > 0 && ! gagner_partie(mot_trouver, taille)){
        
            // afficher les caractere retrouver er afficher cimobien de essaie reste au joueur
            printf("le mot secret: ");
            afficher(mot_trouver, mot_secret, taille);
            printf ("\nil vous reste %d coups\n", coups_restant);
        
            // affecter un caractere proposer par le joueur
            printf ("\nproposer un caractere: \n");
            caractere_proposer = saisi_caractere();
        
            //
            if (! recherche_caractere(mot_secret, caractere_proposer, mot_trouver, taille)){
                coups_restant--;
            }
        
            if (gagner_partie(mot_trouver, taille)){
            
                printf("vous avez gange, vous avez trouve le mot secret\nle mot secret est : %s\n", mot_secret);
            }
            if (! gagner_partie(mot_trouver, taille) && coups_restant == 0){
                printf ("vous avez perdu, le mot secret etait: %s\n", mot_secret);
            }
        }
        free(mot_trouver);
        fclose(fichier);
        printf ("voulez-vous reprendre la partie:\n\n  0-NON\n  1-OUI\n");
        scanf("%lu", &djeu);
    }
    return 0;
}
