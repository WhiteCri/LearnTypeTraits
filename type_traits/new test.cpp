struct A {};
int main() {
	A a;
	new (&a) b;
}