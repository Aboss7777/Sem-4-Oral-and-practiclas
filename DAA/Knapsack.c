#include <stdio.h>
#include <conio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapsack(int capacity, int items, int weight[], int value[])
{
    if (items == 0 || capacity == 0)
	return 0;

    if (weight[items - 1] > capacity)
	return knapsack(capacity, items - 1, weight, value);

    else
	return max(value[items - 1] + knapsack(capacity - weight[items - 1], items - 1, weight, value),
		   knapsack(capacity, items - 1, weight, value));
}

void main()
{
   int weight[20], value[20];
    int i, items, capacity, profit;

    clrscr();
    printf("Enter the capacity of the knapsack:\n");
    scanf("%d", &capacity);

    printf("Enter the number of items:\n");
    scanf("%d", &items);

    printf("Enter weight and value of each product:\n");
    for(i = 0; i < items; i++)
    {
	printf("Weight[%d]:\t", i);
	scanf("%d", &weight[i]);
	printf("Value[%d]:\t", i);
	scanf("%d", &value[i]);
    }

    profit = knapsack(capacity, items, weight, value);

    printf("Profit:\t%d\n", profit);
    getch();
}
