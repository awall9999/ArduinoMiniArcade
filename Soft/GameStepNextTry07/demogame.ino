void Demo() {

Adelay++;
if (Adelay >= 100) {Adelay=0;
                  
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
