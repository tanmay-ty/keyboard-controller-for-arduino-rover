int enablePin2 = 9;
int in1Pin22 = 7;      //right motor 1
int in2Pin21 = 8;

int enablePin1 =3 ;
int in1Pin12 = 4 ;    //left motor 1
int in2Pin11 = 2 ;

int enable2Pin2 = 11;
int in21Pin22 = 10;  //right motor 2
int in22Pin21 = 12;

int enable1Pin1 = 6;
int in11Pin12 = 13;  //left motor 2
int in12Pin11 = 5;

int val,time=50;
 
void setup()
{
   Serial.begin(9600);
  pinMode(in2Pin11, OUTPUT);
  pinMode(in1Pin12, OUTPUT);
  pinMode(enablePin1, OUTPUT);
  pinMode(in2Pin21, OUTPUT);
  pinMode(in1Pin22, OUTPUT);
  pinMode(enable2Pin2, OUTPUT);
  pinMode(in12Pin11, OUTPUT);
  pinMode(in11Pin12, OUTPUT);
  pinMode(enable2Pin2, OUTPUT);
  pinMode(in22Pin21, OUTPUT);
  pinMode(in21Pin22, OUTPUT);
  pinMode(enablePin2, OUTPUT);
  Serial.println("press\n 8.foreward\n 4.left\n 6.right\n 2.reverse\n 3.brake\n 7.foreward_left\n 5.foreward_right\n 9.backward_left\n 1.backward_right\n");
 
  
}
 
void loop()
{
  Serial.flush();
  while (!Serial.available());
  {
    
    val=Serial.read();
    command(val);
    }
   // else
    //{
    //  brake;
   // }
    
   
  /*foreward();
  delay(2000);
  reverse();
  delay(2000);
  right();
  delay(2000);
  left();
  delay(2000);
  brake();
  delay(2000);*/
  
}
 
void foreward()
{
  analogWrite(enablePin2, 180 );
  digitalWrite(in2Pin21, LOW );
  digitalWrite(in1Pin22, HIGH);
  analogWrite(enablePin1, 200 );
  digitalWrite(in2Pin11, LOW);
  digitalWrite(in1Pin12, HIGH);
  
  analogWrite(enable2Pin2, 180 );
  digitalWrite(in22Pin21, LOW );
  digitalWrite(in21Pin22, HIGH);
  analogWrite(enable1Pin1, 225 );
  digitalWrite(in12Pin11, LOW);
  digitalWrite(in11Pin12, HIGH);
  delay(time);
  
  
}

void foreward_right()
{
  analogWrite(enablePin2, 80 );
  digitalWrite(in2Pin21, LOW );
  digitalWrite(in1Pin22, HIGH);
  analogWrite(enablePin1, 200 );
  digitalWrite(in2Pin11, LOW);
  digitalWrite(in1Pin12, HIGH);
  
  analogWrite(enable2Pin2, 80 );
  digitalWrite(in22Pin21, LOW );
  digitalWrite(in21Pin22, HIGH);
  analogWrite(enable1Pin1, 225 );
  digitalWrite(in12Pin11, LOW);
  digitalWrite(in11Pin12, HIGH);
  delay(time);
  
  
}

void foreward_left()
{
  analogWrite(enablePin2, 180 );
  digitalWrite(in2Pin21, LOW );
  digitalWrite(in1Pin22, HIGH);
  analogWrite(enablePin1, 80 );
  digitalWrite(in2Pin11, LOW);
  digitalWrite(in1Pin12, HIGH);
  
  analogWrite(enable2Pin2, 180 );
  digitalWrite(in22Pin21, LOW );
  digitalWrite(in21Pin22, HIGH);
  analogWrite(enable1Pin1, 80 );
  digitalWrite(in12Pin11, LOW);
  digitalWrite(in11Pin12, HIGH);
  delay(time);
  
  
}

