// decay example
#include <iostream>
#include <type_traits>
/*
	Decay type
Obtains the decay type of T.

If T is a reference type, the type referrered to by T.
Otherwise, T.

The transformed type is aliased as member type decay::type.

The decay type of T is the same type that results from the standard conversions that happen when an lvalue expression is used as an rvalue, with its cv-qualifier stripped:

If T is a function type, a function-to-pointer conversion is applied and the decay type is the same as: add_pointer<T>::type
If T is an array type, an array-to-pointer conversion is applied and the decay type is the same as: add_pointer<remove_extent<remove_reference<T>::type>::type>::type
Otherwise, a regular lvalue-to-rvalue conversion is applied and the decay type is the same as: remove_cv<remove_reference<T>::type>::type.
*/

typedef std::decay<int>::type A;           // int
typedef std::decay<int&>::type B;          // int
typedef std::decay<int&&>::type C;         // int
typedef std::decay<const int&>::type D;    // int
typedef std::decay<int[2]>::type E;        // int*
typedef std::decay<int(int)>::type F;      // int(*)(int)

typedef int X[3];

int main() {
	std::cout << std::boolalpha;
	std::cout << "typedefs of int:" << std::endl;
	std::cout << "A: " << std::is_same<int, A>::value << std::endl;
	std::cout << "B: " << std::is_same<int, B>::value << std::endl;
	std::cout << "C: " << std::is_same<int, C>::value << std::endl;
	std::cout << "D: " << std::is_same<int, D>::value << std::endl;
	std::cout << "E: " << std::is_same<int, E>::value << std::endl;
	std::cout << "F: " << std::is_same<int, F>::value << std::endl;

	return 0;
}