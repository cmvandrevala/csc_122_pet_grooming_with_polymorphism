#include <string>
#include "pet.hpp"

using namespace std;

class Dog : public Pet
{
private:
  string name{};

public:
  explicit Dog(string name);
  string get_name() override;
  void speak() override;
};
