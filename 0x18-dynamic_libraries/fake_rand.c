static unsigned long int next = 0;
int rand()
{
	int array[] = {8, 8, 7, 9, 23, 74};
	int value;
	value = array[next];
	next++;
    return (value); //the most random number in the universe
}