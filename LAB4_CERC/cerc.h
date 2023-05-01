#pragma once
class Cerc
{
private:
	int raza;
public:
	Cerc();//constructor general
	Cerc(int);//constructor cu parametru
	Cerc(const Cerc& r);//constructor de copiere
	~Cerc();//destructor

	int get_raza();
	void set_raza(int);
	bool compare(Cerc &r);
	//int operator==(const Rational& rRight);
	Cerc& operator=(const Cerc& cerc);
	int operator>(const Cerc& cerc);
	int operator<(const Cerc& cerc);
	double arieCerc();
	double diametruCerc();
	double lungimeCerc();
};
