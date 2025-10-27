#include "Client.h"
#include "includes.h"
using namespace bank;


int bank::Client::compteur = 0;
int bank::Client::MaxC = 5;
bank::Client::Client( string nom, string prenom, Compte compte, Date dateNaissance) : nom(nom), prenom(prenom), compte(compte), dateNaissance(dateNaissance)
{
	compteur++;
	idClient=compteur;
}

Client* bank::Client::creeClient(string nom , string prenom, Compte compte , Date dateNaissance)
{
	if (compteur<MaxC)
	{
		return new Client(nom, prenom, compte, dateNaissance);
	}
	else
	{
		return nullptr;
	}
	
}

void bank::Client::afficher() const
{
	
	cout << "ID Client: " << idClient<<" ";
	cout << "Nom: " << nom<<" ";
	cout << "Prenom: " << prenom <<" ";
	compte.afficher();
	cout << "  ";
	dateNaissance.affichage();

}

bank::Client::~Client()
{
	cout << "destruction du client " << endl;
	compteur--;
}
