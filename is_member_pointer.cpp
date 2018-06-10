// is_member_pointer example
#include <iostream>
#include <type_traits>

struct A { int x; };
//if the pointer is a member pointer function|attribute of the object
int main() {
	int A::* pt = &A::x;
	std::cout << std::boolalpha;
	std::cout << "is_member_pointer:" << std::endl;
	std::cout << "A*: " << std::is_member_pointer<A*>::value << std::endl;
	std::cout << "int A::*: " << std::is_member_pointer<int A::*>::value << std::endl;
	std::cout << "void(A::*)(): " << std::is_member_pointer<void(A::*)()>::value << std::endl;
	std::cout << "decltype(pt): " << std::is_member_pointer<decltype(pt)>::value << std::endl;
	return 0;
}