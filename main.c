#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[40];
    char prenom[40];
    int age;
    int num;
    int sexe;

    printf("Presentez vous\n");
    printf("Mon nom est:\n");
    scanf("%37s", nom);
    printf("Mon prenom est:\n");
    scanf("%37s", prenom);
    printf("Mon age est:\n");
    scanf("%d", &age);
    printf("Mon numero de telephone est:\n");
    scanf("%d", &num);
    printf("Mon sexe est:\n");
    scanf(" %s", sexe);

    return 0;
}
