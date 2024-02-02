void Score(int Value){
int Mod1;int Mod2;int Mod3;
byte Number[] = {119,18,107,91,30,93,125,19,127,95};
int Live1=0;int Live2=0;int Live3=0;

if (Live == 3) {Live1=128;Live2=128;Live3=128;}
if (Live == 2) {Live2=128;Live3=128;}
if (Live == 1) {Live3=128;}

Mod1 = (Value%10);
Value=Value/10;
Mod2 = (Value%10);
Value=Value/10;
Mod3 = (Value%10);
Value=Value/10;


//Serial.print(Mod1);Serial.print("-");Serial.print(Mod2);Serial.print("-");Serial.print(Mod3);Serial.print("-");Serial.println(Value);

DisplayData[0][0]= Number[Value]+Live3 ;
DisplayData[0][1]= Number[Mod3]+Live2 ;
DisplayData[0][2]= Number[Mod2]+Live1 ;
DisplayData[0][3]= Number[Mod1] ;


  
}
