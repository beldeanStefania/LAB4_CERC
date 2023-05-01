#include "cerc.h"
#include<iostream>
using namespace std;

const double PI{ 3.1415926535897932384626433832795 };

Cerc::Cerc()///constructor implicit
{
	this->raza = 0;
}

Cerc::Cerc(int raza_param)///constructor general
{
	if (this->raza != 0)
		this->raza = raza_param;
	else cout << "Valoarea razei e gresita!";
}

Cerc::Cerc(const Cerc& r)///constructor de copiere
{
	if (r.raza != 0)
		this->raza = r.raza;
	else cout << "Valoarea razei e gresita!";
}

Cerc::~Cerc()///destructor
{
	//cout << "Destructor" << " " << this->raza << endl;
}

/// constructor de conversie??

int Cerc::get_raza()
{
	return this->raza;
}

void Cerc::set_raza(int raza_param)
{
	this->raza = raza_param;
}

bool Cerc::compare(Cerc& r)
{
	return (this->raza==r.raza);
}

Cerc& Cerc::operator=(const Cerc& cerc)//operator e atribuire
{
	// TODO: insert return statement here
	if (this != &cerc)
	{
		this->raza = cerc.raza;
	}
	else cout << "Self assignment";
	return *this;
}

int Cerc::operator>(const Cerc& cerc)
{
	return (this->raza > cerc.raza);
}

int Cerc::operator<(const Cerc& cerc)
{
	return (this->raza < cerc.raza);
}

double Cerc::arieCerc()
{
	return PI*this->raza*this->raza;
}

double Cerc::diametruCerc()
{
	return 2*this->raza;
}

double Cerc::lungimeCerc()
{
	return 2*PI*this->raza;
}


