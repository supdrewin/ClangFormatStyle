int main ( int, char** )
{
	auto aaaaaaaaaaaaaaaaaaaa           = 0b00000010,
	     bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb = aaaaaaaaaaaaaaaaaaaa;

	aaaaaaaaaaaaaaaaaaaa           <<= 1;
	bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb = 1;

	aaaaaaaaaaaaaaaaaaaa += bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
	                      + bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
	                      + bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb;

	return 0;
}
