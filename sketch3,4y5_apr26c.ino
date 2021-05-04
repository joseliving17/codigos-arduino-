int distancia = 0; //almacena el entero distancia que equivale a 0

long readUltrasonicDistance(int triggerPin, int echoPin) //almacena el entero triggerPin y el entero echoPin dentro del entero readUltrasonicDistance
{
  pinMode(triggerPin, OUTPUT); //configura el pin triggerPin para que se comporte como salida  
  digitalWrite(triggerPin, LOW); // se apaga el triggerPin
  delayMicroseconds(2); //pausa el programa durante 2 microsegundos
  
  digitalWrite(triggerPin, HIGH); //se enciendo el triggerPin
  delayMicroseconds(10); //pausa el programa durante 10 microsegundos
  digitalWrite(triggerPin, LOW); //se apaga el triggerPin
  pinMode(echoPin, INPUT); //configura el pin echoPin para que se comporte como entrada
  
  return pulseIn(echoPin, HIGH); //espera a que se encienda el echoPin y devuelve ese valor
}

void setup() //establece algunos criterios que requieren una ejecución única
{
  Serial.begin(9600); //abre el puerto serie, establece la velocidad de datos en 9600 bps
  pinMode(5, OUTPUT); //configura el pin 5 para que se comporte como salida
  pinMode(11, OUTPUT); //configura el pin 11 para que se comporte como salida
}

void loop() //se ejecuta un número infinito de veces
{
  distancia = 0.01723 * readUltrasonicDistance(3, 4);
  Serial.begin(9600); //abre el puerto serie, establece la velocidad de datos en 9600 bps
  if (distancia < 150) { //si la distancia es menor a 150
    tone(5, 548668578, 1000); //activar tono 300 (C25 = 548668578 Hz)
    digitalWrite(5, HIGH); //se enciende el pin 5 (BUZZER)
    digitalWrite(11, HIGH); //se enciende el pin 11 (LED)
  } else { //si no se cumple el if()
    noTone(5); //detiene la generación de una onda cuadrada provocada por tone()
    digitalWrite(5, LOW); //se apaga el pin 5 (BUZZER)
    digitalWrite(11, LOW); //se apaga el pin 11 (LED)
  }
}
