// is_scalar example
#include <iostream>
#include <type_traits>
/*
Trait class that identifies whether T is a scalar type. 
A scalar type is a type that has built-in functionality 
for the addition operator without overloads (arithmetic, 
pointer, member pointer, enum and std::nullptr_t).
*/
class A {};

int main() {
	std::cout << std::boolalpha;
	std::cout << "is_scalar:" << std::endl;
	std::cout << "int: " << std::is_scalar<int>::value << std::endl;
	std::cout << "A: " << std::is_scalar<A>::value << std::endl;
	std::cout << "A&: " << std::is_scalar<A&>::value << std::endl;
	std::cout << "A*: " << std::is_scalar<A*>::value << std::endl;
	std::cout << "int(int): " << std::is_scalar<int(int)>::value << std::endl;
	std::cout << "int(*)(int): " << std::is_scalar<int(*)(int)>::value << std::endl;
	return 0;
}