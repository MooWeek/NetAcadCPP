#include <string>
#include <iostream>
int main()
{
	std::string sentence;
	std::getline(std::cin, sentence);


	// manipulate the sentence here
	std::string sent = sentence;

	while (sentence.find(' ') != -1) 
	{
		std::string word = sentence.substr(0, sentence.find(' '));
		sentence = sentence.substr(sentence.find(' ') + 1);
		if (sentence.find(' ') == -1)
			break;
		std::string sWord = sentence.substr(0, sentence.find(' '));
	}


	std::cout << sentence << "\n";
}
