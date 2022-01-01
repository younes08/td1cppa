#pragma once
#include <iostream>
#include <unordered_map>

using namespace std;

namespace pers
{
	class Personne
	{
		private:
			string _nom;
			string _adr;
			string _tel;

		public:
			Personne(string, string, string);
			void print() const;
			void mapper(std::unordered_multimap<string, Personne, std::less<std::string>>&);
	};

}

