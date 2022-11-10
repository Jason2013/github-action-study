#include <iostream>
using namespace std;

#define exp(x) #x
#define my_str(x) exp(x)

int main()
{
    cout << "CMAKE_BUILD_TYPE = " << my_str(CMAKE_BUILD_TYPE) << endl;
    cout << "PLATFORM_ID = " << my_str(PLATFORM_ID) << endl;
    cout << "C_COMPILER_VERSION = " <<  my_str(C_COMPILER_VERSION) << endl;
    cout << "CXX_COMPILER_VERSION = " <<  my_str(CXX_COMPILER_VERSION) << endl;

    return 0;
}
