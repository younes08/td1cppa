#include "Personne.h"

pers::Personne::Personne(string n, string a, string t)
{
	_nom = n;
	_adr = a;
	_tel = t;
}

void pers::Personne::print() const
{
	cout << _nom << " " << _tel << " " << _tel << endl;
}

void pers::Personne::mapper(std::unordered_multimap<string, Personne, std::less<std::string>>& map)
{
	map.insert(make_pair(_nom, *this));
}
