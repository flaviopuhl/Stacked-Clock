int displayHour10(int var){
  
  digitalWrite(barPins[0], HIGH);
  if(var==0){
              digitalWrite(ledPins[1], LOW);
              digitalWrite(ledPins[2], LOW);
              digitalWrite(ledPins[3], LOW);
              digitalWrite(ledPins[4], LOW);
              digitalWrite(ledPins[5], LOW);
              digitalWrite(ledPins[6], LOW);
              digitalWrite(ledPins[7], LOW);              
              digitalWrite(ledPins[8], LOW);
              digitalWrite(ledPins[9], LOW);
              digitalWrite(ledPins[10], LOW);
            }
  
  if(var==1){
              digitalWrite(ledPins[1], HIGH);
              digitalWrite(ledPins[2], LOW);
              digitalWrite(ledPins[3], LOW);
              digitalWrite(ledPins[4], LOW);
              digitalWrite(ledPins[5], LOW);
              digitalWrite(ledPins[6], LOW);
              digitalWrite(ledPins[7], LOW);              
              digitalWrite(ledPins[8], LOW);
              digitalWrite(ledPins[9], LOW);
              digitalWrite(ledPins[10], LOW);
            }
            
   if(var==2){
              digitalWrite(ledPins[1], HIGH);
              digitalWrite(ledPins[2], HIGH);
              digitalWrite(ledPins[3], LOW);
              digitalWrite(ledPins[4], LOW);
              digitalWrite(ledPins[5], LOW);
              digitalWrite(ledPins[6], LOW);
              digitalWrite(ledPins[7], LOW);              
              digitalWrite(ledPins[8], LOW);
              digitalWrite(ledPins[9], LOW);
              digitalWrite(ledPins[10], LOW);
            }
           
  if(var==3){
              digitalWrite(ledPins[1], HIGH);
              digitalWrite(ledPins[2], HIGH);
              digitalWrite(ledPins[3], HIGH);
              digitalWrite(ledPins[4], LOW);
              digitalWrite(ledPins[5], LOW);
              digitalWrite(ledPins[6], LOW);
              digitalWrite(ledPins[7], LOW);              
              digitalWrite(ledPins[8], LOW);
              digitalWrite(ledPins[9], LOW);
              digitalWrite(ledPins[10], LOW);
            }
  
   if(var==4){
              digitalWrite(ledPins[1], HIGH);
              digitalWrite(ledPins[2], HIGH);
              digitalWrite(ledPins[3], HIGH);
              digitalWrite(ledPins[4], HIGH);
              digitalWrite(ledPins[5], LOW);
              digitalWrite(ledPins[6], LOW);
              digitalWrite(ledPins[7], LOW);              
              digitalWrite(ledPins[8], LOW);
              digitalWrite(ledPins[9], LOW);
              digitalWrite(ledPins[10], LOW);
            }
          
  
  if(var==5){
              digitalWrite(ledPins[1], HIGH);
              digitalWrite(ledPins[2], HIGH);
              digitalWrite(ledPins[3], HIGH);
              digitalWrite(ledPins[4], HIGH);
              digitalWrite(ledPins[5], HIGH);
              digitalWrite(ledPins[6], LOW);
              digitalWrite(ledPins[7], LOW);              
              digitalWrite(ledPins[8], LOW);
              digitalWrite(ledPins[9], LOW);
              digitalWrite(ledPins[10], LOW);
            }

  if(var==6){
              digitalWrite(ledPins[1], HIGH);
              digitalWrite(ledPins[2], HIGH);
              digitalWrite(ledPins[3], HIGH);
              digitalWrite(ledPins[4], HIGH);
              digitalWrite(ledPins[5], HIGH);
              digitalWrite(ledPins[6], HIGH);
              digitalWrite(ledPins[7], LOW);              
              digitalWrite(ledPins[8], LOW);
              digitalWrite(ledPins[9], LOW);
              digitalWrite(ledPins[10], LOW);
            }
            
  if(var==7){
              digitalWrite(ledPins[1], HIGH);
              digitalWrite(ledPins[2], HIGH);
              digitalWrite(ledPins[3], HIGH);
              digitalWrite(ledPins[4], HIGH);
              digitalWrite(ledPins[5], HIGH);
              digitalWrite(ledPins[6], HIGH);
              digitalWrite(ledPins[7], HIGH);              
              digitalWrite(ledPins[8], LOW);
              digitalWrite(ledPins[9], LOW);
              digitalWrite(ledPins[10], LOW);
            }

  if(var==8){
              digitalWrite(ledPins[1], HIGH);
              digitalWrite(ledPins[2], HIGH);
              digitalWrite(ledPins[3], HIGH);
              digitalWrite(ledPins[4], HIGH);
              digitalWrite(ledPins[5], HIGH);
              digitalWrite(ledPins[6], HIGH);
              digitalWrite(ledPins[7], HIGH);              
              digitalWrite(ledPins[8], HIGH);
              digitalWrite(ledPins[9], LOW);
              digitalWrite(ledPins[10], LOW);
            }
  
  if(var==9){
              digitalWrite(ledPins[1], HIGH);
              digitalWrite(ledPins[2], HIGH);
              digitalWrite(ledPins[3], HIGH);
              digitalWrite(ledPins[4], HIGH);
              digitalWrite(ledPins[5], HIGH);
              digitalWrite(ledPins[6], HIGH);
              digitalWrite(ledPins[7], HIGH);              
              digitalWrite(ledPins[8], HIGH);
              digitalWrite(ledPins[9], HIGH);
              digitalWrite(ledPins[10], LOW);
            }
            
 delay(10);           

digitalWrite(barPins[0], LOW);  
}
