#include "namespace.hh"

void nested::no_empty::no_op ( ) { }

template <typename T>
T nested::no_empty::add ( T a, T b )
{
	return a + b;
}
