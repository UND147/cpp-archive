#include <iostream>
#include <string>
int main(){
    std::string str;
    std::getline(std::cin, str, '\n');
    std::cout << str;
}