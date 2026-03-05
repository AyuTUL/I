// Lab 4.25: Write a program to read line of text and count number of vowels, consonant, digits, white spaces and other characters
#include <stdio.h>
void main()
{
	char line[100];
	int i, v = 0, c = 0, d = 0, w = 0, ot = 0;
	printf("Enter line of text : ");
	scanf("%[^\n]", line);
	for (i = 0; line[i] != '\0'; i++)
	{
		if (line[i] >= 'A' && line[i] <= 'Z')
			line[i] += 32;
		if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u')
			v++;
		else if (line[i] >= 'a' && line[i] <= 'z')
			c++;
		else if (line[i] >= '0' && line[i] <= '9')
			d++;
		else if (line[i] == ' ')
			w++;
		else
			ot++;
	}
	printf("Vowels = %d\nConsonants = %d\nDigits = %d\nWhite Spaces =%d\nOther Characters =%d", v, c, d, w, ot);
}