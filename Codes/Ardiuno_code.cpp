

#include <SoftwareSerial.h>
#include <Servo.h>

Servo servo01;
Servo servo02;
Servo servo03;
Servo servo04;
Servo servo05;
Servo servo06;

int motor1_forward = A5;
int motor1_backward =A4;
int motor2_forward = 3;
int motor2_backward = 2;
int motor3_forward = A0;
int motor3_backward = A1;
int motor4_forward = A2;
int motor4_backward = A3;
int spee=4;
SoftwareSerial BluetoothSerial(0, 1); // Arduino(RX, TX) - HC-05 BluetoothSerial (TX, RX)

// Define the stepper motors and the pins the will use


int wheelSpeed = 100;


int servo1Pos, servo2Pos, servo3Pos, servo4Pos, servo5Pos, servo6Pos; // current position
int servo1PPos, servo2PPos, servo3PPos, servo4PPos, servo5PPos, servo6PPos; // previous position
int servo01SP[50], servo02SP[50], servo03SP[50], servo04SP[50], servo05SP[50], servo06SP[50]; // for storing positions/steps
int speedDelay = 20;
int index = 0;
int dataIn;
int m = 0;

void setup() {
  // Set initial seed values for the steppers
  pinMode(motor1_forward, OUTPUT);
  pinMode(motor1_backward, OUTPUT);
  pinMode(motor2_forward, OUTPUT);
  pinMode(motor2_backward, OUTPUT);
  pinMode(motor3_forward, OUTPUT);
  pinMode(motor3_backward, OUTPUT);
  pinMode(motor4_forward, OUTPUT);
  pinMode(motor4_backward, OUTPUT);
  pinMode(spee,OUTPUT); 
  analogWrite(spee, wheelSpeed);
  servo01.attach(6);
  servo02.attach(7);
  servo03.attach(12);
  servo04.attach(13);
  servo05.attach(9);
  servo06.attach(10);
//   BluetoothSerial.begin(9600); // Default baud rate of the BluetoothSerial module
  BluetoothSerial.setTimeout(5);
  delay(20);
//   BluetoothSerial.begin(9600);
 BluetoothSerial.begin(9600);

  // Initialize the software BluetoothSerial port for Bluetooth communication
//   Bluetooth.begin(9600);
  // Move robot arm to initial position
  // servo1PPos = 90;
  // servo01.write(servo1PPos);
  // servo2PPos = 100;
  // servo02.write(servo2PPos);
  // servo3PPos = 120;
  // servo03.write(servo3PPos);
  // servo4PPos = 95;
  // servo04.write(servo4PPos);
  // servo5PPos = 60;
  // servo05.write(servo5PPos);
  // servo6PPos = 110;
  // servo06.write(servo6PPos);
   
}

