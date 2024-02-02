void detect() {

//Serial.print("LaserCounter: ");Serial.print((Lcount[LaserRow]));Serial.print(" AstroCounter: ");Serial.println(Acount[LaserRow]-1);
//Serial.print("Lcol: ");Serial.print(Lcol[LaserRow]);Serial.print(" Acol: ");Serial.println(Acol [LaserRow]);
//if (Lcol[LaserRow] == Acol[LaserRow]) Serial.print(" Bumm ");

//if (RedCount[count]==0) {tone(Sound,100);}

//noTone(Sound);
//tone(Sound,100);

DisplayData[3][LaserRow]=  Acol [LaserRow];



DisplayData[2][LaserRow]= 0 ; 
Astro[LaserRow]=0;Acount[LaserRow]=-3;Acol [LaserRow]=0;AstroHit[LaserRow]=1;
Lcount[LaserRow]=7;
ScoreValue=ScoreValue+5; if (ScoreValue>9999) ScoreValue=9999;
//Serial.print(Acol [LaserRow]);Serial.print(" - ");Serial.println((Acol [LaserRow]-Acol [LaserRow]));
}
