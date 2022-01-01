// ex2-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>

#include <list>


using namespace std;

int main()
{
    list<string> lst = {"ahmed", "younes", "ziyad" };

    list<string>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
        cout << *it << endl;

    

    std::transform(lst.begin(), lst.end(), lst.begin(), [](string& c)->string
                                            {
                                                for (int i = 0; i < c.length(); i++)
                                                {
                                                    if (c[i] == 'a' ||
                                                        c[i] == 'e' ||
                                                        c[i] == 'i' ||
                                                        c[i] == 'o' ||
                                                        c[i] == 'u'
                                                        )
                                                        c[i] = '*';

                                                }
                                                
                                                return c;
                                            }
            );
    
    std::transform(lst.begin(), lst.end(), lst.begin(), [](string& str)
                                        {
                                            for (int i = 0; i < str.length(); i++)
                                                str[i] = toupper(str[i]);
                                            return str;
                                        }
                );


    for (it = lst.begin(); it != lst.end(); it++)
        cout << *it << endl;

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
