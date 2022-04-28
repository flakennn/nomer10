#include <iostream>
#include <string>
#include "nomer10.h"
using namespace std;
Human::Human()
{
	name = "Ivan";
	surname = "Ivanov";
	midname = "Ivanovich";
	age = 18;
}
Human::Human(string name, string surname, string midname, int age)
{
	this->name = name;
	this->surname = surname;
	this->midname = midname;
	this->age = age;
}
void Human::print(){}
Human::~Human() {}
Student::Student():Human()
{
	on_lesson = 0;
}
Student::Student(string name, string surname, string midname, int age,bool on_lesson) : Human(name,surname,midname,age)
{
	this->on_lesson = on_lesson;
}
void Student::print() 
{
	cout << " Student " << endl;
	cout << "name: " << name << endl;
	cout << "midname: " << midname << endl;
	cout << "surname: " << surname << endl;
	cout << "age: " << age << endl;
	cout << "On lesson: " << on_lesson << endl;
}
Student:: ~Student(){}
Boss::Boss() :Human()
{
	number_of_workers = 0;
}
Boss::Boss(string name, string surname, string midname, int age, int number_of_workers) : Human(name, surname, midname, age)
{
	this->number_of_workers = number_of_workers;
}
void Boss::print()
{
	cout << " Boss "<< endl;
	cout << "name: " << name << endl;
	cout << "midname: " << midname << endl;
	cout << "surname: " << surname << endl;
	cout << "age: " << age << endl;
	cout << "Number of workers: " << number_of_workers << endl;
}
Boss:: ~Boss() {}