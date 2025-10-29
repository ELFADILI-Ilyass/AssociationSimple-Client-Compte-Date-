#pragma once
#include "includes.h"
#include "Compte.h"
class C_Epargne :public Compte
{
	private:
		double tauxInteret;
	public:
		C_Epargne(int numeroCompte, double solde, const string currency, double tauxInteret);
		void afficher() const;
		void Debiter(double montant);	
};

