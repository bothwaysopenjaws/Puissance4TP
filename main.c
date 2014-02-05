/*
D�sormais, on doit cr�er un fichier .h associ� (avec le m�me nom) � chaque fichier .c
Le fichier .h va contenir :
-Les diff�rents #include dont on a besoin (lib standard, librairies externes, fichier .c du projet)
-Les d�clarations des fonctions du fichier .c
*/
#include"Main.h" 
//#include avec des guillemets "" copie le contenu d'un fichier .h situ� dans le dossier du projet

int main()
{
	int choix = 0;
	int gameEnCour = 0;

	printf("Bienvenue dans le puissance4 le plus puissant du monde !\r\n");
	printf("O - Quitter\r\n");
	printf("1 - Nouvelle partie\r\n");
	printf("2 - Charger une partie\r\n");
	printf("3 - R�gle du jeu\r\n");

	if (gameEnCour == 1)
	{

		printf("4 - Sauvegarder la partie\r\n");
		printf("5 - Reprendre la partie\r\n");
	}

	scanf("%d", &choix);
	do
	{

		system("cls");

		scanf("%d", &choix);

		switch (choix)
		{
		case 0:
			break;
		case 1:
			system("pause");
			break;
		case 2:
			system("pause");
			break;
		case 3:
			system("pause");
			break;
		case 4:
			system("pause");
			break;
		case 5:
			system("pause");
			break;

		default:
			printf("\r\n%d n'est pas un choix valide.");
			choix = -1;
			system("pause");
			break;
		}
	} while (choix != 0);

	printf("Au revoir !");

	printf("\r\n__________________________________________\r\n");
	system("pause");
}