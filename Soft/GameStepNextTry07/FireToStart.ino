void Fire2Start(){
int FireText[] {0,0,0,47,40,109,93,93,0,
                45,32,40,109,0,
                108,120,0,
                93,108,63,40,108,0,0,0,0,0};

int Textcounter=0;


do{
if (digitalRead(Fire)==0 && BlockButton ==0 ) {BlockButton =1;}
if (digitalRead(Fire)==1 && BlockButton ==1 ) {BlockButton =0;Live=3;ResetAstro();}
//AstroFall2 ();
GameTimer = millis();
do{
  if (digitalRead(Fire)==0 && BlockButton ==0 ) {BlockButton =1;}
if (digitalRead(Fire)==1 && BlockButton ==1 ) {BlockButton =0;Live=3;ResetAstro();}
Demo();
DispOUT();
} while ((unsigned long)(millis() - GameTimer) < 300);
//DemoGame ();
DisplayData[0][0]= FireText[Textcounter]  ;
DisplayData[0][1]= FireText[Textcounter+1]  ;
DisplayData[0][2]= FireText[Textcounter+2]  ;
DisplayData[0][3]= FireText[Textcounter+3]  ;
Textcounter++;if (Textcounter==24) {Textcounter=0;}


}while (Live != 3);

rocky();
void ResetAstro();
}
