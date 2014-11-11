#include "ConnectScoreBoard.h"
#include <jni.h>
#include "platform/android/jni/JniHelper.h"

#define CLASS_NAME "ranking/score/board/ConnectScoreBoard"

void ConnectScoreBoard::openRanking(char* gameModeId){
	cocos2d::JniMethodInfo t;
	if (cocos2d::JniHelper::getStaticMethodInfo(t, CLASS_NAME, "openRanking", "(Ljava/lang/String;)V")) {
		jstring stringGameModeId = t.env->NewStringUTF(gameModeId);
		t.env->CallStaticVoidMethod(t.classID, t.methodID, stringGameModeId);
		t.env->DeleteLocalRef(stringGameModeId);
		t.env->DeleteLocalRef(t.classID);
	}
}

void ConnectScoreBoard::postHighScore(char* gameModeId, const char* score){
	cocos2d::JniMethodInfo t;
	if (cocos2d::JniHelper::getStaticMethodInfo(t, CLASS_NAME, "postHighScore", "(Ljava/lang/String;Ljava/lang/String;)V")) {
		jstring stringGameModeId = t.env->NewStringUTF(gameModeId);
		jstring stringScore = t.env->NewStringUTF(score);
		t.env->CallStaticVoidMethod(t.classID, t.methodID, stringGameModeId, stringScore);
		t.env->DeleteLocalRef(stringGameModeId);
		t.env->DeleteLocalRef(stringScore);
		t.env->DeleteLocalRef(t.classID);
	}
}
