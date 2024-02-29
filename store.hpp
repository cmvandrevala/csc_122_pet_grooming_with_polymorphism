#include <string>
#include <list>
#include "dog.hpp"
#include "cat.hpp"

using namespace std;

class Store
{
private:
  list<Dog> dog_grooming_list;
  list<Cat> cat_grooming_list;
  string name;

public:
  explicit Store(string store_name);
  string get_name();

  void add_cat_to_list(Cat cat);
  void add_dog_to_list(Dog dog);

  void get_cat_grooming_list();
  void get_dog_grooming_list();

  void wash_cat();
  void wash_dog();
};
