
#include <Servo.h>

Servo myservo1;  //Creamos el objeto llamado myservo
Servo myservo2; 
Servo myservo3; 
Servo myservo4; 
Servo myservo5; 
Servo myservo6; 

int potpin1 = A0;  //pin del potenciometro al pin A0
int potpin2 = A1;
int potpin3 = A2;
int potpin4 = A3;
int potpin5 = A4;
int potpin6 = A5;


int val1;    // Se crea una variable para un buen desarrollo
int val2; 
int val3; 
int val4; 
int val5; 
int val6; 

void setup()
{
  myservo.attach(3);  //usamos el pin PWM 9
  myservo.attach(5);
  myservo.attach(6);
  myservo.attach(9);
  myservo.attach(10);
  myservo.attach(11);
}
void loop()
{
  val1 = analogRead(potpin1);         // leemos el pin A0
  val1 = map(val1, 0, 1023, 0, 180);  //usamos la funcion map() para convertir valores
  myservo1.write(val1);              //escribimos en el servo el valor obtenido
  delay(15);                       //retardo recomendado

  val2 = analogRead(potpin2);     
  val2 = map(val2, 0, 1023, 0, 180); 
  myservo.write(val2);              
  delay(15);

  val3 = analogRead(potpin3);     
  val3 = map(val3, 0, 1023, 0, 180); 
  myservo.write(val3);              
  delay(15);

  val4 = analogRead(potpin4);     
  val4 = map(val4, 0, 1023, 0, 180); 
  myservo.write(val4);              
  delay(15);

  val5 = analogRead(potpin5);     
  val5 = map(val5, 0, 1023, 0, 180); 
  myservo.write(val5);              
  delay(15);

  val6 = analogRead(potpin6);     
  val6 = map(val6, 0, 1023, 0, 180); 
  myservo.write(val6);              
  delay(15);

}

