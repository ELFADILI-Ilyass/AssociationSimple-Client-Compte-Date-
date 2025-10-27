
#include "includes.h"
using namespace std;
using namespace bank;

int main()
{
	Date date1(15, 8, 1990);
	Date date2(22, 11, 1985);
	Date date3(26, 4, 2000);
	Compte compte1(1001, 5000.0, "USD");
	Compte compte2(1002, 3000.0, "EUR");
	Compte c3(1003, 10000.500, "MAD");
	Client* client1=Client::creeClient( "Hiddelstone", "Tom", compte1, date1);
	Client *client2 = Client::creeClient( "Ahmed", "Mohammed", compte2, date2);
	Client *client3 = Client::creeClient("ELFADILI", "Ilyass", c3, date3);
	Client* client4 = Client::creeClient( "Puth", "Charlie", Compte(1004, 7500.0, "GBP"), Date(5, 5, 1995));
	client1->afficher();
	client2->afficher();
	client3->afficher();
	client4->afficher();
	delete client1,client2,client3;

    
}
