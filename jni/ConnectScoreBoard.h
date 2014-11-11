#ifndef __ConnectScoreBoard__
#define __ConnectScoreBoard__

#include "cocos2d.h"

using namespace cocos2d;

class ConnectScoreBoard
{

public:
    static void openRanking(char* gameModeId);
    static void postHighScore(char* gameModeId, const char* score);

};
#endif
