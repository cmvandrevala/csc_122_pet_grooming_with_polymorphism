#include <iostream>
#include <string>
#include "dog.hpp"

using namespace std;

Dog::Dog(string name)
{
  this->name = name;
}

string Dog::get_name()
{
  return name;
};

void Dog::speak()
{
  cout << name << " says woof woof! That means thank you!" << endl;
};
