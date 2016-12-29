#include <iostream>
#include "Log.h"

/*
    foreground color:
	FG_RED,
	FG_GREEN,
        FG_BLUE,
        FG_DEFAULT,
        FG_BLACK,
        FG_YELLOW,
        FG_MAGENTA,
        FG_CYAN,
        FG_LIGHT_GRAY,
        FG_DARK_GRAY,
        FG_LIGHT_RED,
        FG_LIGHT_GREEN,
        FG_LIGHT_YELLOW,
        FG_LIGHT_BLUE,
        FG_LIGHT_MAGENTA,
        FG_LIGHT_CYAN,
        FG_WHITE,
        
    background color:
	BG_RED,
        BG_GREEN,
        BG_BLUE,
        BG_DEFAULT,
        BG_BLACK,
        BG_YELLOW,
        BG_MAGENTA,
        BG_CYAN,
        BG_WHITE,
*/

using namespace LogHighLight;

int main()
{
        srand(time(NULL));

        Log("Lorem Ipsum è un testo segnaposto utilizzato nel settore della tipografia, un testo campione.",FG_LIGHT_YELLOW,BG_GREEN) << "\n";
        Log(-0.99921,FG_BLUE,BG_RED) << '\n';
        Log(rand() % 1000000,FG_BLUE,BG_RED) << '\n';

	for(unsigned int i = 0; i < 10; i++)
	{
	        Log("[LogDebug00"+std::to_string(i)+".debug]>>",FG_RED, BG_MAGENTA);
		Log(rand() % 5000000,FG_WHITE,BG_CYAN)  << "\n";
	}

	Log("END",FG_WHITE,BG_BLACK)  << "\n";
	return 0;
}
