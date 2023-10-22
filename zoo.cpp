#include "animal.h"
#include <vector>

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

    return 0 ;}

    catch(...) {std::cerr << "Something went wrong :(";exit(1);}
}