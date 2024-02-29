groom: clean
	g++ -std=c++11 main.cpp dog.cpp cat.cpp store.cpp -o pet_grooming && ./pet_grooming

test_cat: clean
	g++ -std=c++11 test_cat.cpp cat.cpp store.cpp -o test_cat && ./test_cat

test_dog: clean
	g++ -std=c++11 test_dog.cpp dog.cpp store.cpp -o test_dog && ./test_dog

test_store: clean
	g++ -std=c++11 test_store.cpp dog.cpp store.cpp -o test_store && ./test_store

clean:
	@rm -f pet_grooming
	@rm -f test_cat
	@rm -f test_dog
	@rm -f test_store
