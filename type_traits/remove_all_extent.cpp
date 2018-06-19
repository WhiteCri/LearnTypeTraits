// remove_all_extents
#include <iostream>
#include <type_traits>
/*
	Obtains the type of the elements in the deepest dimension of T (if T is an array type).

The transformed type is aliased as member type remove_all_extents::type.

If T is an array type, this is the same type as the elements in its deepest dimension. Otherwise, member type is the same as T.

Notice that, for multidimensional arrays, all dimensions are removed (see remove_extent to remove a single dimension from an array type).

This class merely obtains a type using another type as model, but it does not transform values or objects between those types.
*/

int main() {
	typedef std::remove_all_extents<int>::type A;                // int
	typedef std::remove_all_extents<int[24]>::type B;            // int
	typedef std::remove_all_extents<int[24][60]>::type C;        // int
	typedef std::remove_all_extents<int[][60]>::type D;          // int
	typedef std::remove_all_extents<const int[10]>::type E;      // const int

	std::cout << std::boolalpha;
	std::cout << "typedefs of int:" << std::endl;
	std::cout << "A: " << std::is_same<int, A>::value << std::endl;
	std::cout << "B: " << std::is_same<int, B>::value << std::endl;
	std::cout << "C: " << std::is_same<int, C>::value << std::endl;
	std::cout << "D: " << std::is_same<int, D>::value << std::endl;
	std::cout << "E: " << std::is_same<int, E>::value << std::endl;

	return 0;
}