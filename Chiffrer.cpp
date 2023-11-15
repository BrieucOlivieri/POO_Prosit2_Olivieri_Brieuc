#include "Chiffrer.h"
#include <fstream>
#include <iostream>
#include <string>
#include "Cesar.h"

using namespace std;

Chiffrer::Chiffrer()
{
    source = "source.txt";
    mode = 1;
    destination = "destination.txt";
}

Chiffrer::Chiffrer(string newsource , string newdestination) {
    source = newsource;
    destination = newdestination;
}

void Chiffrer::Chiffre()
{
    ifstream fichier_source(source);
    // V�rification de l'ouverture du fichier
    if (!fichier_source.is_open()) {
        cerr << "Erreur d'ouverture du fichier " << source << endl;
    }
    // Cr�ation de variables pour enregistrer le message
    string message;
    string ligne;
    // Extraction du message dans le fichier
    while (getline(fichier_source, ligne)) {
        message += ligne + "\n";
    }
    // Fermeture du fichier
    fichier_source.close();

    // Application du chiffrage corespondant au num�ro de mode
    // D�terminer si on veut chiffrer ou d�chiffrer
    string intention;
    cout << "Voulez vous chiffrer (C) ou dechiffrer (D) :" << endl;
    cin >> intention;
    // Obtention de la cl� de chiffrement
    string clef;
    cout << "Entrer la cle pour le chiffrage Cesar :" << endl;
    cin >> clef;
    int cle = stoi(clef);
    if (intention == "C") { // Chiffrage
        Cesar newmessage(message, cle);
        message = newmessage.Chiffrage();
    }
    if (intention == "D") { // D�chiffrage
        Cesar newmessage(message, cle);
        message = newmessage.Dechiffrage();
    }
    // Ouverture du fichier
    ofstream fichier_final(destination);
    // V�rification de l'ouverture du fichier
    if (!fichier_final.is_open()) {
        cerr << "Erreur d'ouverture du fichier " << destination << endl;
    }
    // Enregistrement du message dans le fichier
    fichier_final << message;
    // Fermeture du fichier
    fichier_final.close();
}
