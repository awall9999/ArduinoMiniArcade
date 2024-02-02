void AstroFall2 () {

Adelay++;
if (Adelay >= 8) {if (Acount[ShipPos]==7){Serial.println("ShipBumm   ");shiphit();}Adelay=0;if (Lcol[LaserRow] == Acol[LaserRow] && Lcol[LaserRow] > 0) {detect();}
                  
                  //tone(Sound, 35,20);
                  if (Astro[0]==0) {Astro[0]=1;Acount[0]=0-random(random(4),8);}
                  if (Astro[1]==0) {Astro[1]=1;Acount[1]=0-random(random(1),8);}
                  if (Astro[2]==0) {Astro[2]=1;Acount[2]=0-random(random(2),6);}
                  if (Astro[3]==0) {Astro[3]=1;Acount[3]=0-random(random(4),8);}
                  if (Astro[4]==0) {Astro[4]=1;Acount[4]=0-random(random(1),8);}
                  if (Astro[5]==0) {Astro[5]=1;Acount[5]=0-random(random(2),6);}

                          for (int count = 0; count <= 5; count++) {

                          if(Acount[count]>=0){ Acol[count]=(1 << Acount[count]);DisplayData[2][count]=  Acol [count];}
                          if (Acol [count]==128) {ScoreValue--;if (ScoreValue<=0){ScoreValue=0;}}

                          Acount[count]++;
                          

                          if (Acount[count]==6) {Acount[count]=7;}

                
                          if (Acount[count]>8) {Astro[count]=0;}

                                                                  }

              }
             
}

void Move(){

unsigned long time = millis();

while(millis() - time <= 25)  {  // change "500" for different durations in ms.
DispOUT();
tone(Sound, 35);   // change the parameters of random() for different sound
}
noTone(Sound);
}
