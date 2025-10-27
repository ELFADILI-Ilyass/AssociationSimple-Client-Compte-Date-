#pragma once

class Date
{
	int jour;
	int mois;
	int annee;
public:
	Date(int j, int m, int a);
	void affichage() const;
};

