#include <iostream>
#include <iomanip>

using namespace std;

short Parity(unsigned long x) {
    short result = 0;
    while (x) {
        result ^= (x & 1);
        x >>= 1;
    }
    return result;
}

int main(int argc, char *argv[])
{
    unsigned long n = 0x1234567887654321;
    std::cout << "Parity(total) => " << Parity(n) << std::endl;

    for (int i = 0; i < 4; i++) {
        std::cout << std::hex << (n & 0xFFFF) << '\n';
        std::cout << "Parity(n) => " << Parity(n & 0xFFFF) << std::endl;
        n = (n >> 16);
    }
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// Parity(total) => 0                             //
// 4321                                           //
// Parity(n) => 1                                 //
// 8765                                           //
// Parity(n) => 0                                 //
// 5678                                           //
// Parity(n) => 0                                 //
// 1234                                           //
// Parity(n) => 1                                 //
////////////////////////////////////////////////////
