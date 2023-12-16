#include <Arduino.h>

#define BOTAO 16

int cont = 0;
bool status = LOW;

unsigned long tempoUltimoDebounce = 0;
unsigned long tempoDebounce = 700;

void ligaDesligaLampada();

void IRAM_ATTR funcao_ISR() {
  if((millis() - tempoUltimoDebounce) > tempoDebounce) {
    cont++;
    ligaDesligaLampada();
    tempoUltimoDebounce = millis();
  }
}


void setup() {
  Serial.begin(115200);
  pinMode(BOTAO, INPUT_PULLDOWN);
  Serial.println("== INICIANDO ... ");

  attachInterrupt(BOTAO, funcao_ISR, RISING);

}

void loop() {

  //debounceBotao();
  Serial.print("cont = ");
  Serial.println(cont);
  Serial.print("lampada = ");
  Serial.println(status);


}

void ligaDesligaLampada(){
  status = !status;
}