#include "exo1.h"

int main()
{
	system("clear");

	char chaine[5000];
	int longueur,cle,choix;
	int Apparition[26]={0};



	saisie(chaine);
	longueur=strlen(chaine);
	printf("chaine fait %d charactères\n",longueur);
	printf("Voulez vous :\n\t1-Chiffrer le message ?\n\t2-Dechiffrer le message avec la cle ?\n\t3-Dechiffrer le message avec la cryptanalyse de Cesar ?\n Choix > ");
	scanf("%d",&choix);

	switch (choix)
	{
		case 1 :
			DemandeCle(&cle);
			printf("cle = %d\n",cle);
			for (int i=0;i<longueur+1;i++)
		     {
				printf("%c",Chiffrement(chaine,&cle,i));
			}
			printf("\n");
			break;
		case 2 :
			DemandeCle(&cle);
			printf("cle = %d\n",cle);
			for (int i=0;i<longueur+1;i++)
		     {
				printf("%c",Dechiffrement(chaine,&cle,i));
			}
			break;
		case 3 :
			AnalyserFrequence(Apparition,chaine,longueur);

			// for (int i=0;i<26;i++)
			// 	printf("%d ",Apparition[i]);
			// printf("\n");
			CalculerCle(Apparition,&cle);
			printf("La cle est %d\n",cle);
			for (int i=0;i<longueur+1;i++)
		     {
				printf("%c",Dechiffrement(chaine,&cle,i));
			}
			printf("\n");
			break;
		default:
			printf("choix erronné\n");
			break;
	}
	printf("\n");

	return EXIT_SUCCESS;
}
