/**
 *_atoi - function to transform from array to integer
 *@s: input string
 *
 *Return: 0 if not number, or first number found in the string.
 */
int _atoi(char *s)
{
        int tamano = 0, i, number_found = 0, number = 0, sign = 1;

        for (tamano = 0; s[tamano] < 48 || s[tamano] > 57; tamano++)
        {
                if (s[tamano] == '-')
                {
                        sign = sign * -1;
                }
        }
        for (i = tamano; s[i] != 0; i++)
        {
                if (s[i] >= 48 && s[i] <= 48 + 9)
                        {
                                number = number * 10 + s[i] - '0';
                        }
                else if (number != 0)
                        {
                                break;
                        }

        }
        return (number * sign);
}
