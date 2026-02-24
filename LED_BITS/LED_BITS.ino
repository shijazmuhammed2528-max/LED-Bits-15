int LED[]={18,19,22,23};

const int bit = 15 , ArrSize = 4;
int BitData[ArrSize];
void setup() {
  // put your setup code here, to run once:
    for(int i=0;i <= ArrSize ;i++)
      pinMode(LED[i],OUTPUT);
}

void loop() {
int temp;

  for(int i = 0 ; i < bit ; i++){
    temp=i;

      for(int j = 0; j < bit ; j++){
        BitData[j] = temp %2;
        temp = temp/2;
      }

      for(int j = 0 ; j < ArrSize ; j++)
        digitalWrite(LED[j], BitData[j]);

      delay(500);
  }


}
