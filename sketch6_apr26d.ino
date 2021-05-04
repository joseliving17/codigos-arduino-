int temperatura = 0; //defino la variable temperatura y la inicio en 0

void setup() //establece algunos criterios que requieren una ejecución única
{
  pinMode(A0, INPUT); //configura el pin A0 para que se comporte como entrada
  pinMode(8, OUTPUT); //configura el pin 8 para que se comporte como salida
  pinMode(13, OUTPUT); //configura el pin 13 para que se comporte como salida
}

void loop() //se ejecuta un número infinito de veces
{
  temperatura= -40 + 0.488155 * (analogRead(A0) - 20); //mido la temperatura del sensor, la multiplico por un factor de conversión y la guardo en la variable temperatura
 
  if (temperatura > 35) //si la temperatura es mayor a 35 grados
  {
    digitalWrite(8, HIGH); //se enciende el pin 8 (LED ROJO)
    digitalWrite(13, LOW); //se apaga el pin 13 (LED VERDE)
  }
  else //si la temperatura NO es mayor a 35 grados
  {
    digitalWrite(8, LOW); //se apaga el pin 8 (LED ROJO)
    digitalWrite(13, HIGH); //se enciende el pin 13 (LED VERDE)
  }
}
