# ESP32 INTERRUPÇÕES

Código de exemplo para uso de INTERRUPÇÔES no ESP32.  

Codificado utilizando o VSCode e PlatformIO.  

Deve-se usar interrupções no ESP32 quando houver a necessidade de responder rapidamente a um evento externo. Por exemplo, se você quiser detectar o acionamento de um botão, você pode usar uma interrupção para chamar uma rotina que altere o estado de um LED.  
Isso é mais eficiente do que verificar o estado do botão a cada loop do programa, pois o processador só será interrompido quando o botão for realmente acionado.  
Outras situações em que pode ser útil usar interrupções incluem:  
 - Leitura de sensores que podem gerar eventos rápidos, como um sensor de toque ou um sensor de movimento.
 - Controle de dispositivos externos, como um motor ou um relé.
 - Comunicação com outros dispositivos, como um servidor ou um sensor.  

<b>Em geral, as interrupções devem ser usadas quando a resposta a um evento externo é importante e precisa ser rápida.</b>  

Aqui estão alguns exemplos específicos de quando usar interrupções no ESP32:
 - Para controlar um motor: Você pode usar uma interrupção para detectar a mudança de direção do motor e alterar a direção do campo magnético do motor. Isso permite que você controle o motor com mais precisão e eficiência.
 - Para detectar um evento externo: Você pode usar uma interrupção para detectar a abertura ou o fechamento de uma porta, o acionamento de um botão ou a mudança de estado de um sensor. Isso permite que você responda rapidamente a esses eventos.
 - Para realizar uma tarefa periodicamente: Você pode usar uma interrupção para chamar uma rotina periodicamente, mesmo que o programa principal esteja ocupado com outra tarefa. Isso permite que você execute tarefas que não precisam ser executadas imediatamente, mas que precisam ser executadas com frequência.  

É importante usar interrupções de forma responsável, pois elas podem consumir recursos do processador. Por exemplo, se você usar muitas interrupções, pode afetar o desempenho do programa ou o consumo de energia.

No ESP32, há os seguintes modos de interrupção suportados para os GPIOs:

 - <b>FALLING</b>: um modo que faz ser gerada uma interrupção quando um GPIO vai do nível alto (3V3) para nível baixo (0V). Ou seja, interrupção gerada na transição de nível alto para baixo;
 - <b>RISING</b>: um modo que faz ser gerada uma interrupção quando um GPIO vai do nível baixo (0V) para nível alto (3V3). Ou seja, interrupção gerada na transição de nível baixo para alto;
 - <b>LOW</b>: um modo que faz ser gerada uma interrupção gerada quando o GPIO está em nível baixo;
 - <b>HIGH</b>: um modo que faz ser gerada uma interrupção gerada quando o GPIO está em nível alto;
 - <b>CHANGE</b>: um modo que faz ser gerada uma interrupção quando há qualquer transição de nível no GPIO. Ou seja, tanto de nível baixo para alto quanto de nível alto para baixo.
## Referências
https://www.makerhero.com/blog/uso-de-interrupcoes-externas-com-esp32/  
