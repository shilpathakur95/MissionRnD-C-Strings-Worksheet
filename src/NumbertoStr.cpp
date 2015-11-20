/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

int power(int a, int b);
void number_to_str(float number, char *str, int afterdecimal){
	int iterator = 0, iterator2 = 0, array[100], arr[10], num, decimal = 0, count = 0;
	float dec = 0;
	num = number;
	if (num < 0)
	{
		num = num*-1;
		dec = (-1 * number) - num;
	}
	else
		dec = number - num;
	if (number < 0)
		str[0] = '-';
	while (num > 0)
	{
		array[iterator] = num % 10;
		num = num / 10;
		count++;
		iterator++;
	}
	iterator2 = iterator - 1;
	if (number > 0)
	{
		for (iterator = 0; iterator <count; iterator++)
		{
			str[iterator] = array[iterator2] + '0';
			iterator2--;
		}
	}
	else
	{
		for (iterator = 1; iterator <= count; iterator++)
		{
			str[iterator] = array[iterator2] + '0';
			iterator2--;
		}
	}
	iterator2 = 0;
	if (dec != 0)
	{
		dec = dec*power(10, afterdecimal);
		decimal = dec;
		while (decimal > 0)
		{
			arr[iterator2] = decimal % 10;
			decimal = decimal / 10;
			iterator2++;
		}
		iterator2--;
		str[iterator] = '.';
		iterator++;
		while (afterdecimal > 0)
		{
			str[iterator] = arr[iterator2] + '0';
			iterator2--;
			iterator++;
			afterdecimal--;
		}
	}
}
int power(int a, int b)
{
	int it, pow = 1;
	for (it = 1; it <= b; it++)
	{
		pow = pow*a;
	}
	return pow;
}
