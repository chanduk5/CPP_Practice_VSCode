

class Test1 {
	int y;
};

class Test2 {
	int x;
	Test1 t1;
public:
	operator Test1() { return t1; }
	operator int() { return x; }
};

void fun1(int x) { };
void fun(Test1 t) { };

int overloadingexample1(void) {
	Test2 t;
	fun(t);
	return 0;
}
