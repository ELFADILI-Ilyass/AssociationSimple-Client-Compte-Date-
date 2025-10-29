#pragma once
#include "includes.h"
#include "Compte.h"
class C_Courant :public Compte
{
	double plafond;
public:
	C_Courant(int, double, const string, double);
	void afficher() const;


};

