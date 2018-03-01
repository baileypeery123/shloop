/*
 * homes.cc
 *
 *  Created on: Nov 12, 2017
 *      Author: victor baba
 */

#include <iostream>
#include <cctype>
#include <list>
#include "homes.h"

void Horse::input(std::istream &ins) {
	bool from_cin = (&ins == &std::cin);

	if (from_cin)
		std::cout << "Length of the stable in feet: ";
	ins >> length;

	if (from_cin)
		std::cout << "Width of the stable in feet: ";
	ins >> width;


	if (from_cin) {
		std::cin.ignore();
		std::cout << "Paint color used for the stable: ";
	}
	getline(ins, paint_color);
}

void Horse::output(std::ostream &outs) {
	outs << "HORSE HOUSE" << std::endl;

	outs << length << std::endl;
	outs << width << std::endl;
	outs << paint_color << std::endl;
}

void Fish::input(std::istream &ins) {
	bool from_cin = (&ins == &std::cin);


	if (from_cin) {
		std::cin.ignore();
		std::cout << "Desired shape of the tank: ";
	}
	getline(ins, tank_shape);

	if (from_cin)
		std::cout << "Amount of water the tank needs to contain (in gallons): ";
	ins >> water_capacity;

	if (from_cin)
		std::cout << "Number of toys wanted in the tank: ";
	ins >> tank_toys;

	if (from_cin)
		std::cout << "Do you want materials from the fish's substrate in the tank (yes or no): ";
	ins >> use_substrate;
}

void Fish::output(std::ostream &outs) {
	outs << "FISH HOUSE" << std::endl;

	outs << tank_shape << std::endl;
	outs << water_capacity << std::endl;
	outs << tank_toys << std::endl;
	outs << use_substrate << std::endl;
}

void Dog::input(std::istream &ins) {
	bool from_cin = (&ins == &std::cin);

	if (from_cin) {
		std::cin.ignore();
		std::cout << "Desired shape of the dog house: ";
	}
	getline(ins, house_shape);

	if (from_cin)
		std::cout << "Number of rooms: ";
	ins >> rooms;

	if (from_cin)
		std::cout << "Materials used on the floor of the dog house: ";
	getline(ins, floor_material);

	if (from_cin)
		std::cout << "Total budget to spend on the dog house: ";
	ins >> budget;
}

void Dog::output(std::ostream &outs) {
	outs << "DOG HOUSE" << std::endl;

	outs << house_shape << std::endl;
	outs << rooms << std::endl;
	outs << floor_material << std::endl;
	outs << budget << std::endl;
}

void Hamster::input(std::istream &ins) {
	bool from_cin = (&ins == &std::cin);

	if (from_cin)
		std::cout << "Is the home inside a glass container (yes or no): ";
	ins >> glass_container;

	if (from_cin)
		std::cout << "What is the desired volume of the house (in quarts): ";
	ins >> volume;

	if (from_cin)
		std::cout << "Do you want a hamster wheel inside the home (yes or no): ";
	ins >> hamster_wheel;

	if (from_cin) {
		std::cin.ignore();
		std::cout << "Materials used on the floor of the house: ";
	}
	getline(ins, material_used);
}

void Hamster::output(std::ostream &outs) {
	outs << "HAMSTER HOUSE" << std::endl;

	outs << glass_container << std::endl;
	outs << volume << std::endl;
	outs << hamster_wheel << std::endl;
	outs << material_used << std::endl;
}

void Dragon::input(std::istream &ins) {
	bool from_cin = (&ins == &std::cin);

	if (from_cin) {
		std::cin.ignore();
		std::cout << "Do you want a home that is fireproof (yes or no): ";
	}
	getline(ins, fireproof);

	if (from_cin)
		std::cout << "Would you like a home near a grocery store (yes or no): ";
	getline(ins, grocery);

	if (from_cin)
		std::cout << "Do you want a home with air-conditioning installed (yes or no): ";
	getline(ins, ac);

	if (from_cin)
		std::cout << "Where is you overall desired location for your home: ";
	getline(ins, location);
}

void Dragon::output(std::ostream &outs){
	outs << "DRAGON HOUSE" << std::endl;

	outs << fireproof << std::endl;
	outs << grocery << std::endl;
	outs << ac << std::endl;
	outs << location << std::endl;
}
