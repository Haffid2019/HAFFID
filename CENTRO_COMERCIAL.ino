const int Trigger = PA2;   
const int Echo = PA1;   
long a; 
long b; 
const int zum = PA3; 
const int Led = PA4; 
int cont=0;

void setup() {
  Serial.begin(9600);
  pinMode(Trigger, OUTPUT); 
  pinMode(Echo, INPUT);  
  digitalWrite(Trigger, LOW);
  pinMode(zum, OUTPUT);
  pinMode (Led, OUTPUT);
  }

void loop() {
   dist();
  
char leer = Serial.read();
    Serial.print("Cantidad de personas: ");
    Serial.print(cont);
    Serial.println();
    if(b<8){
      cont++;
      onLed();
      pitar();
      delay(1000);
  }else
  digitalWrite(zum, HIGH);
  delay(100);
  digitalWrite(Led,HIGH);
  delay(100);
  }
void dist(){
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);          
  digitalWrite(Trigger, LOW);
  
  a = pulseIn(Echo, HIGH);
  b = a/59;             
  }
void pitar()
{
  digitalWrite(zum, HIGH);
  delay(100);
  digitalWrite(zum, LOW);
  delay(100);
  }
void onLed()
{
  digitalWrite(Led,HIGH);
  delay(100);
  digitalWrite(Led,LOW);
  delay(100);
}
