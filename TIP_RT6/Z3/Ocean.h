#include <iostream>
#include <string>
#include "Sea.h"

using namespace std;

class Ocean: private Sea
{
private:
	string name;
	float deep; //? ??????
	float size; //? ??? ??2

	string NamesOcean[12] = {
"Южный",
"Красный",
"Лименский",
"Зоронский",
"Советский",
"Атматический",
"Орлеанский",
"Солнечный",
"Европейский",
"Великий",
"Британский",
"Огромный"
	};

public:
	int seas_count = 0;
	Sea* seas = new Sea[seas_count];

	void addSea();

	Ocean()
	{
		name = NamesOcean[rand()%12];
		deep = rand() % 8500 + 3500;
		size = (rand() % 1000000 + 200000) / 10.0;
	}
	Ocean(string N, float D, float S)
	{
		name = N;
		deep = D;
		size = S;
	}

	void setName(string N);
	void setDeep(float D);
	void setSize(float S);

	friend ostream& operator<<(ostream& stream, const Ocean obj);
	friend istream& operator>>(istream& stream, Ocean& obj);
};

