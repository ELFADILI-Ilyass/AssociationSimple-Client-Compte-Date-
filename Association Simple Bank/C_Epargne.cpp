#include "C_Epargne.h"

C_Epargne::C_Epargne(int numeroCompte, double solde, const string currency, double tauxInteret):Compte(numeroCompte, solde, currency), tauxInteret(tauxInteret)
{
}

void C_Epargne::afficher() const
{
	Compte::afficher();
	cout << "Taux d'interet: " << tauxInteret << " %" <<  endl;
}

void C_Epargne::Debiter(double montant)
{
	double montantAvecInteret = montant + (montant * tauxInteret);
	if(montantAvecInteret <= solde)
	Compte::debiter(montantAvecInteret);
	else
	{
		cout << " Solde: "<<this->solde<< "insuffisant pour débiter" << montantAvecInteret << endl;
	}
	
	
}
