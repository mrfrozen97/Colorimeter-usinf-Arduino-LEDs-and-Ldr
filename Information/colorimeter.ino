void setup() {
  Serial.begin(9600);
pinMode(A5,INPUT);pinMode(A4,INPUT);
pinMode(2,OUTPUT);pinMode(3,OUTPUT);pinMode(4,OUTPUT);pinMode(5,OUTPUT);pinMode(0,INPUT);
  // put your setup code here, to run once:

}
int a=2,b=3,k=0;
void loop() {
  
  if(a==2){
    digitalWrite(2,HIGH);
    digitalWrite(b,LOW);
    }
   else if(a==3){
    digitalWrite(3,HIGH);
     digitalWrite(b,LOW);
    }
    else if(a==4){
    digitalWrite(4,HIGH);
     digitalWrite(b,LOW);
    }
    else if(a==5){
    digitalWrite(5,HIGH);
     digitalWrite(b,LOW);
    }
int  x = millis(),c;
float sum=0,y,t,r,l;
c= digitalRead(0);
    if(c==0){
      b=a;
      a++;
      delay(1000);
      }
      if(a==6){a=2;}

     t = analogRead(A5);// Serial.println(t);
double val1,val2,val3,val4,color;
 
      int u = analogRead(A4); 
      if(u>650 && u<680){
        k++; delay(1000);
        }
        if(k==2){k=0;}
        if(k==1){
         val1 = t/1023 * 5;
          val2 = val1/(5 - val1) * 15000;
         val3 = -0.608 * log(val2) + 7.098;
         if(a==2){color = 2.15;}
         if(a==3){color = 1.74;}
         if(a==4){color = 1.644;}
         if(a==5){color = 2.028;}
        val4= log(color/val3) / 2.303;
        Serial.print("Absorbance = "); Serial.println(val4); delay(200);
        
        
        
        }
        else{
          val1 = t/1023 * 5;
          val2 = val1/(5 - val1) * 15000;
         val3 = -0.608 * log(val2) + 7.098;
         Serial.print("Intensity = "); Serial.print(val3); Serial.println(" Lux"); delay(200);
          }
 
        
  
  
 

}
