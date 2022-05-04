#pragma once
#include "headers.h"
#include "Studentas.h"

//----------------------------------------------------------------Skaiciavimai
double vidurkis(vector<int> p, int egz);
double mediana(vector<int> p, int egz);

//----------------------------------------------------------------Apsaugos
int genrand();
int sveikojoApsauga(int& a);
char charApsauga(char& a);
char konteinerioApsauga(char& a);

//----------------------------------------------------------------Rikiavimai
bool rikiuotiPazymi(Studentas& a, Studentas& b);
bool rikiuotiVarda(Studentas& a, Studentas& b);

//----------------------------------------------------------------Su failais
void automatinisGen();
void automatinisBeGen();

inline bool egzistuojaFailas(string& fname);
void generuotifailus(string& failopavadinimas, int kiek, int nd);
void skaitymas(vector<Studentas>& s, string fname);
void paskirstymas(vector<Studentas>& s, vector<Studentas>& Kieti, vector<Studentas>& Vargsai, char vm, char stratType);
void buffRasymas(vector<Studentas>& s, string fname, char vm);
void buffFaila(string fname, std::stringstream& buffer);

//----------------------------------------------------------------Ranka
void Ranka();
void input(data& st);
void output(data& st, char vm);
void addmark(data& st, int& it, int& kiek);
void skaiciavimai(vector<data>& st, char vm);
void antraste(char vm);



