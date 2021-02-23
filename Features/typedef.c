#include <stdio.h>
#include <stdlib.h>
struct TFT{
	char rank[20];
	int level;
	int max_team_size;
};
// when we defind such TFT game:
struct TFT alinasgame;
struct TFT alinasgame_p;

// whoa this is ugly :) hence
typedef struct {
	char rank[20];
	int level;
	int max_team_size;
} TFT;
// now TFT is a type of class which has rank, level and max team size as attributes
TFT alinasgame;
TFT alinasgame_p;
