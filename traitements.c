#include"traitements.h"
//LIé INITIALISATION
void creerjoueur()   // creer les joueurs 1 et 2
{

	Joueur joueur1;
	Joueur joueur2;

	printf("Entrez le nom du joueur 1 :\r\n"); // joueur 1
	scanf("%s", joueur1.nom);
	printf("Entrez le prenom du joueur 1 :\r\n"); // joueur 2
	scanf("%s", joueur1.prenom);
	joueur1.id = 1;

	printf("Entrez le nom du joueur 1 :\r\n");
	scanf("%s", joueur2.nom);
	printf("Entrez le prenom du joueur 1 :\r\n");
	scanf("%s", joueur2.prenom);
	joueur2.id = 2;
}



void InitTab();



// LIé  END GAME
int IsEnd(char Tab, int x, int y, Joueur joueur, int nbCase)
{
	if (IsWin(Tab, x, y) == 1)
	{
		return joueur.id;
	}

	else if (nbCase == 0)
	{
		return 0;

	}

}

/* mon tableau fait 9 colonnes et 8 lignes. Les colonnes 1 et 9 et les lignes 1 et 8 sont pas modifié lors du jeu, porte le char '_'
quand le curseur se trouve sur un '_', il met fin à la boucle en cours.
*/
int IsWin(char** Tab, int x, int y) // le joueur a t-il gagné ?
{
	int i = 1;
	int j = 1;
	int point;


	point = 0;


	// Cas vertical
	if (Tab[x][y] == Tab[x][y + i])
	{
		do
		{
			point++;
			i++;

		} while ((Tab[x][y] == Tab[x][y + i]) && (point <4));

		i = 1;
		do
		{
			point++;
			i++;

		} while ((Tab[x][y] == Tab[x][y - i]) && (point <4));

	}
	if (point == 4)
	{
		return 1;
	}
	point = 0;
	// cas horizontale

	if (Tab[x][y] == Tab[x + i][y])
	{
		do
		{
			point++;
			i++;

		} while ((Tab[x][y] == Tab[x + i][y]) && (point <4));

		i = 0;
		do
		{
			point++;
			i++;

		} while ((Tab[x][y] == Tab[x - i][y]) && (point <4));

	}
	if (point == 4)
	{
		return 1;
	}
	point = 0;

	// première bissectrice
	if (Tab[x][y] == Tab[x + i][y + i])
	{
		do
		{
			point++;
			i++;

		} while ((Tab[x][y] == Tab[x + i][y + j]) && (point <4));

		i = 1;
		j = 1;
		do
		{
			point++;
			i++;

		} while ((Tab[x][y] == Tab[x - i][y - j]) && (point <4));

	}
	if (point == 4)
	{
		return 1;
	}
	point = 0;

	// dernière bissectrice
	if (Tab[x][y] == Tab[x + i][y])
	{
		do
		{
			point++;
			i++;
			j++;

		} while ((Tab[x][y] == Tab[x + i][y - i]) && (point <4));

		i = 0;
		do
		{
			point++;
			i++;
			j++;

		} while ((Tab[x][y] == Tab[x - i][y + 1]) && (point <4));

	}




	if (point == 4)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void	newgame();
void	loadgame();
void	Rules();
void	backin();
void	play();