#include "main.h"
#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * 00:00 to 23:59
 *
 */

	void jack_bauer(void)
	{
		int i = 0;


		while (i < 24)
		{
			int j = 0;

			while (j < 60)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				_putchar('\n');
				j++;
			}
			i++;
		}
	}

