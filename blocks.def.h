//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon    Command                       Update Interval    Update Signal*/
  {"",      "sb_test.sh",                 5,                 10},
  {"",      "date +'%A %d %b %I:%M %p'",  1,                 20},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
