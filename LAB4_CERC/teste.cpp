#include"teste.h"
#include"cerc.h"
#include<assert.h>

void teste()
{
	Cerc cerc1(10);
	Cerc cerc2(5);
	Cerc cerc3 = cerc1;
	Cerc cerc4;
	assert(cerc1.get_raza() == 10);
	assert(cerc1.diametruCerc() == 20);
	assert(cerc1.arieCerc() == 314.15926535897932384626433832795);
	assert(cerc1.lungimeCerc() == 62.83185307179586476925286766559);
	int rez1 = cerc1.operator<(cerc2);
	assert(rez1 == 0);
	int rez2 = cerc1.operator>(cerc2);
	assert(rez2 == 1);
	int rez3 = cerc1.compare(cerc3);
	assert(rez3 == 1);
	cerc4.operator=(cerc1);
	int rez4 = cerc1.compare(cerc4);
	assert(rez4 == 1);
}
