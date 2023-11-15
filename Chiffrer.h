#pragma once
#include <string>
using namespace std;
class Chiffrer
{
private:
    string source;  // Nom du fichier source
    int mode;   // Num�ro de mode
    string destination; // Nom du fichier de destination

public:
    Chiffrer();   // Constructeur par d�faut
    Chiffrer(string, string);	// Constructeur avec param�tres
    void Chiffre(); // Chiffre/D�chiffre un message
};

