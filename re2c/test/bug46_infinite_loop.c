/* Generated by re2c */
#line 1 "bug46_infinite_loop.re"
#include <string.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    char* YYCURSOR = argv[1];
    char* YYLIMIT  = YYCURSOR + strlen(YYCURSOR);
    #define YYFILL(n) do { } while(0)


#line 14 "bug46_infinite_loop.c"
{
	unsigned char yych;
#line 13 "bug46_infinite_loop.re"
	{ }
#line 19 "bug46_infinite_loop.c"
}
#line 14 "bug46_infinite_loop.re"


/* BUG BEGINS HERE */

#line 26 "bug46_infinite_loop.c"
{
	unsigned char yych;
	goto yy3;
yy4:
	++YYCURSOR;
yy3:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':
	case 'c':	goto yy6;
	default:	goto yy4;
	}
yy6:
#line 18 "bug46_infinite_loop.re"
	{ printf("exit 0\n"); return 0; }
#line 44 "bug46_infinite_loop.c"
yy7:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy6;
}
#line 19 "bug46_infinite_loop.re"


    printf("exit 1\n");
    return 0;
}
re2c: warning: line 13: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 18: rule matches empty string [-Wmatch-empty-string]
