#include <stdio.h>
#include <conio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapsack(int capacity, int no_items, int weight[], int value[])
{
    if (no_items == 0 || capacity == 0)
	return 0;

    if (weight[no_items - 1] > capacity)
	return knapsack(capacity, no_items - 1, weight, value);

    else
	return max(value[no_items - 1] + knapsack(capacity - weight[no_items - 1], no_items - 1, weight, value),
		   knapsack(capacity, no_items - 1, weight, value));
}

void main()
{
   int weight[20], value[20];
    int i, no_items, capacity, profit;

    clrscr();
    printf("Enter the capacity of the knapsack:\n");
    scanf("%d", &capacity);

    printf("Enter the number of items:\n");
    scanf("%d", &no_items);

    printf("Enter weight and value of each product:\n");
    for(i = 0; i < no_items; i++)
    {
	printf("Weight[%d]:\t", i);
	scanf("%d", &weight[i]);
	printf("Value[%d]:\t", i);
	scanf("%d", &value[i]);
    }

    profit = knapsack(capacity, no_items, weight, value);

    printf("Profit:\t%d\n", profit);
    getch();
}
