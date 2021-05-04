#define VERDE 5 //define el valor "VERDE" al pin 5
#define AMARILLO 6 //define el valor "AMARILLO" al pin 6
#define ROJO 7 //define el valor "ROJO" al pin 7

#define VERDE 8 //define el valor "VERDE" al pin 8
#define AMARILLO 9 //define el valor "AMARILLO" al pin 9
#define ROJO 10 //define el valor "ROJO" al pin 10

void setup() //establece algunos criterios que requieren una ejecución única
{
  pinMode(5, OUTPUT); //configura el pin 5 para que se comporte como salida
  pinMode(6, OUTPUT); //configura el pin 6 para que se comporte como salida
  pinMode(7, OUTPUT); //configura el pin 7 para que se comporte como salida
  
  pinMode(8, OUTPUT); //configura el pin 8 para que se comporte como salida
  pinMode(9, OUTPUT); //configura el pin 9 para que se comporte como salida
  pinMode(10, OUTPUT); //configura el pin 10 para que se comporte como salida
}

void loop() //se ejecuta un número infinito de veces
{
  digitalWrite(5, HIGH); //se enciende el LED VERDE
  digitalWrite(10, HIGH); //se enciende el LED ROJO
  delay(5000); // pausa el programa durante 5000 milisegundos
  digitalWrite(5, LOW); //se apaga el LED VERDE
  digitalWrite(10, LOW); //se apaga el LED ROJO
  delay(1000); // pausa el programa durante 1000 milisegundos
  
  digitalWrite(6, HIGH); //se enciende el LED AMARILLO
  digitalWrite(9, HIGH); //se enciende el LED AMARILLO
  delay(3000); // pausa el programa durante 3000 milisegundos
  digitalWrite(6, LOW); //se apaga el LED AMARILLO
  digitalWrite(9, LOW); //se apaga el LED AMARILLO
  delay(1000); // pausa el programa durante 1000 milisegundos
  
  digitalWrite(7, HIGH); //se enciende el LED ROJO
  digitalWrite(8, HIGH); //se enciende el LED VERDE
  delay(5000); // pausa el programa durante 5000 milisegundos
  digitalWrite(7, LOW); //se apaga el LED ROJO
  digitalWrite(8, LOW); //se apaga el LED VERDE
  delay(1000); // pausa el programa durante 1000 milisegundos
  
  
  digitalWrite(6, HIGH); //se enciende el LED AMARILLO
  digitalWrite(9, HIGH); //se enciende el LED AMARILLO
  delay(3000); // pausa el programa durante 3000 milisegundos
  digitalWrite(6, LOW); //se apaga el LED AMARILLO
  digitalWrite(9, LOW); //se apaga el LED AMARILLO
  delay(1000); // pausa el programa durante 1000 milisegundos
  
}
