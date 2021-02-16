#include "exo1.h"

//commencer par une fonction qui sert à savoir
//si le charactère est valide ou pas




void saisie(char chaine[TAILLE_CHAINE])
{
          printf("Entrez une chaine > ");

          fgets(chaine,TAILLE_CHAINE,stdin);
          chaine[strlen(chaine)-1]='\0';

          // printf("%s\n",chaine);
}

void DemandeCle(int*cle)
{
     *cle=-2;
     while (*cle<0 || *cle >27)
     {
          printf("Entrez la clé de chiffrement > ");
          scanf("%d",cle);
          if (*cle<-1 || *cle >27)
               printf("Entrez une clé valable\n");
          printf("%d\n",*cle);
     }
}

char Chiffrement (char chaine[TAILLE_CHAINE],int* cle,int i)
{
     char nouveau;
     // printf("%c\n",chaine[i]);
     if (chaine[i]<='Z' && chaine[i]>='A')
     {
          if (chaine[i]+*cle<='Z')
               return(chaine[i]+*cle);
          else
               {
                    nouveau=chaine[i]+*cle-26;
                    return nouveau;
               }
     }
     else
          return chaine[i];
}
char Dechiffrement (char chaine[TAILLE_CHAINE],int* cle,int i)
{
     char nouveau;
     // printf("%c\n",chaine[i]);
     if (chaine[i]<='Z' && chaine[i]>='A')
     {
          if (chaine[i]-*cle>='A')
               return(chaine[i]-*cle);
          else
               {
                    nouveau=chaine[i]-*cle+26;
                    return nouveau;
               }
     }
     else
          return chaine[i];
}

void AnalyserFrequence (int Apparition[26],char chaine[TAILLE_CHAINE],int longueur)
{
     for(int i=0;i<longueur+1;i++)
     {
          if (chaine[i]<='Z' && chaine[i]>='A')
          {
               Apparition[chaine[i]-65]++;
          }
     }
}

void CalculerCle (int Apparition[26],int* cle)
{
     int max=0;
     char charMax=0;
     for (int i=0;i<26;i++)
     {
          if (Apparition[i]>max)
               {
                    max=Apparition[i];
                    charMax=i;
                    // printf("Le max est maintenant %c avec %d fois\n",charMax+65,max);
               }
     }
     // printf("max %c\n",charMax+65);
     *cle=abs(69-(charMax+65));
}
