#include <iostream>
#include <string>

using namespace std;

bool IsPangram(string str, int alphabet[])
{
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = 0;
    }

    for (int i = 0; i < str.size(); i++) 
    {
        int loverSym = tolower(str[i]);
        if (loverSym > 96 && loverSym < 123)
        {
            alphabet[loverSym - 97]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string input;
    getline(cin, input);

    int alphabet[26];

    if (IsPangram(input, alphabet)) 
    {
        cout << "Pangram\n";
    }
    else 
    {
        cout << "Not pangram\n";
    }

    for (int i = 0; i < 26; i++) 
    {
        cout << (char)(i+97) << "-" << alphabet[i] << endl;
    }

}
