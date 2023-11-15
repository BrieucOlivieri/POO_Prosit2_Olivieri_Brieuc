#pragma once
#include <iostream>
#include <string>
using namespace std;

class Cesar
{
private:
    string message;	// Contient le message
    int key;	// Clé de chiffrement

public:
    Cesar();	// Constructeur
    Cesar(string, int);	// Constructeur avec paramètres
    string Chiffrage();	// Chiffre le message
    string Dechiffrage(); // Déchiffre le message
};
