#include "C_Courant.h"

C_Courant::C_Courant(int NumC, double solde, const string currency, double plafond) :Compte(NumC, solde, currency)
{
	this->plafond = plafond;
}

void C_Courant::afficher()const {

	Compte::afficher();
	cout << "Plafond: " << plafond << endl;
}
