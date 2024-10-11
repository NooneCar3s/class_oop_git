#pragma once
#include <string>

using namespace std;

class Car
{
                       // сделать публичным, по стандартну приватное.
	string mark;
	string model;
	int yearCreate;

public:
	void showCar();

	string getModel();
	string getMark();
	int getYear();

	void setModel(string m);
	void setMark(string m);
	void setYear(int y);

};

