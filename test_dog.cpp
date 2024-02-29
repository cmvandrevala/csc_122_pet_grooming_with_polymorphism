#include <cassert>
#include <iostream>
#include "dog.hpp"

using namespace std;

int main()
{
  Dog jack = Dog("Jack");

  cout << "Starting tests..." << endl;
  assert(jack.get_name() == "Jack");
  cout << "Your tests succeeded!" << endl;
}
