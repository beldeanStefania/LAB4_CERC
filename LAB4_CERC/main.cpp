#include<iostream>
#include"cerc.h"
#include"teste.h"
using namespace std;
int main()
{
	teste();
	Cerc c;
	Cerc c1(5);
	Cerc c2(c1);
	Cerc c3(9);
	c3 = c1;
	cout << c1.get_raza() << " " << c3.get_raza();
	int rez = c1.compare(c3);
	cout << endl << rez<<endl;
	float aria, lungimea, diametru;
	aria = c1.arieCerc();
	lungimea = c1.lungimeCerc();
	diametru = c1.diametruCerc();
	cout << "Aria cercului: "<<aria << endl;
	cout << "Lungimea cercului: " << lungimea<<endl;
	cout << "Diametrul cercului: " << diametru;
	return 0;
}