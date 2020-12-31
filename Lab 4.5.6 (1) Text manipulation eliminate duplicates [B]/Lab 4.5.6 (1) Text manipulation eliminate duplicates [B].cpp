#include <string>
#include <iostream>
int main()
{
	std::string sentence;
	std::getline(std::cin, sentence);

	// manipulate the sentence here

	for (int i = 0; i < sentence.size() - 1; i++) 
	{
		if (sentence[i] == '\n')
			break;
		if (sentence[i] == ' ' && sentence[i + 1] == ' ') {
			std::string fPart = sentence.substr(0, i);
			std::string sPart = sentence.substr(i + 1);
			sentence = fPart + sPart;
			i--;
		}
	}

	std::cout << sentence << "\n";
}
