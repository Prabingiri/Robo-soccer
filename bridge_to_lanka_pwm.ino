 int prabin;
 int pwm1=6;
 
 
   void setup()
{
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode (pwm1,OUTPUT);
 Serial.begin(9600); 
}  
   
    
   void loop()
   {
    //if some date is sent, reads it and saves in prabin
    if(Serial.available() > 0)
    {     
      prabin = Serial.read();   
      
    }   
if (prabin=='forward')
{
  forward(255);
  
}
else if (prabin=='2')
{
  forward(127); 
}



else if (prabin=='8')
{
  backward(255);
 
}
else if (prabin=='4')
{
  left(255);
 
}
else if (prabin=='5')
{
  stopp();

}
else if (prabin=='6')
{
  right(255);

}



else
{
  stopp();

}
   }
   void forward(float pwm_value)
   {
     analogWrite (pwm1,pwm_value);
    digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
   }
   void backward(float pwm_value)
   {
     analogWrite(pwm1,pwm_value);
     digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
   }
   void right(float pwm_value)
   {
     analogWrite(pwm1,pwm_value);
    digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
   }
   void left(float pwm_value)
   {
     analogWrite(pwm1,pwm_value);
    digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
   }
   void stopp()
   {
    digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
   }