void loop() {
  // Check for incoming data
  if (BluetoothSerial.available() > 0) {
    
    dataIn = BluetoothSerial.read();  // Read the data
   

    if (dataIn == 0) {
      m = 0;
    }
    if (dataIn == 1) {
      m = 1;
    }
    if (dataIn == 2) {
      m = 2;
    }
    if (dataIn == 3) {
      m = 3;
    }
    if (dataIn == 4) {
      m = 4;
    }
    if (dataIn == 5) {
      m = 5;
    }
    if (dataIn == 6) {
      m = 6;
    }
    if (dataIn == 7) {
      m = 7;
    }
    if (dataIn == 8) {
      m = 8;
    }
    if (dataIn == 9) {
      m = 9;
    }
    if (dataIn == 10) {
      m = 10;
    }
    if (dataIn == 11) {
      m = 11;
    }
    if (dataIn == 12) {
      m = 12;
    }
    if (dataIn == 14) {
      m = 14;
    }
    if (dataIn == 16) {
      m = 16;
    }
    if (dataIn == 17) {
      m = 17;
    }
    if (dataIn == 18) {
      m = 18;
    }
    if (dataIn == 19) {
      m = 19;
    }
    if (dataIn == 20) {
      m = 20;
    }
    if (dataIn == 21) {
      m = 21;
    }
    if (dataIn == 22) {
      m = 22;
    }
    if (dataIn == 23) {
      m = 23;
    }
    if (dataIn == 24) {
      m = 24;
    }
    if (dataIn == 25) {
      m = 25;
    }
    if (dataIn == 26) {
      m = 26;
    }
    if (dataIn == 27) {
      m = 27;
    }

    // Move the Mecanum wheels platform
    if (m == 4) {
      moveSidewaysLeft();
      analogWrite(spee, wheelSpeed);
    }
    if (m == 5) {
      moveSidewaysRight();
      analogWrite(spee, wheelSpeed);
    }
    if (m == 2) {
      moveForward();
      analogWrite(spee, wheelSpeed);
    }
    if (m == 7) {
      moveBackward();
      analogWrite(spee, wheelSpeed);
    }
    if (m == 3) {
      moveRightForward();
      analogWrite(spee, wheelSpeed);
    }
    if (m == 1) {
      moveLeftForward();
      analogWrite(spee, wheelSpeed);
    }
    if (m == 8) {
      moveRightBackward();
      analogWrite(spee, wheelSpeed);
    }
    if (m == 6) {
      moveLeftBackward();
      analogWrite(spee, wheelSpeed);
    }
    if (m == 9) {
      rotateLeft();
      analogWrite(spee, wheelSpeed);
    }
    if (m == 10) {
      rotateRight();
      analogWrite(spee, wheelSpeed);
    }

    if (m == 0) {
      stopMoving();
    }

    // Mecanum wheels speed
    if (dataIn > 30 & dataIn < 100) {
      wheelSpeed = dataIn * 2;
    }

    // Move robot arm
    // Move servo 1 in positive direction
    while (m == 16) {
      if (BluetoothSerial.available() > 0) {
        m = BluetoothSerial.read();
      }
      servo01.write(servo1PPos);
      servo1PPos++;
      delay(speedDelay);
    }
    // Move servo 1 in negative direction
    while (m == 17) {
      if (BluetoothSerial.available() > 0) {
        m = BluetoothSerial.read();
      }
      servo01.write(servo1PPos);
      servo1PPos--;
      delay(speedDelay);
    }
    // Move servo 2
    while (m == 19) {
      if (BluetoothSerial.available() > 0) {
        m = BluetoothSerial.read();
      }
      servo02.write(servo2PPos);
      servo2PPos++;
      delay(speedDelay);
    }
    while (m == 18) {
      if (BluetoothSerial.available() > 0) {
        m = BluetoothSerial.read();
      }
      servo02.write(servo2PPos);
      servo2PPos--;
      delay(speedDelay);
    }
    // Move servo 3
    while (m == 20) {
      if (BluetoothSerial.available() > 0) {
        m = BluetoothSerial.read();
      }
      servo03.write(servo3PPos);
      servo3PPos++;
      delay(speedDelay);
    }
    while (m == 21) {
      if (BluetoothSerial.available() > 0) {
        m = BluetoothSerial.read();
      }
      servo03.write(servo3PPos);
      servo3PPos--;
      delay(speedDelay);
    }
    // Move servo 4
    while (m == 23) {
      if (BluetoothSerial.available() > 0) {
        m = BluetoothSerial.read();
      }
      servo04.write(servo4PPos);
      servo4PPos++;
      delay(speedDelay);
    }
    while (m == 22) {
      if (BluetoothSerial.available() > 0) {
        m = BluetoothSerial.read();
      }
      servo04.write(servo4PPos);
      servo4PPos--;
      delay(speedDelay);
    }
    // Move servo 5
    while (m == 25) {
      if (BluetoothSerial.available() > 0) {
        m = BluetoothSerial.read();
      }
      servo05.write(servo5PPos);
      servo5PPos++;
      delay(speedDelay);
    }
    while (m == 24) {
      if (BluetoothSerial.available() > 0) {
        m = BluetoothSerial.read();
      }
      servo05.write(servo5PPos);
      servo5PPos--;
      delay(speedDelay);
    }
    // Move servo 6
    while (m == 26) {
      if (BluetoothSerial.available() > 0) {
        m = BluetoothSerial.read();
      }
      servo6PPos++;
      servo06.write(servo6PPos);
      delay(speedDelay);
    }
    while (m == 27) {
      if (BluetoothSerial.available() > 0) {
        m = BluetoothSerial.read();
      }
      servo06.write(servo6PPos);
      servo6PPos--;
      delay(speedDelay);
    }

    // If arm speed slider is changed
    if (dataIn > 101 & dataIn < 250) {
      speedDelay = dataIn / 10; // Change servo speed (delay time)
    }

    // If button "SAVE" is pressed
   if (m == 12) {

//
     servo01SP[index] = servo1PPos;  // save position into the array
     servo02SP[index] = servo2PPos;
     servo03SP[index] = servo3PPos;
     servo04SP[index] = servo4PPos;
     servo05SP[index] = servo5PPos;
     servo06SP[index] = servo6PPos;
     index++;                        // Increase the array index
     m = 0;
   }

    // If button "RUN" is pressed
   if (m == 14) {
     runSteps();
//
     // If button "RESET" is pressed
     if (dataIn != 14) {
       stopMoving();
       memset(servo01SP, 0, sizeof(servo01SP)); // Clear the array data to 0
       memset(servo02SP, 0, sizeof(servo02SP));
       memset(servo03SP, 0, sizeof(servo03SP));
       memset(servo04SP, 0, sizeof(servo04SP));
       memset(servo05SP, 0, sizeof(servo05SP));
       memset(servo06SP, 0, sizeof(servo06SP));
       index = 0;  // Index to 0
     }
   }
  }
  
  
}
void moveForward() {
    digitalWrite(motor1_forward, HIGH);
    digitalWrite(motor1_backward, LOW);
    digitalWrite(motor2_forward, HIGH);
    digitalWrite(motor2_backward, LOW);
    digitalWrite(motor3_forward, HIGH);
    digitalWrite(motor3_backward, LOW);
    digitalWrite(motor4_forward, HIGH);
    digitalWrite(motor4_backward, LOW);
  
}
void moveBackward() {
    digitalWrite(motor1_forward, LOW);
    digitalWrite(motor1_backward, HIGH);
    digitalWrite(motor2_forward, LOW);
    digitalWrite(motor2_backward, HIGH);
    digitalWrite(motor3_forward, LOW);
    digitalWrite(motor3_backward, HIGH);
    digitalWrite(motor4_forward, LOW);
    digitalWrite(motor4_backward, HIGH);
}
void moveSidewaysRight() {
    digitalWrite(motor1_forward, HIGH);
    digitalWrite(motor1_backward, LOW);
    digitalWrite(motor2_forward, LOW);
    digitalWrite(motor2_backward, HIGH);
    digitalWrite(motor3_forward, LOW);
    digitalWrite(motor3_backward, HIGH );
    digitalWrite(motor4_forward, HIGH);
    digitalWrite(motor4_backward, LOW);
}
void moveSidewaysLeft() {
    digitalWrite(motor1_forward, LOW);
     digitalWrite(motor1_backward, HIGH);

     digitalWrite(motor2_forward, HIGH);
     digitalWrite(motor2_backward, LOW);

     digitalWrite(motor3_forward, HIGH);
     digitalWrite(motor3_backward, LOW);

     digitalWrite(motor4_forward, LOW);
     digitalWrite(motor4_backward, HIGH);
 
}
void rotateLeft() {
    digitalWrite(motor1_forward, LOW);
     digitalWrite(motor1_backward, HIGH);

     digitalWrite(motor2_forward, HIGH);
     digitalWrite(motor2_backward, LOW);

     digitalWrite(motor3_forward, LOW);
     digitalWrite(motor3_backward, HIGH);

     digitalWrite(motor4_forward, HIGH);
     digitalWrite(motor4_backward, LOW);    
}
void rotateRight() {
    digitalWrite(motor1_forward, HIGH);
    digitalWrite(motor1_backward, LOW);

    digitalWrite(motor2_forward, LOW);
    digitalWrite(motor2_backward, HIGH);

    digitalWrite(motor3_forward, HIGH);
    digitalWrite(motor3_backward, LOW);

    digitalWrite(motor4_forward, LOW);
    digitalWrite(motor4_backward, HIGH);
  
}
void moveRightForward() {
    digitalWrite(motor1_forward, HIGH);
    digitalWrite(motor1_backward, LOW);

    digitalWrite(motor2_forward, LOW);
    digitalWrite(motor2_backward, LOW);

    digitalWrite(motor3_forward, LOW);
    digitalWrite(motor3_backward, LOW);

    digitalWrite(motor4_forward, HIGH);
    digitalWrite(motor4_backward, LOW);
}
void moveRightBackward() {
    digitalWrite(motor1_forward, LOW);
    digitalWrite(motor1_backward, LOW);

    digitalWrite(motor2_forward, LOW);
    digitalWrite(motor2_backward, HIGH);

    digitalWrite(motor3_forward, LOW);
    digitalWrite(motor3_backward, HIGH);

    digitalWrite(motor4_forward, LOW);
    digitalWrite(motor4_backward, LOW);

}
void moveLeftForward() {
    digitalWrite(motor1_forward, LOW);
    digitalWrite(motor1_backward, LOW);
    digitalWrite(motor2_forward, HIGH);
    digitalWrite(motor2_backward, LOW);
    digitalWrite(motor3_forward, HIGH);
    digitalWrite(motor3_backward, LOW);
    digitalWrite(motor4_forward, LOW);
    digitalWrite(motor4_backward, LOW);
}
void moveLeftBackward() {
    digitalWrite(motor1_forward, LOW);
    digitalWrite(motor1_backward, HIGH);
    digitalWrite(motor2_forward, LOW);
    digitalWrite(motor2_backward, LOW);
    digitalWrite(motor3_forward, LOW);
    digitalWrite(motor3_backward, LOW);
    digitalWrite(motor4_forward, LOW);
    digitalWrite(motor4_backward, HIGH);
}
void stopMoving() {
    digitalWrite(motor1_forward, LOW);
    digitalWrite(motor1_backward, LOW);
    digitalWrite(motor2_forward, LOW);
    digitalWrite(motor2_backward, LOW);
    digitalWrite(motor3_forward, LOW);
    digitalWrite(motor3_backward, LOW);
    digitalWrite(motor4_forward, LOW);
    digitalWrite(motor4_backward, LOW);
}
//
//// Automatic mode custom function - run the saved steps
void runSteps() {
 while (dataIn != 13) {   // Run the steps over and over again until "RESET" button is pressed
   for (int i = 0; i <= index - 2; i++) {  // Run through all steps(index)
     if (BluetoothSerial.available() > 0) {      // Check for incomding data
       dataIn = BluetoothSerial.read();
       if ( dataIn == 15) {           // If button "PAUSE" is pressed
         while (dataIn != 14) {         // Wait until "RUN" is pressed again
           if (BluetoothSerial.available() > 0) {
             dataIn = BluetoothSerial.read();
             if ( dataIn == 13) {
               break;
             }
           }
         }
       }
       // If speed slider is changed
       if (dataIn > 100 & dataIn < 150) {
         speedDelay = dataIn / 10; // Change servo speed (delay time)
       }
       if (dataIn > 30 & dataIn < 100) {
         wheelSpeed = dataIn * 10;
         dataIn = 14;
       }



//      // Servo 1
     if (servo01SP[i] == servo01SP[i + 1]) {
     }
     if (servo01SP[i] > servo01SP[i + 1]) {
       for ( int j = servo01SP[i]; j >= servo01SP[i + 1]; j--) {
         servo01.write(j);
         delay(speedDelay);
       }
     }
     if (servo01SP[i] < servo01SP[i + 1]) {
       for ( int j = servo01SP[i]; j <= servo01SP[i + 1]; j++) {
         servo01.write(j);
         delay(speedDelay);
       }
     }

     // Servo 2
     if (servo02SP[i] == servo02SP[i + 1]) {
     }
     if (servo02SP[i] > servo02SP[i + 1]) {
       for ( int j = servo02SP[i]; j >= servo02SP[i + 1]; j--) {
         servo02.write(j);
         delay(speedDelay);
       }
     }
     if (servo02SP[i] < servo02SP[i + 1]) {
       for ( int j = servo02SP[i]; j <= servo02SP[i + 1]; j++) {
         servo02.write(j);
         delay(speedDelay);
       }
     }

     // Servo 3
     if (servo03SP[i] == servo03SP[i + 1]) {
     }
     if (servo03SP[i] > servo03SP[i + 1]) {
       for ( int j = servo03SP[i]; j >= servo03SP[i + 1]; j--) {
         servo03.write(j);
         delay(speedDelay);
       }
     }
     if (servo03SP[i] < servo03SP[i + 1]) {
       for ( int j = servo03SP[i]; j <= servo03SP[i + 1]; j++) {
         servo03.write(j);
         delay(speedDelay);
       }
     }

     // Servo 4
     if (servo04SP[i] == servo04SP[i + 1]) {
     }
     if (servo04SP[i] > servo04SP[i + 1]) {
       for ( int j = servo04SP[i]; j >= servo04SP[i + 1]; j--) {
         servo04.write(j);
         delay(speedDelay);
       }
     }
     if (servo04SP[i] < servo04SP[i + 1]) {
       for ( int j = servo04SP[i]; j <= servo04SP[i + 1]; j++) {
         servo04.write(j);
         delay(speedDelay);
       }
     }

     // Servo 5
     if (servo05SP[i] == servo05SP[i + 1]) {
     }
     if (servo05SP[i] > servo05SP[i + 1]) {
       for ( int j = servo05SP[i]; j >= servo05SP[i + 1]; j--) {
         servo05.write(j);
         delay(speedDelay);
       }
     }
     if (servo05SP[i] < servo05SP[i + 1]) {
       for ( int j = servo05SP[i]; j <= servo05SP[i + 1]; j++) {
         servo05.write(j);
         delay(speedDelay);
       }
     }

     // Servo 6
     if (servo06SP[i] == servo06SP[i + 1]) {
     }
     if (servo06SP[i] > servo06SP[i + 1]) {
       for ( int j = servo06SP[i]; j >= servo06SP[i + 1]; j--) {
         servo06.write(j);
         delay(speedDelay);
       }
     }
     if (servo06SP[i] < servo06SP[i + 1]) {
       for ( int j = servo06SP[i]; j <= servo06SP[i + 1]; j++) {
         servo06.write(j);
         delay(speedDelay);
       }
     }
   }
 }
}
}
