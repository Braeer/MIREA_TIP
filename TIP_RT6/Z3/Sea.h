#include <iostream>
#include <string>
#include "Zaliv.h"

using namespace std;

class Sea: private Zaliv
{
private:
	string name;
	float deep;
	float size;

	int zalivs_count = 0;

	string NamesSea[12] = {
	"Китайское",
	"Элегенское",
	"Унарное",
	"Арабское",
	"Кабанье",
	"Сильное",
	"Франзенское",
	"Белорусское",
	"Батинское",
	"Мирное",
	"Седьмое",
	"Парамайское"
	};

public:
	Zaliv* zalivs = new Zaliv[zalivs_count];

	Sea()
	{
		name = NamesSea[rand() % 12];
		deep = rand() % 8500 + 3500;
		size = (rand() % 100000 + 20000) / 10.0;
	}
	Sea(string N, float D, float S)
	{
		name = N;
		deep = D;
		size = S;
	}

	void addZaliv();

	void setName(string N);
	void setDeep(float D);
	void setSize(float S);

	friend ostream& operator<<(ostream& stream, const Sea obj);
	friend istream& operator>>(istream& stream, Sea& obj);
};