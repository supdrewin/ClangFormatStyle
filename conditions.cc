enum class Status { On, Off, _ };

int main ( int, char** )
{
	Status status = Status::On;

	auto fn_on  = [] ( ) {};
	auto fn_off = [] ( ) {};

	switch ( status ) {
		case Status::On: fn_on ( ); break;
		case Status::Off: fn_off ( ); break;
		case Status::_: break;
	}

	if ( Status::On == status ) fn_on ( );
	else if ( Status::Off == status ) fn_off ( );
	else return 1;

	return 0;
}
