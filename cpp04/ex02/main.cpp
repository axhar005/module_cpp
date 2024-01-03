#include <iostream>
#include "inc/Animal.hpp"
#include "inc/Cat.hpp"
#include "inc/Dog.hpp"
#include "inc/colors.hpp"

int main(void){
	Animal* animals[10];
	// Animal a = new Animal();

	for (int i = 0; i < 2; i++) {
		animals[i] = new Dog;
	}

	for (int i = 2; i < 4; i++) {
		animals[i] = new Cat;
	}

	for (int i = 0; i < 4; i++) {
		animals[i]->makeSound();
	}

	for (int i = 0; i < 4; i++) {
		delete animals[i];
	}

	std::cout << "#--------------------------------------------#" << std::endl;

	Cat *chat = new Cat;
	chat->setIdea(0, "je ");
	chat->setIdea(1, "ne ");
	chat->setIdea(2, "veux ");
	chat->setIdea(3, "pas ");
	chat->setIdea(4, "bruler ");
	chat->setIdea(5, "le ");
	chat->setIdea(6, "monde ");
	Cat chat2(*chat);
	chat->setIdea(6, "mondeasdasdasd ");
	std::cout << YELLOW << chat2.getIdea(0) << RESET << std::endl;
	std::cout << YELLOW << chat2.getIdea(1) << RESET << std::endl;
	std::cout << YELLOW << chat2.getIdea(2) << RESET << std::endl;
	std::cout << YELLOW << chat2.getIdea(3) << RESET << std::endl;
	std::cout << YELLOW << chat2.getIdea(4) << RESET << std::endl;
	std::cout << YELLOW << chat2.getIdea(5) << RESET << std::endl;
	std::cout << YELLOW << chat2.getIdea(6) << RESET << std::endl;
	delete chat;
}