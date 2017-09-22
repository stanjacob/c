
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// static can be used to 
// keep one instance of a variable
// inside a function
// (keeps state between function invocations)
int sum_profit(int current_profit) {
	static int stock_profit = 0;
	stock_profit += current_profit;
	return stock_profit;
}

int main() {
	int N = 10;
	int stock_initial_prices[N];
	int stock_later_prices[N];
	int profit[N];

	srand(1);

	for (int i = 0; i < N; ++i) {
		stock_initial_prices[i] = rand();
		stock_later_prices[i] = rand();
		profit[i] = stock_later_prices[i] - stock_initial_prices[i];
		sum_profit(profit[i]);
		printf("%d\n", profit[i]);
	}

	printf("Profit from random trading: %d\n", sum_profit(0));

	return 0;
}