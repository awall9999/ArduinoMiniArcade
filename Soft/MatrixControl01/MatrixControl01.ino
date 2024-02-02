//int Row0 = 4;int Row1 = 5;int Row2 = 6;int Row3 = 7;int Row4 = 8;int Row5 = 9;

int Data = 13;
int OE = 10;
int Latch = 11;
int Clock = 12;
int Row[6]={4,5,6,7,8,9};
int DisplayData[ 4 ][ 6 ] = { { 0,0,0,0,0,0}, 
                              { 0,0,0,0,0,0},
                              { 1,0,0,64,0,0},
                              { 0,0,0,0,0,0}
                           };

int Counter = 0; 
int i =0;
long int time_now=0;
long int GameTimer=0;
int GameClock=0;

void betterdelay(int period){     // My Delay
time_now = millis();
do {
  //Serial.println(millis() - time_now);
   } while ((unsigned long)(millis() - time_now) < period);  

}


void DispOUT(){
  for (int ROW = 0; ROW <= 5; ROW++) {
      for (int Register = 0; Register <= 3; Register++) {
           digitalWrite(Latch, LOW);
           shiftOut(Data, Clock, MSBFIRST, (255-DisplayData[Register][ROW]));
           
           digitalWrite(Latch, HIGH);    
          }
      digitalWrite(Row[ROW],LOW);
      betterdelay(1);
      digitalWrite(Row[ROW],HIGH);
      }
          
}
    

void setup() {
  Serial.begin(9600);
  for (int i = 0; i <= 5; i++) {
    pinMode (Row[i],OUTPUT);
    digitalWrite (Row[i],LOW);
  }
  pinMode (Data,OUTPUT);  pinMode (OE,OUTPUT);  pinMode (Latch,OUTPUT);  pinMode (Clock,OUTPUT);
  digitalWrite (OE,LOW);
  //analogWrite (OE,100);
  digitalWrite (Latch,LOW);

}

void loop() {
DispOUT();

}
