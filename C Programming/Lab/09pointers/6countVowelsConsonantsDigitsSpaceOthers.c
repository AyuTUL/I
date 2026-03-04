// Lab 9.6: Write a program to read line of text and count the number of vowels, consonants, digits, space and other characters using function. (pass address of variable storing result)
#include <stdio.h>
void count(char[], int *, int *, int *, int *, int *);
void main()
{
	char line[100];
	int v, c, d, s, oth;
	printf("Enter line of text : ");
	scanf("%[^\n]", line);
	count(line, &v, &c, &d, &s, &oth);
	printf("Vowels = %d\nConsonants = %d\nDigits = %d\nSpace = %d\nOther Characters = %d", v, c, d, s, oth);
}
void count(char line[], int *v, int *c, int *d, int *s, int *oth)
{
	int i = 0;
	*v = *c = *d = *s = *oth = 0;
	while (line[i] != '\0')
	{
		if (line[i] >= 'A' && line[i] <= 'Z')
			line[i] += 32;
		if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u')
			(*v)++;
		else if (line[i] > 'a' && line[i] <= 'z')
			(*c)++;
		else if (line[i] >= '0' && line[i] <= '9')
			(*d)++;
		else if (line[i] == ' ')
			(*s)++;
		else
			(*oth)++;
		i++;
	}
}