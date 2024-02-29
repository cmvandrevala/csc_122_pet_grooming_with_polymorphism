#include <cassert>
#include <iostream>
#include "store.hpp"

using namespace std;

int main()
{
  Store store = Store("Store Name");

  cout << "Starting tests..." << endl;
  assert(store.get_name() == "Store Name");
  cout << "Your tests succeeded!" << endl;
}