void reverse()
{
  analogWrite(enablePin2, 180 );
  digitalWrite(in2Pin21, HIGH );
  digitalWrite(in1Pin22, LOW);
  analogWrite(enablePin1, 200 );
  digitalWrite(in2Pin11, HIGH);
  digitalWrite(in1Pin12, LOW);

  analogWrite(enable2Pin2, 180 );
  digitalWrite(in22Pin21, HIGH);
  digitalWrite(in21Pin22, LOW);
  analogWrite(enable1Pin1, 225 );
  digitalWrite(in12Pin11, HIGH);
  digitalWrite(in11Pin12, LOW);
  
  delay(time);
}

void reverse_right()
{
  analogWrite(enablePin2, 80 );
  digitalWrite(in2Pin21, HIGH );
  digitalWrite(in1Pin22, LOW);
  analogWrite(enablePin1, 200 );
  digitalWrite(in2Pin11, HIGH);
  digitalWrite(in1Pin12, LOW);

  analogWrite(enable2Pin2, 80 );
  digitalWrite(in22Pin21, HIGH);
  digitalWrite(in21Pin22, LOW);
  analogWrite(enable1Pin1, 225 );
  digitalWrite(in12Pin11, HIGH);
  digitalWrite(in11Pin12, LOW);
  
  delay(time);
}

void reverse_left()
{
  analogWrite(enablePin2, 180 );
  digitalWrite(in2Pin21, HIGH );
  digitalWrite(in1Pin22, LOW);
  analogWrite(enablePin1, 80 );
  digitalWrite(in2Pin11, HIGH);
  digitalWrite(in1Pin12, LOW);

  analogWrite(enable2Pin2, 180 );
  digitalWrite(in22Pin21, HIGH);
  digitalWrite(in21Pin22, LOW);
  analogWrite(enable1Pin1, 80 );
  digitalWrite(in12Pin11, HIGH);
  digitalWrite(in11Pin12, LOW);
  
  delay(time);
}

void right()
{
  analogWrite(enablePin2, 200 );
  digitalWrite(in2Pin21, HIGH );
  digitalWrite(in1Pin22, LOW);
  analogWrite(enablePin1, 200 );
  digitalWrite(in2Pin11, LOW);
  digitalWrite(in1Pin12, HIGH);

  analogWrite(enable2Pin2, 200 );
  digitalWrite(in22Pin21, HIGH );
  digitalWrite(in21Pin22, LOW);
  analogWrite(enable1Pin1, 225 );
  digitalWrite(in12Pin11, LOW);
  digitalWrite(in11Pin12, HIGH);
  
  delay(time);
}

void left()
{
  analogWrite(enablePin2, 200 );
  digitalWrite(in2Pin21, LOW );
  digitalWrite(in1Pin22, HIGH);
  analogWrite(enablePin1, 200 );
  digitalWrite(in2Pin11, HIGH);
  digitalWrite(in1Pin12, LOW);

  analogWrite(enable2Pin2, 200 );
  digitalWrite(in22Pin21, LOW );
  digitalWrite(in21Pin22, HIGH);
  analogWrite(enable1Pin1, 225 );
  digitalWrite(in12Pin11, HIGH);
  digitalWrite(in11Pin12, LOW);
  
  delay(time);
}

void brake()
{
  analogWrite(enablePin2, 200 );
  digitalWrite(in2Pin21, HIGH );
  digitalWrite(in1Pin22, HIGH);
  analogWrite(enablePin1, 200 );
  digitalWrite(in2Pin11, HIGH);
  digitalWrite(in1Pin12, HIGH);
  analogWrite(enable2Pin2, 200 );
  digitalWrite(in22Pin21, HIGH);
  digitalWrite(in21Pin22, HIGH);
  analogWrite(enable1Pin1, 225 );
  digitalWrite(in12Pin11, HIGH);
  digitalWrite(in11Pin12, HIGH);
  
  delay(time);
}
void command(char val)
{
  Serial.print(val,DEC);
  switch(val)
   {
    case 53:foreward_right();break;
    case 55:foreward_left();break;
    case 57: reverse_right();break;
    case 49: reverse_left();break;
    case 56:foreward();//Serial.println("foreward");
    break;
    case 54:right();//Serial.println("right");
    break;
    case 52:left();//Serial.println("left");
    break;
    case 50: reverse();//Serial.println("reverse");
    break;
    case 51:brake();//Serial.println("brake");
    break;

    default: 
    Serial.println("wrong movement choice");
   }

}

