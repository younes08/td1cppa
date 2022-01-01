// ex2-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>

#include "Personne.h"

using namespace std;
using namespace pers;


int main()
{

	std::unordered_multimap<string, Personne, std::less<std::string>> map;
	Personne p("ananas", "hj", "u");
	Personne p1("znas", "kjh", "kuh");
	Personne p2("ananas", "kjh", "kuh");

	p.mapper(map);
	p1.mapper(map);
	p2.mapper(map);

	for (auto it : map)
	{
		cout << it.first << "->";
		it.second.print();
	}
		
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
