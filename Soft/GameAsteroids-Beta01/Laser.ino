void Laser() {
if (Lcol[LaserRow] == Acol[LaserRow] && Lcol[LaserRow] > 0) {detect();}
noTone(Sound);
tone (Sound,(4500-(200*Lcount[LaserRow])),1000);

Lcol[LaserRow]=(32 >> Lcount[LaserRow]);

DisplayData[1][LaserRow]=  Lcol[LaserRow];


Lcount[LaserRow]++;



if (Lcount[LaserRow]>6) {noTone(Sound);LaserFire=0;LaserStart=0;Lcount[LaserRow]=0;}


  
}
