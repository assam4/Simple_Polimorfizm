#include "animal.h"


// fish functions declaration

void fish::move  () const {  std::cout << "A fish named "<< name << " swims." << std::endl ; } 
void fish::eat   () const {  std::cout << "A fish named "<< name << " eats worms." << std::endl ; }
void fish::voice () const {  std::cout << "A Fish named "<< name << " doesn't make a sound."<<std::endl ; }

// monkey functions declaration

void monkey::move  () const {  std::cout << "A monkey named "<< name << " pressings." << std::endl ; } 
void monkey::eat   () const {  std::cout << "A monkey named "<< name << " eats banana." << std::endl ; }
void monkey::voice () const {  std::cout << "A monkey named "<< name << " speaks sign language"<<std::endl ; }

// snake functions declaration

void snake::move  () const {  std::cout << "A snake named "<< name << " crowling." << std::endl ; } 
void snake::eat   () const {  std::cout << "A snake named "<< name << " eats small animals." << std::endl ; }
void snake::voice () const {  std::cout << "A snake named "<< name << " Hissing hiss"<<std::endl ; }

// lion functions declaration

void lion::move  () const {  std::cout << "A lion named "<< name << " runs." << std::endl ; } 
void lion::eat   () const {  std::cout << "A lion named "<< name << " eats small meat." << std::endl ; }
void lion::voice () const {  std::cout << "A lion named "<< name << " roars."<<std::endl ; }



