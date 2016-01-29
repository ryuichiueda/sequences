#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;

namespace mp = boost::multiprecision;

int main(int argc, char const* argv[])
{
	mp::cpp_int x = 1;
	mp::cpp_int prev = 0;

	while(1){
		cout << prev << endl;
		mp::cpp_int y = x + prev;
		prev = x;
		x = y;
	}

	exit(0);
}
