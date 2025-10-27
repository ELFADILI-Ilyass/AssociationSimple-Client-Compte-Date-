#pragma once
#include <string>
#include <iostream>
using namespace std;
namespace bank
{
	class Compte
	{
		private:
		int numeroCompte;
		double solde;
		const string currency;
		
	public:
		Compte(int, double, const string);
		void afficher() const;
		double crediter(double montant);
		double debiter(double montant);
		~Compte();
	};
}

