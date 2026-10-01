#include <cstdlib>
#include <iostream>
/*Sviluppare un software in C++ che permetta di cifrare una parola utilizzando una chiave numerica a due cifre. Il programma dovrà operare a basso livello sui singoli caratteri della stringa.Requisiti Tecnici
Input Testo: Il programma deve acquisire una stringa dall'utente. Si assuma che il testo sia composto da una sola parola (senza spazi).
Chiave (Key): L'utente inserisce un numero intero compreso tra 0 e 99. ALFABETO INGLESE
Algoritmo di Cifratura: Per ogni carattere della stringa, il programma deve sommare il valore della chiave al valore del carattere originale.
Output: Stampare a video la stringa risultante dopo la trasformazione.
Ogni scelta progettuale deve essere messa per iscritto in un file README.md.
Esempi di Test (Casi d'uso attesi)
Esempi:
Parola: ciao | Chiave: 2   Risultato: ekcq
Parola: Bhill | Chiave: 25 Risultato: Bghkk
Modalità di Consegna*/
 
using namespace std;
int main() {
    string parola;
    int chiave;

    // Acquisizione input
    cout << "Inserisci una parola (senza spazi): ";
    cin >> parola;

    cout << "Inserisci una chiave (0-99): ";
    cin >> chiave;

    // Cifratura carattere per carattere senza spazi nel for/if
    for(char &c:parola){
        if(c>='A'&&c<='Z'){
            c='A'+(c-'A'+chiave)%26;
        }else if(c>='a'&&c<='z'){
            c='a'+(c-'a'+chiave)%26;
        }
    }

    // Output del risultato
    cout << "Risultato: " << parola << endl;

    return 0;
}