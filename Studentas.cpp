#include "headers.h"
#include "Studentas.h"
#include "functions.h"

// Default constructor
Studentas::Studentas(const string& vardas, const string& pavarde) {
    vardas_ = vardas;
    pavarde_ = pavarde;
}

// Destructor
Studentas::~Studentas(){
    p_.clear();
}

// Copy constructor
Studentas::Studentas(const Studentas &s){
    vardas_ = s.vardas_;
    pavarde_ = s.pavarde_;
    for(int i = 0; i < s.p_.size(); i++){
        p_[i] = s.p_[i];
    }
    egz_ = s.egz_;
    vidurkis_ = s.vidurkis_;
    mediana_ = s.mediana_;
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



