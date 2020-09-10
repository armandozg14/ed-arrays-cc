#include<iostream>

void print(int number);

int main(){
    int numbers[6]{5,10,15,50,80,90};
    /*std::cout << "Array memory: " << numbers << std::endl;
    std::cout << "Array memory: " << *numbers << std::endl;
    for(int i=0; i<6; i++){
        std::cout << numbers + i << "\t";
    }
    for(int n: numbers){
        std::cout << n << "\t";
    }
    int i{};
    while(i<6){
        std::cout << &numbers[i] << "\t";
        i++;
    }*/

    int n1{5}; //stack
    int n2{n1};
    int& n3{n1};

    std::cout << "n1 value " << n1 << std::endl;
    std::cout << "n2 value " << n2 << std::endl;
    std::cout << std::endl;
    n2++;

    std::cout << "n1 value " << n1 << std::endl;
    std::cout << "n2 value " << n2 << std::endl;
    std::cout << std::endl;

    std::cout << "n1 memory " << &n1 << std::endl;
    std::cout << "n2 memmory " << &n2 << std::endl;
    std::cout << std::endl;

    std::cout << "n1 memory " << &n1 << std::endl;
    std::cout << "n3 memmory " << &n3 << std::endl;
    std::cout << std::endl;


    std::cout << "n1 value " << n1 << std::endl;
    std::cout << "n3 value " << n3 << std::endl;
    std::cout << std::endl;

    n3++;
    n1++;

    std::cout << "n1 value " << n1 << std::endl;
    std::cout << "n3 value " << n3 << std::endl;
    std::cout << std::endl;

    print(n1);
    std::cin.get();
    return 0;
}

void print(int number){
    std::cout << "number value " << number << std::endl;
    std::cout << "number memmory " << &number << std::endl;
}