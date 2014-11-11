connect_score_board
===================

cocos2dxからscore boardサービスを呼び出すためのコネクタです。

### score board 使用準備

http://wiki.gamefeat.net/SCOREBOARD_%E5%88%A9%E7%94%A8%E6%BA%96%E5%82%99

### コネクタ配置

* jni以下にConnectScoreBoard.cpp,ConnectScoreBoard.hを配置
* src/ranking/score/board/ConnectScoreBoard.javaを配置

### Android.mkに追記

* ConnectScoreBoard.cppを追記

### 呼出し ランキング表示

* `ConnectScoreBoard::openRanking("your_game_mode_id");`

### 呼出し ハイスコア送信

* `ConnectScoreBoard::postHighScore("your_game_mode_id","score");`
