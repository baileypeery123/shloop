/*
 * homes.cc
 *
 *  Created on: Nov 12, 2017
 *      Author: victor baba
 */

#include <iostream>

class Home{
public:
	virtual void input(std::istream &ins) = 0;
	virtual void output(std::ostream &ins) = 0;

};

class Horse:public Home {
public:
	void input(std::istream &ins);
	void output(std::ostream &outs);

private:
	double length = 0.0;
	double width = 0.0;
	std::string paint_color;
};

class Fish:public Home {
public:
	void input(std::istream &ins);
	void output(std::ostream &outs);

private:
	std::string tank_shape;
	double water_capacity = 0.0;
	int tank_toys = 0;
	std::string use_substrate;
};

class Dog:public Home {
public:
	void input(std::istream &ins);
	void output(std::ostream &outs);

private:
	std::string house_shape;
	int rooms = 0;
	std::string floor_material;
	double budget = 0.0;
};

class Hamster:public Home {
public:
	void input(std::istream &ins);
	void output(std::ostream &outs);

private:
	std::string glass_container;
	double volume = 0.0;
	std::string hamster_wheel;
	std::string material_used;
};

class Dragon:public Home {
public:
	void input(std::istream &ins);
	void output(std::ostream &outs);

private:
	std::string fireproof;
	std::string grocery;
	std::string ac;
	std::string location;
};
