void setup() //establece algunos criterios que requieren una ejecución única
{
  pinMode(7, INPUT); //configura el pin 7 para que se comporte como entrada
  pinMode(2, OUTPUT); //configura el pin 2 para que se comporte como salida
  pinMode(13, OUTPUT); //configura el pin 13 para que se comporte como salida
}

void loop() //se ejecuta un número infinito de veces
{
  if (digitalRead(7) == HIGH) // si se presiona el botón
  {
    digitalWrite(2, HIGH); //se enciende el pin 2 (LED VERDE)
    digitalWrite(13, LOW); //se apaga el pin 13 (LED ROJO)
  } else { //si no se cumple if()
    digitalWrite(2, LOW); //se apaga el pin 2 (LED VERDE)
    digitalWrite(13, HIGH); //se enciende el pin 13 (LED ROJO)
  }
  delay(10); // pausa el programa durante 10 milisegundos
}
