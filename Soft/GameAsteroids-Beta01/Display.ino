void DispOUT(){
  
  for (int ROW = 0; ROW <= 5; ROW++) {
      for (int Register = 0; Register <= 3; Register++) {
           digitalWrite(Latch, LOW);
           shiftOut(Data, Clock, MSBFIRST, (255-DisplayData[Register][ROW]));
           
           digitalWrite(Latch, HIGH);    
          }
      digitalWrite(Row[ROW],LOW);
       MicrosecDelay(500);
      digitalWrite(Row[ROW],HIGH);
      
      }
          
}

void MicrosecDelay(int period){     // My Delay
time_now = micros();
do {
  
   } while ((unsigned long)(micros() - time_now) < period);  

}
