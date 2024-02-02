int Row0 = 6;int Row1 = 7;int Row2 = 8;int Row3 = 9;int Row4 = 10;int Row5 = 11;

int Data = 2;
int OE = 5;
int Latch = 4;
int Clock = 3;
int Counter = 0; 
int i =0;


void DispOUT(int Value){
  for (int i = 0; i <= 3; i++) {
    digitalWrite(Latch, LOW);
    shiftOut(Data, Clock, MSBFIRST, Value);
    digitalWrite(Latch, HIGH);
    
    }}
    

void setup() {
  Serial.begin(9600);
  pinMode (Row0,OUTPUT); pinMode (Row1,OUTPUT); pinMode (Row2,OUTPUT); pinMode (Row3,OUTPUT); pinMode (Row4,OUTPUT); pinMode (Row5,OUTPUT);
  pinMode (Data,OUTPUT);
  pinMode (OE,OUTPUT);
  pinMode (Latch,OUTPUT);
  pinMode (Clock,OUTPUT);

  digitalWrite (Row0,LOW);digitalWrite (Row1,HIGH);digitalWrite (Row2,HIGH);digitalWrite (Row3,HIGH);digitalWrite (Row4,HIGH);digitalWrite (Row5,HIGH);
  digitalWrite (OE,LOW);
  //analogWrite (OE,100);
  digitalWrite (Latch,LOW);

}

void loop() {
    Counter= 1 <<  i;
      Serial.print(Counter);
      i++;
      if (i==9) {Counter=0;i=0;} 
 
    
    digitalWrite(Latch, LOW);
    shiftOut(Data, Clock, MSBFIRST, (255-(Counter)));
    shiftOut(Data, Clock, MSBFIRST, (255-(Counter)));
    shiftOut(Data, Clock, MSBFIRST, (255-(Counter)));
    shiftOut(Data, Clock, MSBFIRST, (255-(Counter)));
    
    
    
    digitalWrite(Latch, HIGH);
    
      
      
          
    delay(1000);
    Serial.println();
 
}
