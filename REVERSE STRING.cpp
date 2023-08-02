#include <iostream>
#include <string>
std::string reverseString(const std::string& input) {
    std::string reversed = input;
    int length = input.length();
    
  
    for (int i = 0; i < length / 2; ++i) {
        std::swap(reversed[i], reversed[length - i - 1]);
    }
    
    return reversed;
}

int main() {
    std::string inputString;
    
  
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);
    

    std::string reversedString = reverseString(inputString);
    
   
    std::cout << "Reversed string: " << reversedString << std::endl;
    
    return 0;
}
