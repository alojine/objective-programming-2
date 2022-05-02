#include "headers.h"
#include "Studentas.h"
#include "functions.h"


Studentas::Studentas(const string& vardas, const string& pavarde) {
    vardas_ = vardas;
    pavarde_ = pavarde;
}

void Studentas::idetiPazymi(int pazimys) {
    p_.push_back(pazimys);
}

void Studentas::isimtiPazymi() {
    p_.pop_back();
}

void Studentas::gautiEgzaminas(int pazimys) {
    egz_ = pazimys;
}

void Studentas::gautiVidurki() {
    vidurkis_ = vidurkis(p_, egz_);
}

void Studentas::gautiMediana() {
    mediana_ = mediana(p_, egz_);
}

