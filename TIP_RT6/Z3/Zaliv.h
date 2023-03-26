#include <iostream>
#include <string>

using namespace std;

class Zaliv
{
private:
	string name;
	float deep;
	float size;

	string NamesZaliv[12] = {
	"Джинанский",
	"Ворстонский",
	"Новорассветный",
	"Байкальский",
	"Ломоносовский",
	"Тропический",
	"Трамиский",
	"Апрельский",
	"Безымянный",
	"Холодный",
	"Маленький",
	"Тормонский"
	};

public:
	Zaliv()
	{
		name = NamesZaliv[rand() % 12];
		deep = rand() % 8500 + 3500;
		size = (rand() % 10000 + 2000) / 10.0;
	}
	Zaliv(string N, float D, float S)
	{
		name = N;
		deep = D;
		size = S;
	}

	void setName(string N);
	void setDeep(float D);
	void setSize(float S);

	friend ostream& operator<<(ostream& stream, const Zaliv obj);
	friend istream& operator>>(istream& stream, Zaliv& obj);
};