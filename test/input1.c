/* Generated by re2c */
#line 1 "input1.re"

#line 5 "<stdout>"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;

	if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch(yych){
	case 'a':	goto yy2;
	default:	goto yy4;
	}
yy2:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch(yych){
	case 'b':	goto yy5;
	default:	goto yy3;
	}
yy3:
#line 4 "input1.re"
	{ return 0; }
#line 26 "<stdout>"
yy4:
	yych = *++YYCURSOR;
	goto yy3;
yy5:
	++YYCURSOR;
	if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch(yych){
	case 'b':	goto yy5;
	case 'c':	goto yy8;
	default:	goto yy7;
	}
yy7:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy3;
	}
yy8:
	yych = *++YYCURSOR;
	switch(yych){
	case 'c':	goto yy9;
	default:	goto yy7;
	}
yy9:
	++YYCURSOR;
#line 3 "input1.re"
	{ return 1; }
#line 54 "<stdout>"
}
#line 6 "input1.re"

