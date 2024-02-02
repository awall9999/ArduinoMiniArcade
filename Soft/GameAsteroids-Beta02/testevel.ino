void Level(){
int NoteCount =0;
int Textcounter=0;
int TextTimer=0;
int ScoreText[] {0,0,0,100,109,112,109,100,0,0,0,0,0,0};
int Note [] {262,321,  
            262,321,   
            262,158,   
            262,158,   
            262,321,   
            262,158,   
            262,158,   
            330,321,   
            262,158,   
            262,158,   
            262,421,
            0,0}; 

do{
tone(Sound,Note[NoteCount]);    
unsigned long time = millis();
while(millis() - time <= Note[NoteCount+1])  {
                                              TextTimer++;
                                              if (TextTimer >=40){TextTimer=0;
                                                                   DisplayData[0][0]= ScoreText[Textcounter]  ;
                                                                   DisplayData[0][1]= ScoreText[Textcounter+1]  ;
                                                                   DisplayData[0][2]= ScoreText[Textcounter+2]  ;
                                                                   DisplayData[0][3]= ScoreText[Textcounter+3]  ;
                                                                   Textcounter++;
                                                                  }
                                              DispOUT();
                                              }
noTone(Sound);
Serial.print(Note[NoteCount]);Serial.print(",");Serial.println(Note[NoteCount+1]);
NoteCount=NoteCount+2;
}while (Note[NoteCount] > 0);



  
}
