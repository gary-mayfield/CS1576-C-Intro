# include <stdio.h>

struct twovars
{
	int a;
	int b;
};

struct twovars swap(struct twovars swaps);

int main()
{
	struct twovars swapsies = { 10, 20 };
	swapsies = swap(swapsies);
	printf("a = %d and b = %d", swapsies.a, swapsies.b);
	getchar();
}
struct twovars swap(struct twovars swaps)
{
	int tmp;
	tmp = swaps.a;
	swaps.a = swaps.b;
	swaps.b = tmp;
	return swaps;
}