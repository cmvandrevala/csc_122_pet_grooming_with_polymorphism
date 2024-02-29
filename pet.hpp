
#ifndef PET_H
#define PET_H
#include <string>
using namespace std;
class Pet
{
public:
  virtual string get_name() = 0;
  virtual void speak() = 0;
};
#endif
