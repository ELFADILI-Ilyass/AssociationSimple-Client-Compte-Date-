#include "Date.h"
#include <iostream>
using namespace std;
Date::Date(int j, int m, int a):jour(j) , mois (m), annee(a)
{
}

void Date::affichage() const
{
   cout << this->jour << "/" << this->mois << "/" << this->annee << endl;
}
