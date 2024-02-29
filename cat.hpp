#include <string>
#include "pet.hpp"

using namespace std;

class Cat : public Pet
{
private:
  string name{};

public:
  explicit Cat(string name);
  string get_name() override;
  void speak() override;
};
