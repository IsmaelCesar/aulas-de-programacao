#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cmp_num(int usr, int al1, int al2, int al3, int al4, int al5, int al6){
    return (usr == al1 || usr == al2 || usr == al3 || usr == al4 || usr == al5 || usr == al6);
}


int main(){

    srand(time(NULL));

    int usr_1, usr_2, usr_3, usr_4, usr_5, usr_6;

    print("digite seis numeros: ");
    scanf("%d %d %d %d %d %d", &usr_1, &usr_2, &usr_3, &usr_4, &usr_5, &usr_6);

    int al_1, al_2, al_3, al_4, al_5, al_6;
    al_1 = rand() % 60 + 1;
    al_2 = rand() % 60 + 1;
    al_3 = rand() % 60 + 1;
    al_4 = rand() % 60 + 1;
    al_5 = rand() % 60 + 1;
    al_6 = rand() % 60 + 1;

    int conta_acertos = 0;

    if(cmp_num(usr_1, al_1, al_2, al_3, al_4, al_5, al_6)){
        conta_acertos++;
    }
    else if(cmp_num(usr_2, al_1, al_2, al_3, al_4, al_5, al_6)){
        conta_acertos++;
    }
    else if(cmp_num(usr_3, al_1, al_2, al_3, al_4, al_5, al_6)){
        conta_acertos++;
    }
    else if(cmp_num(usr_4, al_1, al_2, al_3, al_4, al_5, al_6)){
        conta_acertos++;
    }
    else if(cmp_num(usr_5, al_1, al_2, al_3, al_4, al_5, al_6)){
        conta_acertos++;
    }
    else if(cmp_num(usr_6, al_1, al_2, al_3, al_4, al_5, al_6)){
        conta_acertos++;
    }
    
    if(conta_acertos == 6){
        printf("Parabens!! Voce estah milionario!!");
    }
    else{
        printf("Que pena! Voce perdeu :(");
    }


    return 0;
}