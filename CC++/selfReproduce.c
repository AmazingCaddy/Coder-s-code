char s[]={
    '\t',
    '0',
    '\n',
    '}',
    ';',
    '\n',
    '\n',
	'/',
	'/',
	'T',
	'h',
	'i',
	's',
	' ',
	'i',
	's',
	' ',
	'a',
	' ',
	'c',
	'o',
	'm',
	'm',
	'e',
	'n',
	't',
	'\n',
    '#',
    'i',
    'n',
    'c',
    'l',
    'u',
    'd',
    'e',
    ' ',
    '<',
    's',
    't',
    'd',
    'i',
    'o',
    '.',
    'h',
    '>',
    '\n',
    '#',
    'i',
    'n',
    'c',
    'l',
    'u',
    'd',
    'e',
    ' ',
    '<',
    's',
    't',
    'd',
    'l',
    'i',
    'b',
    '.',
    'h',
    '>',
    '\n',
    '\n',
    'i',
    'n',
    't',
    ' ',
    'm',
    'a',
    'i',
    'n',
    '(',
    ')',
    '\n',
    '{',
    '\n',
    '\t',
    'i',
    'n',
    't',
    ' ',
    'i',
    ';',
    '\n',
    '\n',
    '\t',
    'p',
    'r',
    'i',
    'n',
    't',
    'f',
    '(',
    '"',
    'c',
    'h',
    'a',
    'r',
    ' ',
    's',
    '[',
    ']',
    '=',
    '{',
    '\\',
    'n',
    '"',
    ')',
    ';',
    '\n',
    '\t',
    'f',
    'o',
    'r',
    '(',
    'i',
    '=',
    '0',
    ';',
    's',
    '[',
    'i',
    ']',
    ';',
    'i',
    '+',
    '+',
    ')',
    '\n',
    '\t',
    '\t',
    'p',
    'r',
    'i',
    'n',
    't',
    'f',
    '(',
    '"',
    '\\',
    't',
    '%',
    'd',
    ',',
    '\\',
    'n',
    '"',
    ',',
    's',
    '[',
    'i',
    ']',
    ')',
    ';',
    '\n',
    '\t',
    'p',
    'r',
    'i',
    'n',
    't',
    'f',
    '(',
    '"',
    '%',
    's',
    '"',
    ',',
    's',
    ')',
    ';',
    '\n',
    '\t',
    'r',
    'e',
    't',
    'u',
    'r',
    'n',
    ' ',
    '0',
    ';',
    '\n',
    '}',
    0
};

//This is comment
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("char s[]={\n");
    for(i=0;s[i];i++)
        printf("\t%d,\n",s[i]);
    printf("%s",s);
    return 0;
}
