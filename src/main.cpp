#include <Arduino.h>
#define PWM 4
int velocidad = 500;
char dato;

void setup()
{
  Serial.begin(9600);
  pinMode(PWM, OUTPUT);
}
void loop()
{
  analogWrite(PWM, velocidad);
  if (Serial.available() > 0)
  {
    dato = Serial.read();
    switch (dato)
    {
    case '0':
      Serial.println("Velociad: 0= 100");
      velocidad = 100;
      break;
    case '1':
      Serial.println("Velociad: 1= 200");
      velocidad = 200;
      break;
    case '2':
      Serial.println("Velociad: 2= 300");
      velocidad = 300;
      break;
    case '3':
      Serial.println("Velociad: 3= 400");
      velocidad = 400;
      break;
    case '4':
      Serial.println("Velociad: 4= 500");
      velocidad = 500;
      break;
    case '5':
      Serial.println("Velociad: 5= 600");
      velocidad = 600;
      break;
    case '6':
      Serial.println("Velociad: 6= 700");
      velocidad = 700;
      break;
    case '7':
      Serial.println("Velociad: 7= 800");
      velocidad = 800;
      break;
    case '8':
      Serial.println("Velociad: 8= 900");
      velocidad = 900;
      break;
    case '9':
      Serial.println("Velociad: 9= 1000");
      velocidad = 1000;
      break;
    default:
      Serial.println("Caracter no reconocido");
      break;
    }
  }
}