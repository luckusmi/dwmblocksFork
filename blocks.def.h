/* Config */
static const Block blocks[] = {
	/*Icon*/	/*Command*/							 /*Interval*/ /*Signal*/
	{" ", 		"curl -s 'wttr.in/Ulyanovsk?format=%t'", 300, 		 0},
	{"",		"./bin/volume",							 0,			10},
	{"",		"./bin/internet",						 5,			 4},
	{"",		"./bin/battery",						 5,			 3},
	{"",		"./bin/brightness",						 0,			11},
	{"",		"./bin/clock",							20,			 1},
};

static char delim[] = " ┇ ";

