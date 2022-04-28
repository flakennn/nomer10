#ifndef NOMER10_H
#define NOMER10_H
#include <iostream>
#include <string>
using namespace std;
class Human
{
public:
	string name, surname, midname;
	int age;
	Human();
	Human(string name, string surname, string midname, int age);
	virtual void print();
	~Human();
};
class Student : public Human
{
public:
	Student();
	~Student();
	Student(string name, string surname, string midname, int age, bool on_leson);
	bool on_lesson;
	void print();
};
class Boss : public Human
{
public:
	Boss();
	~Boss();
	Boss(string name, string surname, string midname, int age, int number_of_workers);
	int number_of_workers;
	void print();
};
#endif
