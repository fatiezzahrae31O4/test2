#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* char nom[40];
    char prenom[40];
    int age;
    int num;
    char sexe;

    printf("Presentez vous\n");
    printf("Mon nom est:\n");
    scanf("%s",nom);
    printf("Mon prenom est:\n");
    scanf("%s",prenom);
    printf("Mon age est:\n");
   // scanf("%d",age);
  printf("Mon numero de telephone est:\n");
   scanf("%d",num);
    printf("Mon sexe est:\n");
    scanf(" %s", sexe);
   // printf("votre nom:%s", nom);
    //printf("Votre prenom:%s",prenom);
    //printf("Votre age:%d",age);
    //printf("Votre numero de telephone:%d",num);
    //printf("Votre sexe:%s",sexe);*/
    char nom[40];
char prenom[40];
int age;
int num;
char sexe[3];

printf("Presentez vous\n");
printf("Mon nom est:\n");
scanf("%s", nom);
printf("Mon prenom est:\n");
scanf("%s", prenom);
printf("Mon age est:\n");
scanf("%d", &age); // Uncommented and added & to read the age
printf("Mon numero de telephone est:\n");
scanf("%d", &num); // Uncommented and added & to read the phone number
printf("Mon sexe est:\n");
scanf(" %s", &sexe); // Corrected to %c and added & to read a character

printf("Votre nom: %s\n", nom);
printf("Votre prenom: %s\n", prenom);
printf("Votre age: %d\n", age);
printf("Votre numero de telephone: %d\n", num);
printf("Votre sexe: %s\n", sexe);

    return 0;
}
