#include "Cesar.h"

Cesar::Cesar() {
    message = "Bonjour";
    key = 3;
}

Cesar::Cesar(string newmessage, int newkey) {
    message = newmessage;
    key = newkey;
}

string Cesar::Chiffrage() {
    int i = 0;
    // Tant que le caract�re de la cha�ne n'est pas un caract�re nul
    while (i < message.length()) {
        // Chiffrement des lettres majuscules
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = (message[i] - 'A' + key) % 26 + 'A';
        }
        // Chiffrement des lettres minuscules
        else if (message[i] >= 'a' && message[i] <= 'z') {
            message[i] = (message[i] - 'a' + key) % 26 + 'a';
        }
        i++;
    }
    return message;
}

string Cesar::Dechiffrage() {
    int i = 0;
    // Tant que le caract�re de la cha�ne n'est pas un caract�re nul
    while (i < message.length()) {
        // D�chiffrement des lettres majuscules
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = (message[i] - 'A' - key + 26) % 26 + 'A';
        }
        // D�chiffrement des lettres minuscules
        else if (message[i] >= 'a' && message[i] <= 'z') {
            message[i] = (message[i] - 'a' - key + 26) % 26 + 'a';
        }
        i++;
    }
    return message;
}