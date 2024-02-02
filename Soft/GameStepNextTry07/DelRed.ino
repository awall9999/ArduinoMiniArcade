void DeleteRed(){

for (int count = 0; count <= 5; count++) {

                                        if (AstroHit[count]==1){if (RedCount[count]==0) {Explosion();} RedCount[count]++;
                                                           if (RedCount[count]==3){RedCount[count]=0;DisplayData[3][count]=0;AstroHit[count]=0;}

                                                             }
                                          }


  
}

void Explosion(){

unsigned long time = millis();

while(millis() - time <= 50)  {  // change "500" for different durations in ms.
DispOUT();
tone(Sound, random(300, 500));   // change the parameters of random() for different sound
}
noTone(Sound);
}

  
