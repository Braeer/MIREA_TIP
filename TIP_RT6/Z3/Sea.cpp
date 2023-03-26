#include "Sea.h"
#include <Windows.h>

void Sea::addZaliv()
	{
	Zaliv* subarray = new Zaliv[zalivs_count + 1];
	for (int i = 0; i < zalivs_count; i++)
	{
		subarray[i] = zalivs[i];
	}
	zalivs_count++;
	zalivs = subarray;
	}

void Sea::setName(string N)
{
	name = N;
}
void Sea::setDeep(float D)
{
	deep = D;
}
void Sea::setSize(float S)
{
	size = S;
}

ostream& operator<<(ostream& stream, Sea obj)
{
	stream << obj.name << " море; ";
	stream << "глубина: " << obj.deep << "м; ";
	stream << "размер: " << obj.size << "тыс км2";
	
	if (obj.zalivs_count == 0) stream << "\n    у этого моря нет заливов.";

	for (int i = 0; i < obj.zalivs_count; i++)
	{
		stream << "\n    " << obj.zalivs[i];
	}

	return stream;
}
istream& operator>>(istream& stream, Sea& obj)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	stream >> obj.name >> obj.deep >> obj.size;
	return stream;
}