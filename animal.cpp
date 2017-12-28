/*
 * animal.c

 *
 *  Created on: 26.12.2017
 *      Author: pajacyk28
 */

#include <iostream>
#include <string>
#include <sstream>
#include "animal.h"

Animal::Animal(std::string s, std::string g, int a, int w, int chNum){
	age =a;
	genre = g;
	sound = s;
	weight = w;
	childNum = chNum;
	array = new int[childNum];

	for(int i=0;i<childNum;i++){
		std::cout << "Enter child age: " << std::endl;
		std::cin >> array[i];
	}
}

Animal::Animal(const Animal &a){
	this->age = a.age;
	this->genre = a.genre;
	this->sound = a.sound;
	this->weight = a.weight;
	this->childNum = a.childNum;
	array = new int[childNum];

	for(int i=0;i<childNum;i++){
		array[i] = a.array[i];
	}
}

void Animal::getInfo() const{
	std::cout << "I am a " << this->genre << "\nMy age is: " << this->age
			<< " and i can making: " << this->sound << "\nMy weight is: " << this->weight << std::endl;
}

void Animal::getChildInfo() const{
	for(int i=0;i<childNum;i++){
		std::cout << "Child number: " << i << " and his/her age is: " << array[i] << std::endl;
	}
}

Animal & Animal::operator+(const Animal & T){
	this->weight+=T.weight;
	return * this;
}

Animal & Animal::operator=(const Animal & T){
	age = T.age;
	genre = T.genre;
	sound = T.sound;
	weight = T.weight;
	childNum = T.childNum;
	return * this;
}

Animal::~Animal(){
	delete [] array;
}

void Monkey::getInfo() const{
	Animal::getInfo();
	this->getChildInfo();
	std::cout << "I ve got " << this->bananas << " bananas" << std::endl;
}
