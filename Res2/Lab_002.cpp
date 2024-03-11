#include <iostream>

int main()
{
    unsigned char x = 7, invMask = 255; // 00000111
    unsigned short i, bitChange, invertBits;
    std::cout << "Enter the index of a bit of a num 0-7 (right to left): ";
    std::cin >> i;
    unsigned char mask = ~(1 << i);
    bitChange = x & mask; // Change i bit to 0
    invertBits = x ^ invMask;
    std::cout << "Before bit change: " << int(x) << ", and after: " << bitChange << std::endl;
    std::cout << "\n_/Additional exercises\\_\n";
    std::cout << "1) Before inversion: " << int(x) << ", and after: " << invertBits << std::endl;

    return 0;
}