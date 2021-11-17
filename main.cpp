#include <string>
#include <iostream>
using namespace std;
bool szukaj(string & tekst, string x1, string x2 )
{
    size_t pozycja1 = tekst.find(x1);
    size_t pozycja2 = tekst.find(x2);
    if( pozycja1 != string::npos&&pozycja2 != string::npos )
    {
	
         return true;
     }
    else{

         return false;
		 	}
}

void wynik (bool sprawdzanie)
{
	if (sprawdzanie)
	cout << "znaleziono szukane znaki!"<<endl;
	else
	cout << "nie znaleziono!" <<endl;
}

int main()
{
	string tekst;
	string x1;
	string x2;
	cout << "Podaj tekst: "<<endl;
	getline (cin, tekst);
	cout <<"Podaj pierwsza szukana litere lub wyraz: "<< endl;
	getline (cin, x1);
	cout <<"Podaj druga szukana litere lub wyraz: "<<endl;
	getline (cin, x2);
	wynik (szukaj(tekst, x1, x2));
	
}
