/**
 * created by github.com/akbardhany
 * 02:30 AM - 01/05/2020
 */
int leda = 5; //deklarasi pin d5
int ledb = 18; //deklarasi pin d18
int ledc = 19; //deklarasi pin d19
int a = 500; //tunda 0.5s
int b = 200; //tunda 0.2s

void setup(){
  pinMode(leda, OUTPUT); //deklarasi pin out led merah
  pinMode(ledb, OUTPUT); //deklarasi pin out led kuning
  pinMode(ledc, OUTPUT); //deklarasi pin out led hijau
}

void loop(){
  for(int i=0;i<10;i++){
    digitalWrite(ledc, HIGH); //matikan led hijau
    delay(a); //tunda 0.5s
    digitalWrite(leda, LOW); //nyalakan led merah
    delay(a); //tunda 0.5s
    if(i > 4){
      digitalWrite(ledb, HIGH); //matikan led kuning
      delay(b); //tunda 0.2s
      digitalWrite(ledb, LOW); //nyalakan led kuning
      delay(b); //tunda 0.2s
    }
  }
  for(int x=0;x<10;x++){
    digitalWrite(leda, HIGH); //matikan led merah
    delay(a); //tunda 0.5s
    digitalWrite(ledc, LOW); //nyalakan led hijau
    delay(a); //tunda 0.5s
    if(x > 4){
      digitalWrite(ledb, HIGH); //matikan led kuning
      delay(b); //tunda 0.2s
      digitalWrite(ledb, LOW); //nyalakan led kuning
      delay(b); //tunda 0.2s
    }
  }
}
