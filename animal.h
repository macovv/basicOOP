/*
 * animal.h
 *
 *  Created on: 26.12.2017
 *      Author: pajacyk28
 */
#include <iostream>

using namespace std;


#ifndef ANIMAL_H_
#define ANIMAL_H_

class Animal{
	private:

	string sound;
		string genre;
		int age;
		int weight;
		int childNum;
		int *array;
	public:
		Animal(string s, string g, int a, int w, int chNum);
		Animal(const Animal &a);
		virtual ~Animal();
		virtual void getInfo() const;
		void getChildInfo() const;
		Animal & operator+(const Animal & T);
		Animal & operator=(const Animal & T);
};

class Monkey : public Animal{
	private:
		int bananas;
	public:
		Monkey(string s="", string g="", int a=0, int w=0, int chNum=0, int ban=0) : Animal(s,g,a,w,chNum), bananas(ban) {}
		Monkey(const Animal &an, int ban=0) : Animal(an), bananas(ban) {}
		Monkey(const Animal &an) : Animal(an) {bananas = 0;}
		~Monkey() {}
		virtual void getInfo() const;
};
#endif /* ANIMAL_H_ */
