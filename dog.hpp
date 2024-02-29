#include <string>
using namespace std;

class Dog
{
private:
  string name{};

public:
  string get_name();
  explicit Dog(string name);
  void speak();
};
