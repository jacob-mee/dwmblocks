//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"~/.local/bin/statusbar/memory",	10,	14}, 
	{"",	"~/.local/bin/statusbar/cpu",		10,	18}, 
	{"",	"~/.local/bin/statusbar/weather",	18000,	5},
	{"",	"~/.local/bin/statusbar/volume",	0,	10},
	{"",	"~/.local/bin/statusbar/battery",	5,	3},
	{"",	"~/.local/bin/statusbar/clock",		60,	1},
};
//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
