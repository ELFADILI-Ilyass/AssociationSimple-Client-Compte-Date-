#include "Compte.h"

bank::Compte::Compte(int numeroCompte, double s, const string currency) : numeroCompte(numeroCompte), solde(s), currency(currency)
{
}

void bank::Compte::afficher() const
{
	cout << "Numero de compte: " << this->numeroCompte ;
	cout << " Solde: " << this->solde << " " << this->currency ;
}

double bank::Compte::crediter(double montant)
{
	this->solde += montant;
	return this->solde;

	
}

double bank::Compte::debiter(double montant)
{
	if (this->solde>= montant)
	{
		this->solde -= montant;
		return this->solde;
	}
	else
	{
		cout << "Fonds insuffisants pour debiter " << montant << " " << this->currency << endl;
	}
	exit(-1);
}

bank::Compte::~Compte()
{
	cout << "call of the destructor Compte " <<  endl;
}
