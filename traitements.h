#ifndef DEF_PERSONNE
#define DEF_PERSONNE

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


typedef struct joueur Joueur;

struct joueur
{
	char* nom;
	char* prenom;
	int id;

};
#endif