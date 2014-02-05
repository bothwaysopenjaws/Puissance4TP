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




// Les fonctions du menu
void	newgame(); // lance une nouvelle game
void	loadgame(); // charge une des 10 parties
void	Rules(); // affiche les règles du jeu
void	save(); // sauvegarde la partie en cours (si elle existe)
void	backin(); // reprends la partie en cours (si elle existe)


// les fonctions servant dans la création des sous-programmes
int		IsEnd(int* Tab, int x, int y, Joueur joueur, int nbCase);  // le jeu est-il fini ? Renvoie le numéro du joueur gagnant, 0 si nulle
int		IsWin(int* *Tab, int x, int y); // renvoie 1 si le joueur à gagné, sinon 0 ; 
void	creerjoueur();// creer les joueurs 1 et 2
void	play(); // permet à partir d'un tableau ( vierge ou non-fini) de jouer au puissance 4
#endif