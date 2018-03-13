#include <Servo.h>
Servo servo;
int angulo1=0;   //águno del servo
int angulo2=180; //águno del servo
int retardo=2;
int x=0;

void setup(){
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(12,OUTPUT);
    servo.attach(9);
    Serial.begin(9600);
}
void loop(){
    movimiento2();
}

void movimiento1(){
    miservo();
    for(int i=0;i<=random(1024);i++){
        vueltaAdelante();
        tone(12,random(20,20000),20);
        x=x+1;
        Serial.println(x);
    }
    miservo();
    for(int i=0;i<=random(1024);i++){
        vueltaAtras();
        tone(12,random(20,20000),20);
        x=x-1;
        Serial.println(x);
    }
}

void movimiento2(){
    miservo();
    for(int i=0;i<=random(1024);i++){
        vueltaAdelante();
        tone(12,random(20,20000),20);
        x=x+1;
        Serial.println(x);
    }
}

void vueltaAdelante(){
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
delay(retardo);
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,0);
delay(retardo);
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,0);
delay(retardo);
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
  delay(retardo);
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,0);
delay(retardo);
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,1);
delay(retardo);
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,1);
delay(retardo);
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,1);

delay(retardo);
}

void vueltaAtras(){
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
delay(retardo);
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,1);
delay(retardo);
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,1);
delay(retardo);
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,1);
  delay(retardo);
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,0);
delay(retardo);
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
delay(retardo);
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,0);
delay(retardo);
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,0);
delay(retardo);
}

void miservo(){
  for(int i=angulo1;i<=random(angulo2);i+=1){
    servo.write(i);
    delay(retardo*2);
    
  }
  for(int i=angulo2;i>=random(angulo1);i-=1){
    servo.write(i);
    delay(retardo*2);
  }
}