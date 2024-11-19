#include <iostream>



int main(){
    std::string name;
    std::string best;
    std::cout << "hi bro what's your name?" << "\n";
    std::getline(std::cin, name);

    std::cout << "who is the best person in the world?" << "\n";
    std::getline(std::cin >> std::ws, best);


    std::cout << "nah forget about " << best << "..."<< name <<" is the pest person in the world";

    return 0;
} 
