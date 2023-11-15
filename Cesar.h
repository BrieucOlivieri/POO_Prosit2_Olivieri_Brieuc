#pragma once
#include <iostream>
#include <string>
using namespace std;

class Cesar
{
private:
    string message;	// Contient le message
    int key;	// Cl� de chiffrement

public:
    Cesar();	// Constructeur
    Cesar(string, int);	// Constructeur avec param�tres
    string Chiffrage();	// Chiffre le message
    string Dechiffrage(); // D�chiffre le message
};
