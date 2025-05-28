#include <iostream>
#include <string>
#include <vector>

void downloadString(std::string& inputString) {
	std::cout << "Enter a string to reverse: ";
	std::getline(std::cin, inputString);
}

void reverseString(std::string& inputString) {
	std::vector<char> letters(inputString.begin(), inputString.end());
	size_t left = 0;
	size_t right = letters.size() - 1;
	while (left < right) {
		std::swap(letters[left], letters[right]);
		left++;
		right--;
	}
	inputString = std::string(letters.begin(), letters.end());
	std::cout << inputString << std::endl;
}

int main()
{
	std::string inputString;
	downloadString(inputString);
	reverseString(inputString);
}


