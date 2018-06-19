#include <type_traits>
template <class T>
struct Test { static constexpr bool value = true; };

template <>
struct Test<int> {};

template <class T, typename = typename Test<T>::value>
struct A {};

int main() {
	A<double> a;
}