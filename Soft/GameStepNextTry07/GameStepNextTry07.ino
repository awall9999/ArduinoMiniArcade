//int Row0 = 4;int Row1 = 5;int Row2 = 6;int Row3 = 7;int Row4 = 8;int Row5 = 9;

int Data = 13;
int OE = 10;
int Latch = 11;
int Clock = 12;
int Left = A0;
int Right = A1;
int Fire = A2;
int Sound = 3;

int Row[6]={4,5,6,7,8,9};
int DisplayData[ 4 ][ 6 ] = { { 0,0,0,0,0,0}, 
                              { 0,0,0,0,0,0},
                              { 0,0,0,0,0,0},
                              { 0,0,0,0,0,0}
                           };
//int Astro1 = 0; int Astro2 = 0; int Astro3 = 0; 
byte Astro [6] = {0,0,0,0,0,0};
byte Acol [6] = {0,0,0,0,0,0};
byte Aredcol [6] = {0,0,0,0,0,0};
int Acount[6] = {0,0,0,0,0,0};
int Adelay=0;
int AstroHit[6] = {0,0,0,0,0,0};
int RedCount[6] = {0,0,0,0,0,0};


int LaserFire = 0; 
byte LaserRow;
byte Lcol [6] = {0,0,0,0,0,0};
byte Lredcol [6] = {0,0,0,0,0,0};
int Lcount[6] = {0,0,0,0,0,0};
//int Lcount[6] = {8,8,8,8,8,8};
int LaserStart=0;


int ShipCount=0;
int ShipPos=0;
int BlockButton = 0;
int BlockStart = 0;
int Thrust=0;



long int time_now=0;
long int GameTimer=0;
int GameCounter=0;
int ScoreValue=0;
int Live=0;





void setup() {
  Serial.begin(9600);
  for (int i = 0; i <= 5; i++) {
    pinMode (Row[i],OUTPUT);
    digitalWrite (Row[i],LOW);
  }
  pinMode (Data,OUTPUT);  pinMode (OE,OUTPUT);  pinMode (Latch,OUTPUT);  pinMode (Clock,OUTPUT);pinMode (Sound,OUTPUT);
  pinMode (Left,INPUT_PULLUP);  pinMode (Right,INPUT_PULLUP);  pinMode (Fire,INPUT_PULLUP);
  digitalWrite (OE,LOW);
  //analogWrite (Sound,50);
  //tone (Sound,3200);
  digitalWrite (Latch,LOW);
  randomSeed(A5);
 
}

void loop() {
if (Live<=0){Fire2Start();}
GameTimer = millis();
do {

if (digitalRead(Left)==0 && BlockButton ==0) {BlockButton =1;DisplayData[2][ShipPos] = Acol[ShipPos];DisplayData[1][ShipPos] = Lcol[ShipPos];ShipPos--;if(ShipPos<0){ShipPos=0;};}
if (digitalRead(Right)==0 && BlockButton ==0) {BlockButton =1;DisplayData[2][ShipPos] = Acol[ShipPos];DisplayData[1][ShipPos] = Lcol[ShipPos];ShipPos++;if(ShipPos>5){ShipPos=5;};}
if (digitalRead(Fire)==0 && LaserStart == 0) {LaserStart = 1;LaserRow=ShipPos;Lcount[LaserRow]=0;}
if (digitalRead(Left)==1 &&  digitalRead(Right)==1 ) {BlockButton =0;}

DisplayData[2][ShipPos] = Acol[ShipPos]+64;
DisplayData[1][ShipPos] = (Thrust*64)+Lcol[ShipPos];



DispOUT();
  } while ((unsigned long)(millis() - GameTimer) < 100);

DeleteRed();

if (LaserStart==1)  {Laser();  } 

AstroFall2();
Score(ScoreValue);
Thrust=!Thrust;

GameCounter++;
if (GameCounter == 10) {GameCounter=0;}


}
