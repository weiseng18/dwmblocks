//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval(seconds)*/	/*Update Signal*/
	// {"Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
    {"Vol: ", "get_volume.sh",	0,	10},
    {"Batt: ", "get_battery.sh",	2,	0},
	{"", "date '+%a, %-d %b - %R'"                  			   ,	30,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
