void shiphit(){

//DisplayData[3][ShipPos]=  Acol [ShipPos];
DisplayData[2][ShipPos]= 0 ; 
DisplayData[1][ShipPos] = 0;

Astro[ShipPos]=0;Acount[ShipPos]=-3;Acol [ShipPos]=0;
Lcount[ShipPos]=7;



DisplayData[3][ShipPos] = 64;

unsigned long time = millis();
while(millis() - time <= 1000)  {  // change "500" for different durations in ms.

//tone(Sound, 500); 
tone(Sound, random(50, 500)); // change the parameters of random() for different sound
DispOUT();

}
noTone(Sound);

DisplayData[3][ShipPos] = 0;


Live--; if(Live<=0){Live=0;GameOver();}



} 
