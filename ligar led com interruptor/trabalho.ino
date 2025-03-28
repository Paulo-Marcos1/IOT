int buttonPin = 7;
int ledPin2 = 10;
int ledPin1 = 9;
int ledPin3 = 11;
int contador = 0;
int estadoButton = 0;

void setup(){
  pinMode (ledPin1, OUTPUT);
  pinMode (ledPin2, OUTPUT);
  pinMode (ledPin3, OUTPUT);
  pinMode (buttonPin, INPUT);

}

void loop(){

  estadoButton = digitalRead(buttonPin);
  if(contador == 0 and estadoButton == HIGH){
    estadoButton = LOW;
    digitalWrite(ledPin1, HIGH);
    delay(100);
    contador += 1;
    
 }

  if(contador == 1 and estadoButton == HIGH){
    estadoButton = LOW;
    digitalWrite(ledPin2, HIGH);
    delay(100);
    contador += 1;
    
  }

  if(contador == 2 and estadoButton == HIGH){
    estadoButton = LOW;
    digitalWrite(ledPin3, HIGH);
    delay(100);
    contador += 1;
    
  }

  if(contador == 3 and estadoButton == HIGH){
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    contador = 0;
    estadoButton = LOW;
    
    
  }


}
