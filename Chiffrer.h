#pragma once
#include <string>
using namespace std;
class Chiffrer
{
private:
    string source;  // Nom du fichier source
    int mode;   // Numéro de mode
    string destination; // Nom du fichier de destination

public:
    Chiffrer();   // Constructeur par défaut
    Chiffrer(string, string);	// Constructeur avec paramètres
    void Chiffre(); // Chiffre/Déchiffre un message
};

