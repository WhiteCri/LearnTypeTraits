// is_copy_constructible example
#include <iostream>
#include <type_traits>

struct A { };
struct B { B(B&&) {} };
struct C { C(const C&) {} };

int main() {
	std::cout << std::boolalpha;
	std::cout << "is_copy_constructible:" << std::endl;
	std::cout << "int: " << std::is_copy_constructible<int>::value << std::endl;
	std::cout << "A: " << std::is_copy_constructible<A>::value << std::endl;
	std::cout << "B: " << std::is_copy_constructible<B>::value << std::endl;
	std::cout << "C: " << std::is_copy_constructible<C>::value << std::endl;
	scanf_s("%*d");
	return 0;
}