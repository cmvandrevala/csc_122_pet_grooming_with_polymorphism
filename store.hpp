#include <string>
#include <list>
#include "pet.hpp"

using namespace std;

class Store
{
private:
  list<Pet *> grooming_list;
  string name;

public:
  explicit Store(string store_name);
  string get_name();

  void add_to_list(Pet *pet);

  void get_grooming_list();

  void wash_pet();
};
