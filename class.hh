#include <cstddef>
#include <string>

using namespace std;

class People {
	public:

		People ( string name, size_t age )
		    : name ( name )
		    , age ( age )
		{
		}

		People ( People &&other )
		    : name ( other.name )
		    , age ( other.age )
		{
		}

	private:

		string name;
		size_t age;
};
