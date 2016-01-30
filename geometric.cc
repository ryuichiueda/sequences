#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;

namespace mp = boost::multiprecision;

int main(int argc, char const* argv[])
{
	mp::cpp_int a = 2;
	mp::cpp_int r = 2;

	while(1){
		cout << a << endl;
		a *= r;
	}

	exit(0);
}
