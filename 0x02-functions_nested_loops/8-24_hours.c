#include "holberton.h"
#include <stdio.h>
/**
 * jack_bauer - prints_1440_seconds of clock
 * Return: last digit.
 *
 */
void jack_bauer(void)
{
	int decenas_horas = 0, unidades_horas = 0;
	int decenas_minutos = 0, unidades_minutos = 0;
	int i;

	for (i = 0; i < 1440; i++)
	{
		_putchar(decenas_horas + '0');
		_putchar(unidades_horas + '0');
		_putchar(':');
		_putchar(decenas_minutos + '0');
		_putchar(unidades_minutos + '0');
		_putchar('\n');
		unidades_minutos++;
		if (unidades_minutos == 10)
		{
			unidades_minutos = 0;
			decenas_minutos++;
		}
		if (decenas_minutos == 6)
		{
			decenas_minutos = 0;
			unidades_horas++;
		}
		if (unidades_horas == 10)
		{
			unidades_horas = 0;
			decenas_horas++;
		}
	}
}
