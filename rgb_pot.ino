int PinoPotRed   = A0;            // Pino do potenciômetro vermelho 
int PinoPotGreen = A1;           // Pino do potenciômetro verde
int PinoPotBlue  = A2;            // Pino do potenciômetro azul

int PinoLedRed   = 6;             // Pino do Led vermelho
int PinoLedGreen = 5;            // Pino do Led verde
int PinoLedBlue  = 4;             // Pino do Led azul

int Valor   = 0;

void setup() {

     Serial.begin(9600); 
     pinMode(PinoPotRed, INPUT);
     pinMode(PinoPotGreen, INPUT);
     pinMode(PinoPotBlue, INPUT);
   
     pinMode(PinoLedRed, OUTPUT);
     pinMode(PinoLedGreen, OUTPUT);
     pinMode(PinoLedBlue, OUTPUT);

}

void loop() {

  // ---- Vermelho ---- //

     Valor = analogRead(PinoPotRed);
     analogWrite(PinoLedRed, map(Valor, 0, 1023, 0, 255));

  // ---- Verde ---- //

     Valor = analogRead(PinoPotGreen);
     analogWrite(PinoLedGreen, map(Valor, 0, 1023, 0, 255));
     
  // ---- Azul ---- //

     Valor = analogRead(PinoPotBlue);
     analogWrite(PinoLedBlue, map(Valor, 0, 1023, 0, 255));
     
     delay(100);   
}
