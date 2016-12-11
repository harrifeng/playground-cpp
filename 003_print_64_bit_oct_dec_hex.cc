#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    unsigned long n = 0x1234567812345678;
    std::cout << std::dec << n << '\n';
    std::cout << std::hex << n << '\n';
    std::cout << std::oct << n << '\n';
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// 1311768465173141112                            //
// 1234567812345678                               //
// 110642547402215053170                          //
////////////////////////////////////////////////////
