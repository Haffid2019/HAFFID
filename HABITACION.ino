
void setup() {
  Serial.begin(9600);
  pinMode(PA2, OUTPUT); 
  pinMode(PA1, INPUT);  
  pinMode(PA4, OUTPUT);
  digitalWrite(PA2, LOW);
  }
void loop() {
  long a; 
  long b; 
  
  digitalWrite(PA2, HIGH);
  delay(1000);       
  digitalWrite(PA2, LOW);  
   
  a = pulseIn(PA1, HIGH); 
  b = a/59; 
  if(b>0 && b<20){
                    
  digitalWrite(PA4, LOW);
  delay(30000);
  }
  else
  digitalWrite(PA4, HIGH);

}
