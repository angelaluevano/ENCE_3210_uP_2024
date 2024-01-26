/**
*@brief lab 1- question 7
*
*/

#define LED_RED 5
#define LED_GREEN 4
#define BUTTON_1 3
#define BUTTON_2 2
#define ARRAY_SIZE 10

int gArray_1[ARRAY_SIZE] ={1,2,3,4,5,1,2,3,4,5};
int gArray_2[ARRAY_SIZE] ={1,2,3,4,5,1,2,3,4,5};
int gResult[ARRAY_SIZE]={0};

enum Oper  {NONE, ADD, SUB, MULT};
int gOperation = NONE;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED_RED, OUTPUT);
pinMode(LED_GREEN, OUTPUT);
pinMode(BUTTON_1, INPUT);
pinMode(BUTTON_2, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//po

  //read. button 1
  if(digitalRead(BUTTON_1)==1){
    delay(300);
    //incrementgOperation
    gOperation++;

    if(gOperation>3){
      gOperation=1;
    }
    Serial.print("Operation: ");
    Serial.println(gOperation);

    digitalWrite(LED_RED, LOW);
    digitalWrite(LED_GREEN, LOW);

    switch(gOperation){
      
    }

  }

  if(digitalRead(Button_2)==HIGH){

  }


}
