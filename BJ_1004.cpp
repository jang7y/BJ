#include <iostream>
#include <cmath>

using namespace std;

int T;
double x1, yy1, x2, y2;
int circle;
int sol = 0;
double rx, ry, rr;


int Check(double, double, double);
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		scanf("%lf %lf %lf %lf", &x1, &yy1, &x2, &y2);

		scanf("%d", &circle);
		for (int i = 0; i < circle; i++)
		{
			scanf("%lf %lf %lf", &rx, &ry, &rr);
			sol += Check(rx, ry, rr);
	//		printf("µð¹ö±ë : %d %lf %lf %lf\n", sol, rx, ry, rr);

		}
		printf("%d\n", sol);
		sol = 0;
	}

}

int Check(double rx, double ry, double rr)
{
	double dx, dy;
	double dx2, dy2;

	dx = abs((double)(rx - x1));
	dy = abs((double)(ry - yy1));
	dx2 = abs((double)(rx - x2));
	dy2 = abs((double)(ry - y2));

	
	if (dx*dx + dy*dy < rr*rr && dx2*dx2 + dy2* dy2 < rr*rr)
	{
		return 0;
	}
	else if ((dx*dx + dy*dy - rr*rr)* (dx2*dx2 + dy2*dy2 - rr*rr) < 0)
	{
		return 1;
	}
	else if (dx*dx + dy*dy > rr*rr && dx2*dx2 + dy2*dy2 > rr*rr)
	{
		return 0;
	}
}