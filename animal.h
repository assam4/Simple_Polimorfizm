#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <string>
#include <iostream>
class animal {
public:
   animal(const std::string n):name(n){}
   virtual ~animal(){}
   virtual  void move  () const = 0 ;
   virtual  void eat   () const = 0 ;
   virtual  void voice () const = 0 ;
protected:

 std::string name ;

};


class fish:public animal {
public:
  fish(const std::string n):animal(n){}
  ~fish(){ std::cout << "The fish is dead ."<<std::endl;}
   void move  () const ;
   void eat   () const ;
   void voice () const ;
};

class monkey:public animal {
public:
  monkey(const std::string n):animal(n){}
  ~monkey(){ std::cout << "The monkey is dead ."<<std::endl;}
   void move  () const ;
   void eat   () const ;
   void voice () const ;
};

class snake:public animal {
public:
  snake(const std::string n):animal(n){}
  ~snake(){ std::cout << "The snake is dead ."<<std::endl;}
   void move  () const ;
   void eat   () const ;
   void voice () const ;
};

class lion:public animal {
public:
  lion(const std::string n):animal(n){}
  ~lion(){ std::cout << "The lion is dead ."<<std::endl;}
   void move  () const ;
   void eat   ()  const ;
   void voice () const ;
};

#endif