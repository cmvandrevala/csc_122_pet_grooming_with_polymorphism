#include <cassert>
#include <iostream>
#include "cat.hpp"

using namespace std;

int main()
{
  Cat darth = Cat("Darth");

  cout << "Starting tests..." << endl;
  assert(darth.get_name() == "Darth");
  cout << "Your tests succeeded!" << endl;
}
