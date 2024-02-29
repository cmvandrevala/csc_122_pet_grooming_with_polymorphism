#include <iostream>
#include <string>
#include <list>
#include "store.hpp"

using namespace std;

Store::Store(string store_name)
{
  this->name = store_name;
}

void Store::add_dog_to_list(Dog dog)
{
  dog_grooming_list.push_back(dog);
}

void Store::add_cat_to_list(Cat cat)
{
  cat_grooming_list.push_back(cat);
}

string Store::get_name()
{
  return name;
}

void Store::wash_cat()
{
  Cat cat = cat_grooming_list.front();
  cout << "Washing the cat named " << cat.get_name() << endl;
  cout << "How are you doing, bud?" << endl;
  cat.speak();
  cout << "Great! You are all done" << endl;
  cout << endl;
  cat_grooming_list.pop_front();
}

void Store::wash_dog()
{
  Dog dog = dog_grooming_list.front();
  cout << "Washing the dog named " << dog.get_name() << endl;
  cout << "How are you doing, bud?" << endl;
  dog.speak();
  cout << "Great! You are all done" << endl;
  cout << endl;
  dog_grooming_list.pop_front();
}

void Store::get_cat_grooming_list()
{
  list<Cat>::iterator i;
  cout << "Here is the list of smelly cats who need a bath!" << endl;
  for (i = cat_grooming_list.begin(); i != cat_grooming_list.end(); ++i)
  {
    cout << i->get_name() << endl;
  }
  cout << endl;
}

void Store::get_dog_grooming_list()
{
  list<Dog>::iterator i;
  cout << "Here is the list of smelly pups who need a bath!" << endl;
  for (i = dog_grooming_list.begin(); i != dog_grooming_list.end(); ++i)
  {
    cout << i->get_name() << endl;
  }
  cout << endl;
}
