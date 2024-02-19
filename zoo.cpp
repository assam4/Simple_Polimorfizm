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
        std::vector<std::unique_ptr<animal>> zoo ;
        auto caller = [&]()
            
        zoo.push_back(std::make_unique<lion>("Simba"));  // insert lion
        zoo.push_back(std::make_unique<fish>("Nemo"));   // insert fish
        zoo.push_back(std::make_unique<snake>("Kan"));   // insert snake
        zoo.push_back(std::make_unique<monkey>("Abu"));  // insert monkey

        for_each(zoo.begin(), zoo.end(), [](const auto& animal) {
                                                            animal->eat();
                                                            animal->move();
                                                            animal->voice();  
                                                             });
            
        wait_for_a_symbhol();
        return 0 ;
        }
    catch(...) 
    {
        std::cerr << "Something went wrong :( " ;
        return 1;
    }
}
