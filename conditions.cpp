#include <iostream>

int main(){

    int n;

    std::cout << "This is to test condition statements." << std::endl;
    std::cout << "Please enter a number: ";
    std::cin >> n;

    if(n > 5){
        std::cout << "Your number is greater than 5" << std::endl;
    }else{
        switch(n){
            case 1:
                std::cout << "Your number is 1" << std::endl;
                break;
            case 2:
                std::cout << "Your number is 2" << std::endl;
                break;
            case 3:
                std::cout << "Your number is 3" << std::endl;
                break;
            case 4:
                std::cout << "Your number is 4" << std::endl;
                break;
            default:
                break;
        }
    }
    
    return 0;
}