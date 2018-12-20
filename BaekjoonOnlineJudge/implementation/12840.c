#include<stdio.h>
int main()
{
	long long h, m, s;
	int tc;
	int T;
	long long c;
	int i;
	long long sremain;
	long long mremain;
	long long hremain;
	scanf("%lld %lld %lld", &h, &m, &s);
	scanf("%d", &tc);
	for (i = 0; i < tc; i++)
	{
		scanf("%d", &T);
		if (T == 1)
		{
			scanf("%lld", &c);
			sremain = c % 60;
			mremain = (c / 60) % 60;
			hremain = c / 60 / 60;
			h += hremain;
			m += mremain;
			s += sremain;

			if (s >= 60)
			{
				m += s / 60;
				s = s % 60;
				
			}
			if (m >= 60)
			{
				h += m / 60;
				m = m % 60;
				
			}
			if (h >= 24)
			{
				h = h % 24;
			}

		}
		if (T == 2)
		{
			scanf("%lld", &c);
			sremain = c % 60;
			mremain = (c / 60) % 60;
			hremain = c / 60 / 60;
			h -= hremain;
			m -= mremain;
			s -= sremain;

			if (s <0)
			{
				s = 60 + s;
				m--;
			}
			if (m <0)
			{
				m = 60 + m;
				h--;
			}
			while (h < 0)
			{
				if (h < 0)
				{
					h = 24 + h;
				}
			}

		}
		if (T == 3)
		{
			printf("%lld %lld %lld\n", h, m, s);
		}
	}

	return 0;
}