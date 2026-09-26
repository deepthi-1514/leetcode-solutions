#include <stdio.h>

int maxProfit(int prices[], int n) {

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {

        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } 
        else {
            int profit = prices[i] - minPrice;

            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
}

int main() {

    // Test Case 1: Typical case
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int n1 = 6;

    printf("Test Case 1: %d\n", maxProfit(prices1, n1));

    // Test Case 2: Edge case - prices keep decreasing
    int prices2[] = {7, 6, 4, 3, 1};
    int n2 = 5;

    printf("Test Case 2: %d\n", maxProfit(prices2, n2));

    return 0;
}