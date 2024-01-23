const int A = 1, B = 2, C = 3, D = 4, E = 5, F = 6, G = 7, H = 8, I = 9, J = 10, K = 11, L = 12,
          M = 13, N = 14, O = 15, P = 16, Q = 17, R = 18, S = 19, T = 20, U = 21, V = 22, W = 23, X = 24, Y = 25, Z = 26;

int convert[27][5] = {{0,0,0,0,0},{1,0,0,0,0},{0,1,0,0,0},{1,1,0,0,0},{0,0,1,0,0},{1,0,1,0,0},{0,1,1,0,0},{1,1,1,0,0},{0,0,0,1,0},{1,0,0,1,0},{0,1,0,1,0},{1,1,0,1,0},{0,0,1,1,0},{1,0,1,1,0},
                      {0,1,1,1,0},{1,1,1,1,0},{0,0,0,0,1},{1,0,0,0,1},{0,1,0,0,1},{1,1,0,0,1},{0,0,1,0,1},{1,0,1,0,1},{0,1,1,0,1},{1,1,1,0,1},{0,0,0,1,1},{1,0,0,1,1},{0,1,0,1,1}};

int idx[10] = {0,0,0,0,0,0,0,0,0,0};
int total_5star = 0,total_4star = 0, total_wish = 0, pity5 = 0, pity4 = 0, gacha_pulls = 0, gacha_pin = 0, gacha10_pin = 0, reset_pin = 0;

