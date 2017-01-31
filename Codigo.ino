void setup(){
  Serial.begin(9600);
int x,sum,cont;
           
            sum=0;
            cont=0;
           
            for (int x=1;x<99;x=x+2)
            {
           sum=sum+x;
           cont=cont+1;
        }
           
            Serial.print("Hay");
            Serial.print(cont);
            Serial.println("numeros");
            Serial.print("La suma es:");
            Serial.print(sum);
}
void loop(){}
