#include<iostream>

using namespace std;
#if 0
template <class S, class T> class Pair
{
private:
	S x;
	T y;
	/* ... */
};

template <class S> class Element
{
private:
	S x;
	/* ... */
public:
	Element(): x(0) {}
};

int templateExample1(void)
{
	Pair <Element<int>, Element<char> > p;
	return 0;
}
#endif