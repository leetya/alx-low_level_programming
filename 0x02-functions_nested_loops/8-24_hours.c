#include "main.h"

/**
 * jack_bauer -  function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
*/

void jack_bauer(void)
{
	int h, h1, m, m1;

	h = 0, h1 = 0, m = 0, m1 = 0;
	while (1)
	{
		m = 0;
		m1 = 0;
		while (m < 6)
		{
			if (m1 > 9)
			{
				m1 = 0;
				if (m == 5)
					break;
				m++;
			}
			_putchar(h + 48);
			_putchar(h1 + 48);
			_putchar(':');
			_putchar(m + 48);
			_putchar(m1 + 48);
			_putchar('\n');
			m1++;
		}
		if (h1 == 3 && h == 2)
			break;
		h1++;
		if (h1 > 9)
		{
			h1 = 0;
			h++;
		}
	}
}
