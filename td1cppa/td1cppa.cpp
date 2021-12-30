// td1cppa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <deque>
#include <vector>
#include <list>
#include <stack>

using namespace std;

int main()
{
	int n;
	deque<string> deq;
	string word;
	list<string> lst;

	cout << "Enter value: " << endl;
	cin >> n;

	for (int index = 0; index < n; index++)
	{
		cout << "Enter a word: ";
		cin >> word;
		deq.push_back(word);
	}

	lst.resize(deq.size());
	copy(deq.begin(), deq.end(), lst.begin());
	lst.sort();

	for (auto it : lst)
		cout << it << "\t";


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
