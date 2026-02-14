#include <DHT11.h>

#define pinDHT11 5  // GPIO5 - pino de Sinal do DHT11
DHT11 dht11(pinDHT11);  // criando um objeto dht11 do tipo DHT11
int temperatura = 0;  // Temperatura
int humidade = 0;  // Humidade do Ar

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); // Iniciar a comunicação serial

}

void loop() {
  // put your main code here, to run repeatedly:
  int resultDHT11 = dht11.readTemperatureHumidity(temperatura, humidade); // Lê o valor da temperatura e humidade

  // Verifica se o resultado da leitura é igual à 0
  if(resultDHT11 == 0) {
    Serial.print("Temperatura: ");
    Serial.print(temperatura);  // Imprima o valor da temperatura
    Serial.print(" °C");
    Serial.print("  |  Humidade: ");
    Serial.print(humidade); // Imprima o valor da humidade
    Serial.println(" %");
  }
  // Se não
  else {
    Serial.println("Falha no sensor!"); // Imprima a mensagem de erro
  }
  delay(1000); // Intervalo de 1s

}
