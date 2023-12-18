#include <stdio.h>
#include <stdlib.h>

#define TAILLE_STOCK 10
typedef struct {

    int code_produit;
    char designation[10];
    int quantite_stock;
    
}Produit;


typedef Produit Stock;

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
        printf("%d\t %s\t %d\n", s.code_produit, s.designation, s.quantite_stock);
    }
}

int enStock(Stock s, int code) {

    int trouve = 0, i = 0;
    while (trouve == 0 && i < TAILLE_STOCK) {
        
        if (s.code_produit == code) {
            trouve = 1;
        }
        i++;

        return trouve;
    }
    
    
}