struct A {};
struct B : public A {};
int main() {
	A a;
	B b;
	a = b;
}