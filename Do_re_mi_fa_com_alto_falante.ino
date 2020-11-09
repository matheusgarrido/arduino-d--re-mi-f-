void setup() {
  pinMode(11, OUTPUT);
  Serial.begin(9600);  
}

const int X = 0;
const int C = 264;
const int D = 297;
const int E = 330;
const int F = 352;
const int G = 396;
const int A = 440;
const int B = 495;
const int CC = 528;

void nota(int frequencia, int duracao){
  tone(11, frequencia, duracao);
  delay(duracao);
}

void loop() {  
  nota(C, 300);
  nota(D, 300);  
  nota(E, 300);
  nota(F, 300);
  nota(X, 150);
  nota(F, 150);
  nota(X, 150);
  nota(F, 150);
  nota(X, 150);
  
  nota(C, 300);
  nota(D, 300);
  nota(C, 300);
  nota(D, 300);
  nota(X, 150);
  nota(D, 150);
  nota(X, 150);
  nota(D, 150);
  nota(X, 150);

  nota(C, 300);
  nota(G, 300);
  nota(F, 300);
  nota(E, 300);
  nota(X, 150);
  nota(E, 150);
  nota(X, 150);
  nota(E, 150);
  nota(X, 150);

  nota(C, 300);
  nota(D, 300);  
  nota(E, 300);
  nota(F, 300);
  nota(X, 150);
  nota(F, 150);
  nota(X, 150);
  nota(F, 150);
  nota(X, 150);
}

