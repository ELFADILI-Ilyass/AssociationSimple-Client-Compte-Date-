#pragma once
#include "Compte.h"
#include "Date.h"
#include <iostream>
using namespace std;
namespace bank{

class Client
{
private:
		static int compteur;
	     int idClient;
		static int MaxC;
		string nom;
		string prenom;
		Compte compte;
		Date dateNaissance;
		Client(string, string, Compte, Date);
public:

	static Client* creeClient(string, string, Compte, Date);
	void afficher()const;
	~Client();

};

}