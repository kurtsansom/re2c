/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych <= 0xD7FF) goto yy2;
	if (yych <= 0xDBFF) goto yy4;
yy2:
	++YYCURSOR;
yy3:
	{}
yy4:
	yych = *++YYCURSOR;
	if (yych <= 0xDBFF) goto yy3;
	if (yych <= 0xDFFF) goto yy2;
	goto yy3;
}



{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	if (yych <= 0xD7FF) goto yy7;
	if (yych <= 0xDBFF) goto yy9;
yy7:
	++YYCURSOR;
yy8:
	{}
yy9:
	yych = *++YYCURSOR;
	if (yych <= 0xDBFF) goto yy8;
	if (yych <= 0xDFFF) goto yy7;
	goto yy8;
}



{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
	{}
}

