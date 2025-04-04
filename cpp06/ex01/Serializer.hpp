#include <iostream>
#include <string>
#include "Data.hpp"
#include <stdint.h>

class Serializer
{
private:
	/* data */
	Serializer(/* args */);
	Serializer(Serializer const &obj);
	Serializer const &operator=(Serializer const &obj);
public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
	~Serializer();
};
