package ranking.score.board;

import jp.basicinc.gamefeat.ranking.android.sdk.controller.GFRankingController;

import org.cocos2dx.lib.Cocos2dxActivity;

import android.app.Activity;

public class ConnectScoreBoard {
	public static void openRanking(final String gameModeId){
		final Activity activity = (Activity)Cocos2dxActivity.getContext();
		GFRankingController.show(activity, gameModeId);
	}
	
	public static void postHighScore(final String gameModeId, final String score){
		final Activity activity = (Activity)Cocos2dxActivity.getContext();
		String[] gameIds = {gameModeId};
	    String[] scores = {score};
	    GFRankingController appController = GFRankingController.getIncetance(activity);
	    appController.sendScore(gameIds, scores);
	}
}