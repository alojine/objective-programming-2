#include "Studentas.h"
#include "Studentas.cpp"
#include "headers.h"
#include "functions.h"
#include "functions.cpp"

int main()
{	
	cout << "Ar norite skityti duomenis is failo? (y/n) ";
	char howInput = charApsauga(howInput);

	if (howInput == 'n') Ranka();
	else {
		cout << "Ar norite ivesti faila? (y/n) ";
		char gen = charApsauga(gen);

		if (gen == 'y') automatinisGen();
		else automatinisBeGen();
	}


	system("pause");
}
