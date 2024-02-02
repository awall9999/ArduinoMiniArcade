void GameOver(){

int GameText[] {0,0,0,117,63,55,109,0,
                119,112,109,40,0,0,0,0};

int ScoreText[] {0,0,0,93,104,120,40,109,0,0,0,0,0,0,0};

int Textcounter=0;

do{

GameTimer = millis();
do{
DispOUT();
} while ((unsigned long)(millis() - GameTimer) < 300);
//DemoGame ();
DisplayData[0][0]= GameText[Textcounter]  ;
DisplayData[0][1]= GameText[Textcounter+1]  ;
DisplayData[0][2]= GameText[Textcounter+2]  ;
DisplayData[0][3]= GameText[Textcounter+3]  ;
Textcounter++;
if (Textcounter<=4){tone (Sound,200,500);} 
if (Textcounter>4 && Textcounter<=8){tone (Sound,150,500);} 
if (Textcounter>8){tone (Sound,100,500);} 

}while (Textcounter != 13);
noTone(Sound);
Textcounter=0;
do{

GameTimer = millis();
do{
DispOUT();
} while ((unsigned long)(millis() - GameTimer) < 300);
//DemoGame ();
DisplayData[0][0]= ScoreText[Textcounter]  ;
DisplayData[0][1]= ScoreText[Textcounter+1]  ;
DisplayData[0][2]= ScoreText[Textcounter+2]  ;
DisplayData[0][3]= ScoreText[Textcounter+3]  ;
Textcounter++;


}while (Textcounter != 11);

GameTimer = millis();
do{
DispOUT();
Score(ScoreValue);
} while ((unsigned long)(millis() - GameTimer) < 5000);
ResetAstro();
  
}
