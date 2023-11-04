#include <stdio.h>
#include <stdlib.h>

#define TAILLE_STOCK 10
typedef struct {

    int code_produit;
    char designation[10];
    int quantite_stock;
    
}Produit;




typedef struct {

    Produit tab[TAILLE_STOCK];   
}Stock;

Produit lireProduit();
void afficheStock(Stock s);

int main(int argc, char **argv) {

    return 0;
}

Produit lireProduit() {

    Produit product;
    scanf("%d %s %d \n\n", &product.code_produit, product.designation, &product.quantite_stock);
    return product;
}

void afficheStock(Stock s) {
    
    for (int i = 0; i < TAILLE_STOCK; i++) {
        printf("%d\t %s\t %d\n", s.tab[i].code_produit, s.tab[i].designation, s.tab[i].quantite_stock);
    }
}

int enStock(Stock s, int code) {

    int trouve = 0, i = 0;
    while (trouve == 0 && i < TAILLE_STOCK) {
        
        if (s.tab[i].code_produit == code) {
            trouve = 1;
        }
        i++;

        return trouve;
    }
    
    
}