void printDisplay();
void setText_Dehya();
void setText_Clear();
void setText_Tighnari();
void setText_Keqing();
void setText_Mona();
void setText_Qiqi();
void setText_Diluc();
void setText_Jean();
void setText_Kaveh();
void setText_Mika();
void setText_Yaoyao();
void setText_Faruzan();
void setText_Layla();
void setText_Candace();
void setText_Dori();
void setText_Collei();
void setText_Kuki();
void setText_Yunjin();
void setText_Kirara();
void setText_Heizou();
void setText_Sara();
void setText_Gourou();
void setText_Sayu();
void setText_Thoma();
void setText_Yanfei();
void setText_Rosaria();
void setText_Xinyan();
void setText_Sucrose();
void setText_Diona();
void setText_Chongyun();
void setText_Noelle();
void setText_Bennett();
void setText_Fischl();
void setText_Ningguang();
void setText_Xinqiu();
void setText_Beidou();
void setText_Xiangling();
void setText_Amber();
void setText_Razor();
void setText_Kaeya();
void setText_Barbara();
void setText_Lisa();
void setText_NoLuck();

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  for (int i = 6;i < 14;i++){
    pinMode(i, OUTPUT);
  }
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop() {
  long rng = random(1000);
  gacha_pin = digitalRead(2);
  gacha10_pin = digitalRead(3);
  reset_pin = digitalRead(4);
  if (reset_pin == HIGH){
    pity5 = 0;
    pity4 = 0;
  }
  if (gacha_pin == HIGH){
    gacha_pulls++;
  }
  else if (gacha10_pin == HIGH){
    gacha_pulls += 10;
  }
  while(gacha_pulls > 0){
    rng = random(1000);
    if (pity4 >= 9) rng = rng % 75;
    if (pity5 >= 89) rng = rng % 7;
    if (rng == 0){
      pity4++;
      pity5 = 0;
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      setText_Dehya();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 1){
      pity4++;
      pity5 = 0;
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      setText_Tighnari();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 2){
      pity4++;
      pity5 = 0;
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      setText_Keqing();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 3){
      pity4++;
      pity5 = 0;
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      setText_Mona();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 4){
      pity4++;
      pity5 = 0;
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      setText_Qiqi();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 5){
      pity4++;
      pity5 = 0;
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      setText_Diluc();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 6){
      pity4++;
      pity5 = 0;
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      setText_Jean();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 7 || rng == 8){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Kaveh();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 9 || rng == 10){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Mika();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 11 || rng == 12){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Yaoyao();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 13 || rng == 14){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Faruzan();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 15 || rng == 16){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Layla();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng ==17 || rng == 18){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Candace();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 19 || rng == 20){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Dori();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 21 || rng == 22){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Collei();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 23 || rng == 24){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Kuki();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 25 || rng == 26){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Yunjin();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 27 || rng == 28){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Kirara();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 29 || rng == 30){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Heizou();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 31 || rng == 32){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Sara();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 33 || rng == 34){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Gourou();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 35 || rng == 36){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Sayu();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 37 || rng == 38){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Thoma();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 39 || rng == 40){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Yanfei();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 41 || rng == 42){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Rosaria();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 43 || rng == 44){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Xinyan();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 45 || rng == 46){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Sucrose();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 47 || rng == 48){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Diona();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 49 || rng == 50){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Chongyun();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 51 || rng == 52){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Noelle();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 53 || rng == 54){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Bennett();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 55 || rng == 56){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Fischl();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 57 || rng == 58){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Ningguang();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 59 || rng == 60){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Xinqiu();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 61 || rng == 62){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Beidou();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 63 || rng == 64){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Xiangling();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 65 || rng == 66){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Amber();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 67 || rng == 68){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Razor();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 69 || rng == 70){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Kaeya();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 71 || rng == 72){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Barbara();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else if(rng == 73 || rng == 74){
      pity4 = 0;
      pity5++;
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      setText_Lisa();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    else{
      pity4++;
      pity5++;
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      setText_NoLuck();
      printDisplay();
      delay(500);
      setText_Clear();
      printDisplay();
    }
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    gacha_pulls--;
  }
}

void printDisplay(){
  for(int i = 0;i < 10;i++){
    if (i == 0){
      for(int j = 0;j < 5;j++){
        if(convert[idx[i]][j] == 0) digitalWrite(j+8, LOW);
        else digitalWrite(j+8, HIGH);
      }
    }
    if (i == 1){
      for(int j = 0;j < 5;j++){
        if(convert[idx[i]][j] == 0) digitalWrite(j+8, LOW);
        else digitalWrite(j+8, HIGH);
      }
    }
    if (i == 2){
      for(int j = 0;j < 5;j++){
        if(convert[idx[i]][j] == 0) digitalWrite(j+8, LOW);
        else digitalWrite(j+8, HIGH);
      }
    }
    if (i == 3){
      for(int j = 0;j < 5;j++){
        if(convert[idx[i]][j] == 0) digitalWrite(j+8, LOW);
        else digitalWrite(j+8, HIGH);
      }
    }
    if (i == 4){
      for(int j = 0;j < 5;j++){
        if(convert[idx[i]][j] == 0) digitalWrite(j+8, LOW);
        else digitalWrite(j+8, HIGH);
      }
    }
    if (i == 5){
      for(int j = 0;j < 5;j++){
        if(convert[idx[i]][j] == 0) digitalWrite(j+8, LOW);
        else digitalWrite(j+8, HIGH);
      }
    }
    if (i == 6){
      for(int j = 0;j < 5;j++){
        if(convert[idx[i]][j] == 0) digitalWrite(j+8, LOW);
        else digitalWrite(j+8, HIGH);
      }
    }
    if (i == 7){
      for(int j = 0;j < 5;j++){
        if(convert[idx[i]][j] == 0) digitalWrite(j+8, LOW);
        else digitalWrite(j+8, HIGH);
      }
    }
    if (i == 8){
      for(int j = 0;j < 5;j++){
        if(convert[idx[i]][j] == 0) digitalWrite(j+8, LOW);
        else digitalWrite(j+8, HIGH);
      }
    }
    if (i == 9){
      for(int j = 0;j < 5;j++){
        if(convert[idx[i]][j] == 0) digitalWrite(j+8, LOW);
        else digitalWrite(j+8, HIGH);
      }
    }
    
    delay(100);
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
  }
}

void setText_Dehya(){
  idx[0] = D;
  idx[1] = E;
  idx[2] = H;
  idx[3] = Y;
  idx[4] = A;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Clear(){
  idx[0] = 0;
  idx[1] = 0;
  idx[2] = 0;
  idx[3] = 0;
  idx[4] = 0;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Tighnari(){
  idx[0] = T;
  idx[1] = I;
  idx[2] = G;
  idx[3] = H;
  idx[4] = N;
  idx[5] = A;
  idx[6] = R;
  idx[7] = I;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Keqing(){
  idx[0] = K;
  idx[1] = E;
  idx[2] = Q;
  idx[3] = I;
  idx[4] = N;
  idx[5] = G;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Mona(){
  idx[0] = M;
  idx[1] = O;
  idx[2] = N;
  idx[3] = A;
  idx[4] = 0;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Qiqi(){
  idx[0] = Q;
  idx[1] = I;
  idx[2] = Q;
  idx[3] = I;
  idx[4] = 0;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Diluc(){
  idx[0] = D;
  idx[1] = I;
  idx[2] = L;
  idx[3] = U;
  idx[4] = C;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Jean(){
  idx[0] = J;
  idx[1] = E;
  idx[2] = A;
  idx[3] = N;
  idx[4] = 0;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Kaveh(){
  idx[0] = K;
  idx[1] = A;
  idx[2] = V;
  idx[3] = E;
  idx[4] = H;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Mika(){
  idx[0] = M;
  idx[1] = I;
  idx[2] = K;
  idx[3] = A;
  idx[4] = 0;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Yaoyao(){
  idx[0] = Y;
  idx[1] = A;
  idx[2] = O;
  idx[3] = Y;
  idx[4] = A;
  idx[5] = O;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Faruzan(){
  idx[0] = F;
  idx[1] = A;
  idx[2] = R;
  idx[3] = U;
  idx[4] = Z;
  idx[5] = A;
  idx[6] = N;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Layla(){
  idx[0] = L;
  idx[1] = A;
  idx[2] = Y;
  idx[3] = L;
  idx[4] = A;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Candace(){
  idx[0] = C;
  idx[1] = A;
  idx[2] = N;
  idx[3] = D;
  idx[4] = A;
  idx[5] = C;
  idx[6] = E;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Dori(){
  idx[0] = D;
  idx[1] = O;
  idx[2] = R;
  idx[3] = I;
  idx[4] = 0;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Collei(){
  idx[0] = C;
  idx[1] = O;
  idx[2] = L;
  idx[3] = L;
  idx[4] = E;
  idx[5] = I;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Kuki(){
  idx[0] = K;
  idx[1] = U;
  idx[2] = K;
  idx[3] = I;
  idx[4] = 0;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Yunjin(){
  idx[0] = Y;
  idx[1] = U;
  idx[2] = N;
  idx[3] = J;
  idx[4] = I;
  idx[5] = N;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Kirara(){
  idx[0] = K;
  idx[1] = I;
  idx[2] = R;
  idx[3] = A;
  idx[4] = R;
  idx[5] = A;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Heizou(){
  idx[0] = H;
  idx[1] = E;
  idx[2] = I;
  idx[3] = Z;
  idx[4] = O;
  idx[5] = U;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Sara(){
  idx[0] = S;
  idx[1] = A;
  idx[2] = R;
  idx[3] = A;
  idx[4] = 0;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Gourou(){
  idx[0] = G;
  idx[1] = O;
  idx[2] = U;
  idx[3] = R;
  idx[4] = O;
  idx[5] = U;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Sayu(){
  idx[0] = S;
  idx[1] = A;
  idx[2] = Y;
  idx[3] = U;
  idx[4] = 0;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Thoma(){
  idx[0] = T;
  idx[1] = H;
  idx[2] = O;
  idx[3] = M;
  idx[4] = A;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Yanfei(){
  idx[0] = Y;
  idx[1] = A;
  idx[2] = N;
  idx[3] = F;
  idx[4] = E;
  idx[5] = I;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Rosaria(){
  idx[0] = R;
  idx[1] = O;
  idx[2] = S;
  idx[3] = A;
  idx[4] = R;
  idx[5] = I;
  idx[6] = A;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Xinyan(){
  idx[0] = X;
  idx[1] = I;
  idx[2] = N;
  idx[3] = Y;
  idx[4] = A;
  idx[5] = N;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Sucrose(){
  idx[0] = S;
  idx[1] = U;
  idx[2] = C;
  idx[3] = R;
  idx[4] = O;
  idx[5] = S;
  idx[6] = E;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Diona(){
  idx[0] = D;
  idx[1] = I;
  idx[2] = O;
  idx[3] = N;
  idx[4] = A;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Chongyun(){
  idx[0] = C;
  idx[1] = H;
  idx[2] = O;
  idx[3] = N;
  idx[4] = G;
  idx[5] = Y;
  idx[6] = U;
  idx[7] = N;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Noelle(){
  idx[0] = N;
  idx[1] = O;
  idx[2] = E;
  idx[3] = L;
  idx[4] = L;
  idx[5] = E;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Bennett(){
  idx[0] = B;
  idx[1] = E;
  idx[2] = N;
  idx[3] = N;
  idx[4] = E;
  idx[5] = T;
  idx[6] = T;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Fischl(){
  idx[0] = F;
  idx[1] = I;
  idx[2] = S;
  idx[3] = C;
  idx[4] = H;
  idx[5] = L;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Ningguang(){
  idx[0] = N;
  idx[1] = I;
  idx[2] = N;
  idx[3] = G;
  idx[4] = G;
  idx[5] = U;
  idx[6] = A;
  idx[7] = N;
  idx[8] = G;
  idx[9] = 0;
}

void setText_Xinqiu(){
  idx[0] = X;
  idx[1] = I;
  idx[2] = N;
  idx[3] = Q;
  idx[4] = I;
  idx[5] = U;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Beidou(){
  idx[0] = B;
  idx[1] = E;
  idx[2] = I;
  idx[3] = D;
  idx[4] = O;
  idx[5] = U;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Xiangling(){
  idx[0] = X;
  idx[1] = I;
  idx[2] = A;
  idx[3] = N;
  idx[4] = G;
  idx[5] = L;
  idx[6] = I;
  idx[7] = N;
  idx[8] = G;
  idx[9] = 0;
}

void setText_Amber(){
  idx[0] = A;
  idx[1] = M;
  idx[2] = B;
  idx[3] = E;
  idx[4] = R;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Razor(){
  idx[0] = R;
  idx[1] = A;
  idx[2] = Z;
  idx[3] = O;
  idx[4] = R;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Kaeya(){
  idx[0] = K;
  idx[1] = A;
  idx[2] = E;
  idx[3] = Y;
  idx[4] = A;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Barbara(){
  idx[0] = B;
  idx[1] = A;
  idx[2] = R;
  idx[3] = B;
  idx[4] = A;
  idx[5] = R;
  idx[6] = A;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_Lisa(){
  idx[0] = L;
  idx[1] = I;
  idx[2] = S;
  idx[3] = A;
  idx[4] = 0;
  idx[5] = 0;
  idx[6] = 0;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}

void setText_NoLuck(){
  idx[0] = N;
  idx[1] = O;
  idx[2] = 0;
  idx[3] = L;
  idx[4] = U;
  idx[5] = C;
  idx[6] = K;
  idx[7] = 0;
  idx[8] = 0;
  idx[9] = 0;
}