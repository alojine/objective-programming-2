#pragma once

#include "headers.h"

class Studentas {
private:
	string vardas_;
	string pavarde_;
	int egz_;
	vector<int> p_;
	double vidurkis_;
	double mediana_;
public: 
	Studentas(): egz_(0){}
	Studentas(const string& vardas, const string& pavarde);
	inline string vardas() const { return vardas_; }
	inline string pavarde() const { return pavarde_; }
	inline vector<int> gautiPazymius() const { return p_; }
	inline double gvidurkis() const { return vidurkis_; }
	inline double gmediana() const { return mediana_; }
	inline int egzaminas() const { return egz_; }

	void idetiPazymi(int);
	void isimtiPazymi();
	void gautiEgzaminas(int);
	void gautiVidurki();
	void gautiMediana();
};
