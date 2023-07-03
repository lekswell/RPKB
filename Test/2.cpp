#include <iostream>
#include <string>

class Sign {
public:
	Sign(std::string message, int wide)
	{
		this->message = message;
		this->wide = wide;
	}
	int numberOfLines()
	{
		return (message.length() / wide) + (message.length() % wide == 0 ? 0 : 1);
	}
	std::string getLines()
	{
		std::string curMessage = message;
		for (int i = 0; i < numberOfLines() - 1; i++)
		{
			curMessage.insert((i + 1) * wide + i, ";");
		}
		return curMessage;
	}
private:
	std::string message;
	int wide;
};

int main()
{
	std::cout << "TEST 1\n";
	Sign* sign1 = new Sign("AAABBB23", 3);
	std::cout << sign1->numberOfLines() << std::endl;
	std::cout << sign1->getLines() << std::endl;

	std::cout << "\nTEST 2\n";
	Sign* sign2 = new Sign("ABCD", 10);
	std::cout << sign2->numberOfLines() << std::endl;
	std::cout << sign2->getLines() << std::endl;

	std::cout << "\nTEST 3\n";
	Sign* sign3 = new Sign("ABCDEF", 6);
	std::cout << sign3->numberOfLines() << std::endl;
	std::cout << sign3->getLines() << std::endl;

	std::cout << "\nTEST 4\n";
	Sign* sign4 = new Sign("", 4);
	std::cout << sign4->numberOfLines() << std::endl;
	std::cout << sign4->getLines() << std::endl;

	return 0;
}