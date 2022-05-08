#include "headers.h"
#include "Studentas.h"
#include "functions.h"


Studentas::Studentas(const string& vardas, const string& pavarde) {
    vardas_ = vardas;
    pavarde_ = pavarde;
}


Studentas::~Studentas(){
    p_.clear();
}


Studentas::Studentas(const Studentas &s){
    this->vardas_ = s.vardas_;
    this->pavarde_ = s.pavarde_;
    this->p_.reserve(s.p_.size());
    this->p_.resize(s.p_.size());
    for (int i = 0; i < s.p_.size(); i++) {
        this->p_.at(i) = s.p_.at(i);
    }
    
    this->egz_= s.egz_;
    this->vidurkis_= s.vidurkis_;
    this->mediana_= s.mediana_;
}


Studentas &Studentas::operator = (const Studentas &s){
    if(&s == this)
        return *this;
    vardas_ = s.vardas_;
    pavarde_ = s.pavarde_;
    p_ = s.p_;
    egz_ = s.egz_;
    vidurkis_ = s.vidurkis_;
    mediana_ = s.mediana_;
    return *this;
}

void Studentas::idetiVarda(string vardas){
    vardas_ = vardas;
}

void Studentas::idetiPavarde(string pavarde){
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

void Studentas::gautiTipa(int galutinis) {
    if (galutinis < 5) tipas_ = "Vargsas";
    else tipas_ = "Kietas";
}

