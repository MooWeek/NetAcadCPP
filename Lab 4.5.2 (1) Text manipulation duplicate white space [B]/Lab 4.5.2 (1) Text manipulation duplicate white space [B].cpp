#include <iostream>
#include <string>

using namespace std;

string CheckIp(string ip) 
{
    string addres = ip;
    for (int i = 0; i < 4; i++) 
    {
        try
        {
            string part = addres;
            if(i < 3)
                part = addres.substr(0, addres.find('.'));
            addres = addres.substr(addres.find('.') + 1);

            int checkIsLastPart = addres.find('.');
            if (checkIsLastPart == -1)
                addres = "";

            for (int j = 0; j < part.size(); j++)
            {
                if (part[j] == 46)
                {
                    return "Too many parts";
                }
                if (part[j] < 48 || part[j] > 57)
                {
                    return "Only digits and dots allowed";
                }
            }

            int numPart = atoi(part.c_str());
            if (numPart > 255) 
            {
                if(numPart > 999)
                    return "Too many characters in a part";
                else
                    return "Too big a value of a part";
            }

        }
        catch (const std::exception&)
        {
            return "Incorrect parts count";
        }
    }
    if (addres.size() > 0)
        return "Too many parts";

    return "Correct IP";
}

int main()
{
    string ip;
    cin >> ip;

    cout << CheckIp(ip);
}