#include <string>
using namespace std;

class Cat
{
private:
  string name{};

public:
  string get_name();
  explicit Cat(string name);
  void speak();
};
