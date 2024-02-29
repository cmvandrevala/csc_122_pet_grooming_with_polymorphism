#include <iostream>
#include "store.hpp"
#include "cat.hpp"
#include "dog.hpp"

using namespace std;

int main()
{
  Cat coco = Cat("Coco");
  Pet *coco_ptr = &coco;

  Cat yumyum = Cat("Yum-Yum");
  Pet *yumyum_ptr = &yumyum;

  Cat dragon_cat = Cat("Dragon Cat");
  Pet *dragon_cat_ptr = &dragon_cat;

  Dog jack = Dog("Jack");
  Pet *jack_ptr = &jack;

  Dog simon = Dog("Simon");
  Pet *simon_ptr = &simon;

  Dog lucy = Dog("Lucy");
  Pet *lucy_ptr = &lucy;

  Store csc_122_pet_salon = Store("CSC 122 Pet Salon");

  csc_122_pet_salon.add_to_list(coco_ptr);
  csc_122_pet_salon.add_to_list(yumyum_ptr);
  csc_122_pet_salon.add_to_list(dragon_cat_ptr);

  csc_122_pet_salon.add_to_list(jack_ptr);
  csc_122_pet_salon.add_to_list(simon_ptr);
  csc_122_pet_salon.add_to_list(lucy_ptr);

  cout << "Before Washing" << endl;
  csc_122_pet_salon.get_grooming_list();

  csc_122_pet_salon.wash_pet();

  cout << "After Washing" << endl;
  csc_122_pet_salon.get_grooming_list();
}
