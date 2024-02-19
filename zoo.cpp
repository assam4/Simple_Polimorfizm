#include "animal.h"
#include <vector>
#include <memory>

inline void wait_for_a_symbhol() 
{
    char symbhol;
    std::cin.clear();
    std::cout << "\n Enter any character for close. ";
    std::cin >> symbhol;
}

int main () 
{
    try
        {
        std::vector<std::unique_ptr<Animal>> zoo ;
         zoo.push_back(new lion("Simba")); // insert lion
         zoo.push_back(new fish("Nemo")); // insert fish
         zoo.push_back(new snake("Kan")); // insert snake
         zoo.push_back(new monkey("Abu")); // insert monkey

    for(auto animal : zoo)  // calling all virtual functions
    {
        animal->eat();
        animal->move();
        animal->voice();  
    }

    for (auto animal : zoo) delete animal ;
    wait_for_a_symbhol();

    return 0 ;}

    catch(...) 
               {
                   std::cerr << "Something went wrong :(";exit(1);
               }
}
