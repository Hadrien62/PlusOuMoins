//
//  main.c
//  PlusOuMoins
//
//  Created by Hadrien Delobel on 31/08/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Le but de ce code est de trouvé un nombre aléatoire avec pour seul indication + ou - \n");
    srand(time(NULL));
    int NbTrouve = rand() % MAX;
    int proposition;
    int NbCoup = 0;
    printf("Entrez un nombre pour voir si il est correct tant que vous avez pas trouve le bon \n");
    do{
        scanf("%d", &proposition);
        if(proposition < NbTrouve){
            printf("Le nombre %d est moins \n", proposition);
            NbCoup++;
        }
        else if(proposition > NbTrouve){
            printf("Le nombre %d est plus \n", proposition);
            NbCoup++;
        }
        else if(proposition == NbTrouve){
            NbCoup++;
            printf("Bravo vous avez trouve en %d coups !!! \nLe nombre etait bien %d \n", NbCoup, NbTrouve);
        }
    }while(proposition != NbTrouve);
    return 0;
}
