const int som = A0;
const int sonda = 2;
const int motor = 9;
const int buz = 7;

unsigned long time;

int valor0 = 0;
int valor1 = 0;
int calc = 0;
float tensao = 0.0;
String texto0;
String texto1;

int dos = 262;
int re = 294;
int mi = 330;
int fa = 349;
int sol = 392;
int la = 440;
int si = 494;
int doss = 528;

void setup() {
  pinMode(som, INPUT);
  pinMode(sonda, INPUT);
  pinMode(buz, OUTPUT);
  
  Serial.begin(9600);

}

void loop() {
  valor0 = analogRead(som);
  valor1 = digitalRead(sonda);

 

  /*
  
  tensao = valor * 5 / 1024;

  calc = valor / 10;
  
  //tone(buz, valor);

  
  tone(buz, doss);
  delay(200);

  noTone(buz);
  delay(100);
  
  tone(buz, re);
  delay(200);

  noTone(buz);
  delay(100);
  
  tone(buz, mi);
  delay(200);

  noTone(buz);
  delay(100);
  
  
  tone(buz, fa);
  delay(200);

  noTone(buz);
  delay(400);
  
  tone(buz, fa);
  delay(150);

  noTone(buz);
  delay(200);
  
  tone(buz, fa);
  delay(150);

  noTone(buz);
  delay(400);

//=====================

  tone(buz, doss);
  delay(200);

  noTone(buz);
  delay(100);
  
  tone(buz, re);
  delay(200);

  noTone(buz);
  delay(100);
  
  tone(buz, dos);
  delay(200);

  noTone(buz);
  delay(100);
  
  
  tone(buz, re);
  delay(200);

  noTone(buz);
  delay(400);
  
  tone(buz, re);
  delay(150);

  noTone(buz);
  delay(200);
  
  tone(buz, re);
  delay(150);

  noTone(buz);
  delay(400);

//===============================

  tone(buz, dos);
  delay(200);

  noTone(buz);
  delay(100);
  
  tone(buz, sol);
  delay(200);

  noTone(buz);
  delay(100);
  
  tone(buz, fa);
  delay(200);

  noTone(buz);
  delay(100);
  
  
  tone(buz, mi);
  delay(200);

  noTone(buz);
  delay(400);
  
  tone(buz, mi);
  delay(150);

  noTone(buz);
  delay(200);
  
  tone(buz, mi);
  delay(150);

  noTone(buz);
  delay(400);

// ======================================

  tone(buz, dos);
  delay(200);

  noTone(buz);
  delay(100);
  
  tone(buz, re);
  delay(200);

  noTone(buz);
  delay(100);
  
  tone(buz, mi);
  delay(200);

  noTone(buz);
  delay(100);
  
  
  tone(buz, fa);
  delay(200);

  noTone(buz);
  delay(400);
  
  tone(buz, fa);
  delay(150);

  noTone(buz);
  delay(200);
  
  tone(buz, fa);
  delay(150);

  noTone(buz);
  delay(400);

//=======================================

  tone(buz, dos);
  delay(200);

  noTone(buz);
  delay(100);
  
  tone(buz, re);
  delay(200);

  noTone(buz);
  delay(100);
  
  tone(buz, mi);
  delay(200);

  noTone(buz);
  delay(100);
  
  
  tone(buz, fa);
  delay(200);

  noTone(buz);
  delay(400);
  
  tone(buz, fa);
  delay(150);

  noTone(buz);
  delay(200);
  
  tone(buz, fa);
  delay(150);

  noTone(buz);
  delay(400);
  */
  tensao = valor0 * 5.0 / 1023.0;
  
  texto0 = "O valor analógico é de: ";
  texto1 = "O valor digital é de: ";

/*
  if(valor0 > 40){    
    while(valor0 > 40){
      digitalWrite(buz, HIGH);
      valor0 = analogRead(som);
    }
  }
  else{
    digitalWrite(buz, LOW);
  }

   */
  while(valor0 > 60){
    digitalWrite(buz, HIGH);
    valor0 = analogRead(som);
  }


  digitalWrite(buz, LOW);
  
  
  

  
  Serial.println(texto0 + valor0);

  //Serial.println(tensao);

  
  delay(100);

}
