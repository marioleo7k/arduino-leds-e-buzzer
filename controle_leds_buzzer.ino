// Definir pinos dos LEDs e do buzzer
int ledRed = 8;       // Pino digital 8 para o LED vermelho
int ledYellow = 9;    // Pino digital 9 para o LED amarelo
int ledGreen = 10;    // Pino digital 10 para o LED verde
int buzzer = 3;       // Pino digital 3 para o buzzer (piezo)
int potPin = A0;      // Pino analógico A0 para o potenciômetro

void setup() {
  // Configurar pinos dos LEDs e do buzzer como saída
  pinMode(ledRed, OUTPUT);       // Configura o pino do LED vermelho como saída
  pinMode(ledYellow, OUTPUT);    // Configura o pino do LED amarelo como saída
  pinMode(ledGreen, OUTPUT);     // Configura o pino do LED verde como saída
  pinMode(buzzer, OUTPUT);       // Configura o pino do buzzer como saída
}

void loop() {
  // Ler valor do potenciômetro (0 a 1023)
  int potValue = analogRead(potPin);  // Lê o valor do potenciômetro, que varia entre 0 e 1023
  
  // Inicializar as intensidades dos LEDs como 0 (desligados)
  int ledGreenIntensity = 0;  // Inicializa a intensidade do LED verde como 0 (desligado)
  int ledYellowIntensity = 0; // Inicializa a intensidade do LED amarelo como 0 (desligado)
  int ledRedIntensity = 0;    // Inicializa a intensidade do LED vermelho como 0 (desligado)
  
  // Definir intensidade do LED Verde, Amarelo ou Vermelho baseado no valor do potenciômetro
  if (potValue <= 341) {  // Potenciômetro entre 0 e 341 (aproximadamente 0% a 33%)
    ledGreenIntensity = 255;  // Acende o LED verde com intensidade máxima
  } 
  else if (potValue > 341 && potValue <= 682) {  // Potenciômetro entre 342 e 682 (aproximadamente 34% a 66%)
    ledYellowIntensity = 255;  // Acende o LED amarelo com intensidade máxima
  } 
  else if (potValue > 682) {  // Potenciômetro entre 683 e 1023 (aproximadamente 67% a 100%)
    ledRedIntensity = 255;  // Acende o LED vermelho com intensidade máxima
  }
  
  // Mapear o valor do potenciômetro para a intensidade do som do buzzer (0 a 255)
  int soundIntensity = map(potValue, 0, 1023, 0, 255);  
  // A função `map()` converte o valor do potenciômetro (que varia de 0 a 1023) 
  // para um valor que varia de 0 a 255, correspondente à intensidade do som do buzzer
  
  // Controlar LEDs
  analogWrite(ledGreen, ledGreenIntensity);  // Controla a intensidade do LED verde
  analogWrite(ledYellow, ledYellowIntensity); // Controla a intensidade do LED amarelo
  analogWrite(ledRed, ledRedIntensity);      // Controla a intensidade do LED vermelho
  
  // Controle do buzzer (utilizando PWM para intensidade do som)
  analogWrite(buzzer, soundIntensity);  // Controla a intensidade do som do buzzer com PWM (0 a 255)
  
  delay(50);  // Pequeno atraso de 50 milissegundos para suavizar o controle
}

