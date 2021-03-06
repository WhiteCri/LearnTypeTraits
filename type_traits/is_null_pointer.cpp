// is_null_pointer example
#include <iostream>
#include <type_traits>
#include <typeinfo>

int main() {
	int* a = 0;
	std::cout << std::boolalpha;
	std::cout << "is_null_pointer:\n";
	std::cout << "decltype(a): " << std::is_null_pointer<decltype(a)>::value << '\n';
	std::cout << "decltype(nullptr): " << std::is_null_pointer<decltype(nullptr)>::value << '\n';
	return 0;
}