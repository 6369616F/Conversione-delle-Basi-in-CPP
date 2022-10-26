#include <iostream> 

// Crea una funzione per convertire il numero avendo come parametri il numero e la sua base
int conversione(int n, int base) {
    const int bit_array = 32; // Valore costante per la grandezza dell'array
    int array[bit_array];
    for (int i; i<(sizeof(array)/sizeof(array[0])); i++) { // MOD per la base, e divisione per la base
        array[i] = n%base; n=n/base;
        i++;
    }
    int rev=0; int reverse[bit_array];
    for(int i=sizeof(array)/sizeof(array[0])-1; i>=0; ){ // Algoritmo per reverse array
        reverse[rev++] = array[i--];
    }
    for (int i=0; i<sizeof(array)/sizeof(array[0]); i++) { // Stampa il risultato
        std::cout<<reverse[i];
    }
    return 0;
}


int main() {
    unsigned int base; 
    std::cout<<"Inserisci la base > ";
    std::cin>>base; // Prende come input la base
    int numero;  
    std::cout<<"Inserisci il numero > ";
    std::cin>>numero; // Prende come input il numero
    if (base>16 || base<2) { // Logical OR
        std::cout<<"Base Invalida"; 
        exit(1); // Controlla se la base è maggiore di 16 o minore di 0, in caso la condizione si avvera esce dal programma con lo stato di uscita '1'
    }
    conversione(numero, base);
    return 0;
}
