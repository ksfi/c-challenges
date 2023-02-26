#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/* On range les mains selon leur valeur fullvalue = valeur + suit: 2->14+18 */

char input[20] = "2H3D5S9CKD2C3H4S8CAH";

typedef struct Carte {
        /* 2->14 */
        int valeur;
        /* 15->18 */
        int suit;
} Carte;

bool isHigher(struct Carte *carte1, struct Carte *carte2) {
        int valeurtot1 = carte1->valeur + carte1->suit;
        int valeurtot2 = carte2->valeur + carte2->suit;
        if (valeurtot1 > valeurtot2) { 
                return true;
        }
        else {
                return false;
        }
}

bool pair(struct Carte *carte[5], int *valeur1) {
        for (int i = 0; i <= 3; i++) {
                for (int j = i; j <= 4; j++) {
                        if (carte[i]->valeur == carte[j]->valeur && carte[i]->suit == carte[j]->suit) {
                                *valeur1 = carte[i]->valeur;
                                return true; 
                        }
                }
        }
        return false;
}

bool twopairs(struct Carte *carte[5], int *valeur2, int valeur1) {
        for (int i = 0; i <= 3; i++) {
                for (int j = i; j <= 4; j++) {
                        if (carte[i]->valeur == carte[j]->valeur && carte[i]->suit == carte[j]->suit && carte[i]->valeur != valeur1) {
                                *valeur2 = carte[i]->valeur;
                                return true; 
                        }
                }
        }
        return false;
}

bool threeofakind(struct Carte *carte[5], int *valeur) {
        int k = 0;
        for (int i = 0; i <= 3; i++) {
                for (int j = 1; j <= 4; j++) {
                        if (carte[i]->valeur == carte[j]->valeur && carte[i]->suit == carte[j]->suit) {
                                k++;
                                if (k == 2) {
                                        *valeur = carte[i]->valeur;
                                        return true;
                                }
                        }
                }
        }
        return false;
}

struct Carte *triercroissant(struct Carte *carte[5]) {
        struct Carte *cartetemp = carte[0];
        struct Carte *cartetrie[5];
        int k = 0;

        while (k <= 5) {
                for (int i = 0; i <= 4; i++) {
                        if (isHigher(cartetemp, carte[i])) {
                                cartetemp = carte[i];
                        }
                }
                *cartetrie[k] = *cartetemp;
                k++;
        }
        
        return cartetemp;
}

bool straight(struct Carte *carte[5], int *valeur) {
      /* utiliser triercroissant() puis calculer la diff eentre les carte consecutives */  
        triercroissant(&carte[5]);
        int k = 0;
        for (int i = 1; i <= 4; i++) {
                if (carte[i] - carte[i - 1] == 1) {
                        k++;
                }
        }

        if (k == 5) {
                *valeur = carte[4]->valeur + carte[4]->suit;
                return true;
        }
        else {
                return false;
        }
}

bool flush(struct Carte *carte[5], int *valeur) {
        int k = 0;
        for (int i = 1; i <= 4; i++) {
                if (carte[i]->suit == carte[i - 1]->suit) {
                        k++;
                }
        }
        
        if (k == 5) {
                *valeur = carte[4]->valeur + carte[5]->suit;
                return true;
        }
        else {
                return false;
        }
}

bool fullhouse(struct Carte *carte[5], int *valeur) {
        if (threeofakind(&carte[5], valeur) == true) {
                return true;
        }
        return false;
}

bool fourofakind(struct Carte *carte[5], int *valeur) {
        triercroissant(&carte[5]);
        int k = 0;
        for (int i = 1; i <= 4; i++) {
                if (carte[i]->valeur - carte[i - 1]->valeur == 1) {
                        k++;
                }
        }
        if (k == 4) {
                *valeur = carte[4]->valeur + carte[5]->suit;
                return true;
        }
        else {
                return false;
        }
}

int main(void) {
        return 0;
}