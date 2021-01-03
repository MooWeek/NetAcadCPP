#include <string>
#include <iostream>
int main()
{
	std::string sentence;
	std::getline(std::cin, sentence);


	// manipulate the sentence here
	std::string newSent = "";

	while (sentence.find(' ') != -1) 
	{
		std::string fWord = sentence.substr(0, sentence.find(' '));
		sentence = sentence.substr(sentence.find(' ') + 1);
		if (sentence.find(' ') == -1) {
			newSent += fWord + " ";
			break;
		}
		std::string sWord = sentence.substr(0, sentence.find(' '));
		if (fWord == sWord) {
			sentence = sentence.substr(sentence.find(' ') + 1);
		}
		newSent += fWord + " ";
	}
	newSent += sentence;

	std::cout << newSent << "\n";
}
