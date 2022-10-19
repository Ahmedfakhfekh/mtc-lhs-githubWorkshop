#include<stdio.h>
void main() 
{ 
char nom[30], prenom[30];
printf("\t*** donner votre nom ***\n\t\t"); 
scanf("%s",nom);
printf("\t*** donner votre prenom ***\n\t\t");
scanf("%s",prenom);
printf("\n\n\tBonjour %s %s \n\n",nom,prenom);
printf("**********bienvenue a l'IIT**********\n\n\n"); 
}