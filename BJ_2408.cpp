#include <iostream>

using namespace std;

int nowh, nowm, nows;
int h, m, s;
int main()
{
	scanf("%d:%d:%d", &nowh, &nowm, &nows);
	scanf("%d:%d:%d", &h, &m, &s);

	if (3600 * nowh + 60 * nowm + nows > 3600 * h + 60 * m + s)
	{
		s = s - nows;
		if (s < 0)
		{
			s += 60;
			m--;
		}

		m = m - nowm;
		if (m < 0)
		{
			m += 60;
			h--;
		}

		h = h - nowh;

		printf("%d:", 24 + h);
		if (m < 10)
		{
			printf("0");
		}
		printf("%d:", m);
		if (s < 10)
			printf("0");
		printf("%d", s);

	

	}
	else
	{
	s = s - nows;
	if (s < 0)
	{
		s += 60;
		m--;
	}
	
	m = m - nowm;
	if (m < 0)
	{
		m += 60;
		h--;
	}

	h = h - nowh;

	if (h < 10)
	{
		printf("0");
	}
	printf("%d:", h);
	if (m < 10)
	{
		printf("0");
	}
	printf("%d:", m);
	if (s < 10)
	{
		printf("0");
	}
	printf("%d", s);
	}

}