#include <iostream>


int returnNumber(){
    std::cout << "Enter an integer: ";
    int input {};
    std::cin >> input;

    return input;
}


int main(){
    int num {returnNumber()};

    std::cout << num << " doubled is: " << num * 2 << std::endl;

    return 0;
}