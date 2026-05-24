int rPin=9;
int gPin=10;
int yPin=11;
int myNum;
String myColour;
String msg="Which Colour do you want?";
String msg1="Chosen Colour: ";
String msg2="How Many Blinks?";
String msg3="Amount of Blinks: ";
String falseColour="Please choose between the colours Red/Green/Yellow";
int shortDt=250;
int longDt=1000;
int j;

void setup() {
  pinMode(rPin,OUTPUT);
  pinMode(gPin,OUTPUT);
  pinMode(yPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(rPin,LOW);
  digitalWrite(gPin,LOW);
  digitalWrite(yPin,LOW);
  Serial.println(msg);

  while(Serial.available()==0){

  }
  myColour=Serial.readString();
  Serial.print(msg1);
  Serial.println(myColour);
  Serial.println(msg2);
  
  while(Serial.available()==0){

  }
  myNum=Serial.parseInt();
  Serial.print(msg3);
  Serial.println(myNum);

  if(myColour=="red" || myColour=="Red" || myColour=="RED"){
    for(j=1; j<=myNum; j=j+1){
    digitalWrite(rPin,HIGH);
    delay(shortDt);
    digitalWrite(rPin,LOW);
    delay(shortDt);
    }
  }
  else if(myColour=="yellow" || myColour=="Yellow" || myColour=="YELLOW"){
    for(j=1; j<=myNum; j=j+1){
    digitalWrite(yPin,HIGH);
    delay(shortDt);
    digitalWrite(yPin,LOW);
    delay(shortDt);
    }
  }
  else if(myColour=="green" || myColour=="Green" || myColour=="GREEN"){
    for(j=1; j<=myNum; j=j+1){
    digitalWrite(gPin,HIGH);
    delay(shortDt);
    digitalWrite(gPin,LOW);
    delay(shortDt);
    }
  }
  else{
    Serial.println(falseColour);
  }
  delay(longDt);
}
