#include <iostream>
#include <string>
#include "cat.hpp"

using namespace std;

Cat::Cat(string name)
{
  this->name = name;
}

string Cat::get_name()
{
  return name;
};

void Cat::speak()
{
  cout << name << " says meow meow! I am evil incarnate!" << endl;
};
