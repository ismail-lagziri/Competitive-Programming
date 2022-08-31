#include<iostream>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a, b, c, x, y, cnt = 0;
		scanf("%d%d%d%d%d", &a, &b, &c, &x, &y);
		if (a < x)
		{
			cnt += x - a;
		}
		if (b < y)
		{
			cnt += y - b;
		}
		if (c >= cnt)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}
