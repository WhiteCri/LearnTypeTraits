// is_polymorphic example
#include <iostream>
#include <type_traits>

struct A { };
struct B { virtual void fn() {} };
struct C : B {};

int main() {
	std::cout << std::boolalpha;
	std::cout << "is_polymorphic:" << std::endl;//polymorphic class means who inherits virtual functions
	std::cout << "int: " << std::is_polymorphic<int>::value << std::endl;
	std::cout << "A: " << std::is_polymorphic<A>::value << std::endl;
	std::cout << "B: " << std::is_polymorphic<B>::value << std::endl;
	std::cout << "C: " << std::is_polymorphic<C>::value << std::endl;
	return 0;
}