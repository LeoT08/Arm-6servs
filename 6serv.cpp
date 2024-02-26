#include <Servo.h>

Servo servo1, servo2, servo3, servo4, servo5, servo6;
int s1 = 90;
int s2 = 90;
int s3 = 90;
int s4 = 90;
int s5 = 90;
int s6 = 90;
int i = 2;
void setup()
{
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(6);
  servo4.attach(5);
  servo5.attach(11);
  servo6.attach(3);
  servo1.write(60);
  servo2.write(70);
  servo3.write(70);
  servo4.write(70);
  servo5.write(60);
  servo6.write(60);
  Serial.begin(9600);    
 
}
void loop()
{
  if(Serial.available()) {              // Verifica comunicação    
    char dado_recebido = Serial.read(); // Lê dado recebido pelo BT
    Serial.println(dado_recebido);      // Transmite dado para Terminal
    if (dado_recebido == 'U')       {
        s1 = s1 - 4;
        if (s1<=5) s1 = 5;
        servo1.write(s1);
        delay(50);
}
    else if (dado_recebido == 'R')  {
      s2 = s2 - 4;
      if (s2<=5) s2 = 5;
      servo2.write(s2);
      delay(10);
}
    else if (dado_recebido == 'D')  {
        s1 = s1 + 4;
        if (s1>=170) s1 = 170;
        servo1.write(s1);
        delay(50);
}   
    else if (dado_recebido == 'L')  {
      s2 = s2 + 4;
      if (s2>=170)s2 = 170;
      servo2.write(s2);
      delay(10);
}
    else if (dado_recebido == 'T')       {//Tecla Up caracter U para BT
      s3 = s3 - 4;
      if (s3<=5) s3 = 5;
      servo3.write(s3);
      delay(10);
}   
    else if (dado_recebido == 'S')  {//Tecla Right caracter R para BT
      s4 = s4 - 4;
      if (s4<=5) s4 = 5;
      servo4.write(s4);
      delay(10);
}   
    else if (dado_recebido == 'X')  {//Tecla Down caracter D para BT
      s3 = s3 + 4;
      if (s3>=170) s3 = 170;
      servo3.write(s3);
      delay(10);
}
    else if (dado_recebido == 'C')  {//Tecla Left caracter L para BT
     s4 = s4 + 4;
     if (s4>=170) s4 = 170;
     servo4.write(s4);
     delay(10);     
}
    else if (dado_recebido == 'P')  {//Tecla Right caracter R para BT
      s5 = s5 - 4;
      if (s5<=5) s5 = 5;
      servo5.write(s5);
      delay(10);
}   
    else if (dado_recebido == 'A') {
      s5 = s5 + 4;
      if (s5>=170) s5 = 170;
      servo5.write(s5);
      delay(10);
}
else if (dado_recebido == 'Q') {
      s6 = s6 + 4;
      if (s6>=170) s6 = 170;
      servo6.write(s6);
      delay(10);
}
else if (dado_recebido == 'F') {
      s6 = s6 - 4;
      if (s6<=5) s6 = 5;
      servo6.write(s6);
      delay(10);
    }
  }
}