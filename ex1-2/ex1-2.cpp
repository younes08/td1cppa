// ex1-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

int main()
{
    string sentence, clean_sentence;
    stack<char> st;
    int index2 = 0, length = 0;
    int is_pal = true;

    std::cout << "Enter your string: \n";
    getline(cin, sentence);
    
    clean_sentence.resize(sentence.size());

    for (int index = 0; index < sentence.length(); index++)
        if ((sentence[index] >= 'a' && sentence[index] <= 'z') ||
            (sentence[index] >= 'A' && sentence[index] <= 'Z'))
            {
                length++;
                clean_sentence[index2++] = tolower(sentence[index]);
            }

    clean_sentence.resize(length);
    
    for (int i = 0; i < clean_sentence.length() / 2; i++)
        st.push(clean_sentence[i]);

    int init = st.size();
    if (clean_sentence.length() % 2) init++;

    for (int i = init; i < clean_sentence.length(); i++)
    {
        if (st.top() != clean_sentence[i])
        {
            is_pal = false;
            break;
        }
        st.pop();
    }

    if (is_pal) cout << "is palindrome\n";
    else cout << "not palindrome\n";
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
