
void setup()
{
  pinMode(27, OUTPUT); //Funçâo de saída do pino 4
}

void loop()
{
  digitalWrite(27, HIGH); //acende o LED
  delay(2000); //Por 2 segundos
  digitalWrite(27, LOW); //Apaga o LED
  delay(1000); //Apaga o LED por 1 segundos
 
}