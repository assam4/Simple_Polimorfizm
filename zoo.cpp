#include "animal.h"
#include <vector>

inline void wait_for_a_symbhol() 
{
    char symbhol;
    std::cin.clear();
    std::cout << "\nenter any symbhol for Exit . ";
    std::cin >> symbhol;
}

int main () {
    try{
        std::vector<animal*> zoo ;
         zoo.push_back(new lion("Simba"));
         zoo.push_back(new fish("Nemo"));
         zoo.push_back(new snake("Kan"));
         zoo.push_back(new monkey("Abu"));

         


    for(auto animal : zoo) 
    {
        animal->eat();
        animal->move();
        animal->voice();  }

    for (auto animal : zoo) delete animal ;
    wait_for_a_symbhol();

    return 0 ;}

    catch(...) {std::cerr << "Something went wrong :(";exit(1);}
}