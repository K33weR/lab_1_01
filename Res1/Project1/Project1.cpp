
//Лабораторная работа №1
//«Типы данных и операции»
// Вариант 6


#include <iostream>

int main()
{
	// Целочисленный 
	short sh; // 2 байта -2^15 - 2^15
	unsigned short sh1; // 2 байта 0 - 2^16
	int in; // 4 байта (-2)^31 - 2^31
	unsigned int in1; // 4 байта 0 - 2^32
	long long lg; // 8 байта (-2)^63 - 2^63
	unsigned long long lg1; // 8 байта 0 - 2^64
	// Вещественные 
	float fl; // 4 байта 
	double du; // 8 байта
	

	unsigned short er;
	unsigned short rt;
	std::cin >> sh1>>er>>rt;
	float p = (sh1 + er + rt) / 2;
	double s = sqrt(p * (p - sh1) * (p - er) * (p - rt));
	std::cout << s;
}
   

