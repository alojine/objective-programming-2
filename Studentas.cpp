#include "headers.h"
#include "Studentas.h"
#include "functions.h"

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

inline ostream &operator<<(ostream & output, const Studentas &s){
    if(s.mediana_ == 0)
        output << std::left << std::setw(20) << s.vardas_ << std::left << std::setw(20) << s.pavarde_ << std::left << std::setw(20) << std::fixed << std::setprecision(2) << s.vidurkis_ << endl;
    else
        output << std::left << std::setw(20) << s.vardas_ << std::left << std::setw(20) << s.pavarde_ << std::left << std::setw(20) << std::fixed << std::setprecision(2) << s.mediana_ << endl;
    return output;
}

inline istream &operator>>(istream & input, const Studentas &s){
    
}

const string &Studentas::getVardas() const { return vardas_; }

const string &Studentas::getPavarde() const { return pavarde_; }

void Studentas::setPazymi(int pazimys) {
    p_.push_back(pazimys);
}

void Studentas::setEgzaminas(int pazimys) {
    egz_ = pazimys;
}

void Studentas::setVidurki() {
    vidurkis_ = vidurkis(p_, egz_);
}

void Studentas::setMediana() {
    mediana_ = mediana(p_, egz_);
}
