/*digispark pop_cat_ring*/
/*RADIONEWS**************/
/*12.03.2021*/

/*массив аудио*/
const uint8_t pop[] PROGMEM = {
128,128,128,128,129,129,129,129,128,126,124,121,118,118,122,126,
131,134,136,139,141,141,139,136,135,135,135,136,137,138,138,138,
140,140,140,140,138,137,136,134,133,132,131,131,130,129,128,128,
128,127,127,129,130,131,131,130,130,130,131,131,131,131,130,130,
129,128,128,128,128,128,129,130,132,132,132,132,133,134,134,134,
134,134,134,134,134,133,133,132,131,130,130,130,129,129,129,129,
130,130,131,132,134,135,135,135,134,133,132,131,131,131,131,130,
130,130,130,130,130,130,131,131,132,132,132,132,131,131,130,129,
128,128,127,127,127,127,127,127,127,127,127,127,127,127,128,128,
128,128,128,128,128,128,128,128,128,127,127,127,127,127,127,127,
127,127,127,126,126,127,127,127,127,126,126,126,126,126,126,125,
125,125,125,125,125,125,125,125,125,125,126,126,126,125,125,125,
125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,
125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,
125,125,125,125,125,125,125,125,125,125,125,124,124,124,124,124,
124,124,124,124,124,124,124,124,124,124,124,124,124,124,124,123,
123,123,122,123,123,123,122,122,123,123,122,122,123,124,123,124,
123,123,124,125,124,122,123,123,123,122,122,122,122,122,122,122,
122,122,123,123,123,123,124,125,127,130,132,135,140,145,151,157,
163,166,168,169,167,166,168,168,168,170,171,172,173,175,174,174,
175,174,173,173,172,172,171,170,170,169,169,168,167,166,165,163,
159,154,149,144,138,132,126,121,114,107,102,96,91,86,81,76,
72,68,65,63,62,61,63,66,69,74,81,88,95,103,111,118,
125,132,139,145,151,157,162,167,170,171,171,171,168,165,161,155,
148,142,134,127,121,114,107,102,96,92,87,84,81,79,79,79,
81,84,88,93,98,104,110,117,124,130,137,142,148,152,156,159,
162,163,163,163,161,159,156,152,148,142,137,132,126,121,116,112,
108,104,101,100,99,98,99,100,102,105,108,112,116,121,125,130,
134,138,142,146,148,150,152,152,152,151,150,148,145,142,138,134,
130,126,122,118,115,112,110,108,106,106,106,107,108,110,112,115,
118,121,124,128,131,134,137,139,141,142,143,143,143,142,140,138,
136,133,130,127,124,121,119,116,114,113,111,111,111,111,112,113,
115,117,120,123,125,128,131,133,136,137,139,140,141,141,140,139,
138,136,134,132,129,127,125,122,120,119,117,116,116,116,116,117,
118,119,121,123,125,127,128,130,131,133,133,134,134,133,133,132,
131,129,128,127,125,123,122,121,120,119,119,119,119,120,120,121,
122,124,125,126,127,128,129,130,130,130,130,130,129,128,127,126,
125,124,123,122,121,120,120,119,119,119,120,121,121,122,123,124,
125,126,127,128,129,129,129,129,129,129,128,127,126,125,124,123,
123,122,121,121,121,121,122,122,123,124,125,126,127,128,129,130,
130,131,131,131,131,130,130,129,128,127,127,126,125,124,124,123,
123,123,123,123,123,124,124,125,125,125,126,126,126,126,126,125,
125,124,124,124,123,123,123,123,123,123,124,124,125,125,126,127,
127,128,128,128,128,128,128,128,127,127,126,126,125,125,125,125,
124,124,124,125,125,125,126,126,126,126,126,127,127,127,126,126,
126,126,126,125,125,125,125,125,125,126,126,126,126,127,127,127,
127,127,127,127,127,126,126,126,126,126,125,125,125,126,126,126,
126,126,126,127,127,127,127,127,127,127,126,126,126,126,125,125,
125,125,126,126,126,126,127,127,127,127,127,127,127,127,127,127,
126,126,126,126,126,126,126,126,126,126,127,127,127,127,127,127,
127,127,127,127,127,126,126,126,126,126,126,126,127,127,127,127,
127,127,127,126,126,126,126,126,126,126,126,126,127,127,127,128,
128,128,128,128,128,127,127,127,126,126,126,126,126,126,126,127,
127,127,127,128,128,127,127,127,127,127,127,126,126,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
127,127,127,127,127,127,128,127,128,128,127,128,127,128,128,128,
127,128,128,127,128,127,127,128,127,128,127,128,127,128,128,127,
128,127,127,128,127,128,127,128,127,128,127,128,127,128,127,128,
127,128,127,128,127,128,127,128,127,128,127,128,127,127,128,127,
128,127,128,128,128,128,128,128,128,128,128,127,128,127,128,127,
127,128,127,128,127,128,127,128,127,128,127,128,128,127,128,127,
128,128,127,128,127,128,128,127,128,127,128,128,128,128,128,127,
128,127,128,127,128,127,128,127,128,128,127,128,128,127,127,128,
127,128,127,128,127,128,128,128,128,128,128,127,128,127,128,127,
128,127,128,127,128,127,128,127,128,128,128,127,128,127,128,128,
127,128,128,128,127,128,127,128,127,128,127,128,128,128,127,128,
128,127,128,128,128,128,127,128,128,128,127,128,128,128,128,127,
128,128,127,128,127,128,128,127,128,128,128,127,128,127,128,127,
128,128,127,128,127,128,128,127,128,127,128,127,128,128,128,128,
128,127,128,128,128,128,128,127,128,128,127,128,127,128,127,128,
128,128,127,128,127,128,128,127,128,128,127,128,127,128,127,128,
128,127,128,128,128,128,128,127,128,128,127,128,127,128,127,128,
128,127,128,127,128,127,128,127,128,128,127,128,128,128,127,128,
127,128,127,128,128,128,128,127,128,127,128,127,128,128,128,128,
128,127,127,128,127,128,127,128,128,128,127,128,128,128,128,128,
127,128,127,128,127,128,127,128,128,128,128,127,128,127,128,127,
128,127,128,127,128,128,127,128,127,128,127,128,128,127,128,128,
127,128,128,127,128,127,127,128,127,128,127,128,127,128,128,127,
128,127,128,127,128,127,128,127,128,127,128,127,128,128,127,128,
127,127,128,127,128,128,128,127,128,127,128,127,128,127,128,127,
128,127,128,128,128,127,128,127,128,128,127,128,127,128,128,127,
128,128,127,128,128,127,128,127,128,127,128,128,127,128,127,128,
128,127,128,127,128,128,127,128,127,128,127,128,128,128,128,128,
128,128,128,127,128,127,128,127,127,128,127,128,127,128,128,128,
128,128,127,128,128,127,128,127,128,127,128,127,128,127,128,127,
128,128,127,128,127,128,128,128,127,128,127,128,128,127,128,128,
127,128,127,128,127,128,127,128,127,128,128,127,128,127,127,128,
127,128,127,128,127,128,127,128,127,128,128,127,128,127,128,127,
128,128,127,128,127,128,127,128,128,127,128,128,127,128,128,127,
128,128,127,128,128,127,128,127,128,127,128,127,128,128,128,128,
127,128,127,128,127,128,128,128,128,128,128,128,128,128,127,128,
127,128,127,128,128,127,128,127,128,128,128,127,128,127,128,127,
128,128,127,128,128,128,127,128,127,128,128,127,128,127,128,128,
128,128,128,127,128,127,127,128,127,128,127,128,128,128,127,128,
127,128,127,128,128,128,128,128,128,128,128,127,128,127,128,127,
128,127,128,128,128,127,128,127,128,127,128,127,128,127,128,128,
127,128,127,128,128,128,127,128,128,127,128,127,128,127,128,127,
128,127,128,128,127,128,127,128,127,128,127,128,127,128,128,127,
128,127,128,127,128,128,127,128,128,127,128,127,128,127,128,128,
127,128,127,128,127,127,128,127,128,128,127,128,127,128,128,128,
128,127,128,127,128,127,128,127,128,127,128,128,128,127,128,127,
128,128,127,128,127,128,128,127,128,127,128,127,128,127,128,127,
128,127,128,128,127,128,128,127,128,127,128,128,127,128,128,127,
128,128,127,128,127,128,127,128,127,128,127,128,127,128,127,128,
128,127,128,127,128,128,127,128,127,128,127,128,128,127,128,128,
127,128,127,128,128,127,128,127,128,127,128,127,128,127,128,127,
128,128,128,128,127,128,127,128,127,128,127,128,127,128,128,128,
127,128,128,127,128,127,128,128,127,128,128,127,128,127,128,127,
128,128,127,128,127,128,128,127,128,127,128,127,128,127,128,128,
128,127,128,128,128,128,127,128,128,127,128,127,128,127,128,127,
128,127,128,127,128,127,128,127,128,127,128,127,128,127,128,127,
128,128,128,128,127,128,127,128,127,128,127,128,127,128,127,128,
128,127,127,127,127,128,127,128,127,128,128,128,129,128,129,129,
129,129,129,129,130,129,129,129,130,128,129,127,125,126,113,108,
111,112,107,100,113,104,94,100,91,95,92,93,104,109,115,125,
131,139,147,154,161,167,177,179,190,196,194,198,196,191,187,176,
163,156,143,126,115,103,89,77,70,62,60,60,58,69,80,88,
103,121,136,154,170,181,197,206,207,211,211,201,188,176,157,139,
119,95,79,64,47,37,36,36,41,52,69,90,112,134,159,184,
201,215,227,232,230,221,206,188,165,138,111,86,63,42,28,22,
21,25,37,55,79,105,131,160,185,205,220,228,229,220,204,183,
158,130,101,75,53,36,24,21,24,34,49,70,96,123,149,172,
192,205,210,209,201,185,163,138,111,85,61,42,29,23,25,34,
50,72,97,123,148,170,187,197,200,196,185,167,145,120,95,72,
54,41,34,35,43,58,77,101,125,148,169,184,193,196,192,181,
165,145,123,101,81,66,55,51,53,61,75,93,113,134,153,168,
180,185,185,179,167,151,134,115,98,83,74,69,70,76,87,102,
119,135,151,164,173,177,175,169,159,145,130,114,101,89,83,80,
83,90,101,115,129,143,156,166,172,173,170,162,152,139,125,113,
102,94,90,91,95,103,114,127,139,150,159,165,167,165,159,150,
139,128,117,108,101,98,98,103,110,119,130,141,150,157,161,162,
159,153,145,135,126,116,109,105,104,106,111,119,128,138,147,154,
159,161,158,153,147,138,128,120,113,107,106,107,111,117,126,134,
142,149,153,155,153,150,144,137,130,123,117,113,112,113,116,120,
127,133,139,143,147,148,147,144,139,134,129,124,120,117,117,118,
120,124,129,134,136,139,141,140,137,135,132,127,124,122,121,120,
122,124,127,130,133,135,136,137,136,134,132,128,126,124,122,122,
122,124,126,129,131,134,135,136,135,134,132,129,126,124,122,121,
121,122,124,126,128,131,133,134,135,134,133,130,128,125,123,122,
121,122,123,125,127,128,131,132,133,132,131,131,129,127,125,124,
123,123,124,125,126,127,129,130,131,130,131,129,129,127,126,125,
124,125,124,125,126,127,128,129,129,130,129,128,127,127,126,126,
125,125,126,126,127,128,129,129,130,130,129,128,128,127,127,126,
125,126,126,126,127,128,128,129,128,129,129,128,127,128,127,128,
126,127,128,127,128,128,129,128,129,128,127,128,127,127,127,126,
127,127,128,129,128,129,128,129,128,127,128,127,126,127,126,127,
127,127,127,128,129,128,129,128,128,128,128,127,127,126,127,126};

bool led = false;
uint16_t i = 0;

void setup() {
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);

  //настройка шим на максимальную частоту
  TCCR0A = 0b00100011;
  TCCR0B = 0x01;
  OCR0B = 0;
}

void loop() {
  for(i=0;i<2562; i++){
    OCR0B = pgm_read_word(&pop[i]);
    //от задержки зависит скорость воспроизведения
    delayMicroseconds(60); 
  }
  digitalWrite(2, led);
  led = !led;
  delay(random(200,300));
}