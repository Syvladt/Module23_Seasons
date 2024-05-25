// Seasons.cpp: Может это не то, но по номеру сезона выводит название сезона.
//

#include "Seasons.h"
#include <iostream>
// С помощью тернарного оператора вычисляем сезон
#define SEASON(num) ((num) == (1) ? ("Winter") : ((num) == (2) ? ("Spring") : ((num) == (3) ? ("Summer") : ((num) == (4) ? ("Autumn") : ("Unknow")))))

int main()
{	// Не самое очевидное преимущество макроса против обычных if/else/endif
	int number;
	std::cout << "Enter number of season: ";
	std::cin >> number;
	std::cout << SEASON(number) << '\n';
}
