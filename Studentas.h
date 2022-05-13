#pragma once

#include "headers.h"

class Zmogus{
	protected:
		string vardas_;
		string pavarde_;
	public:
		explicit Zmogus(){
			vardas_ = ""; pavarde_ = "";
		};

        explicit Zmogus(const string &vardas, const string & pavarde){
			vardas_ = vardas; pavarde_ = pavarde;
		};

		virtual const string &getVardas() const = 0;
		virtual const string &getPavarde() const = 0;
		
};


class Studentas: public Zmogus{
private:
	int egz_;
	vector<int> p_;
	double vidurkis_;
	double mediana_;
public: 
	Studentas(): egz_(0){}

	explicit Studentas(const string & vardas, const string & pavarde):Zmogus(vardas, pavarde){};
	Studentas(const Studentas &s);
	~Studentas();

	//operators
	Studentas &operator=(const Studentas &s);
	friend ostream &operator<<(ostream & output, const Studentas &s);
	
	// set
	void setPazymi(int);
	void setEgzaminas(int);
	void setVidurki();
	void setMediana();

	// get
	const string &getVardas() const override;
	const string &getPavarde() const override;
	inline vector<int> getPazymius() const { return p_; }
	inline double getVidurkis() const { return vidurkis_; }
	inline double getMediana() const { return mediana_; }
	inline int getEgzaminas() const { return egz_; }
	
};
