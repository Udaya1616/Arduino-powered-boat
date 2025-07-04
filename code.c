# Arduino-powered-boat
// Define motor pins
#define LEFT_MOTOR_PIN1 2
#define LEFT_MOTOR_PIN2 3
#define RIGHT_MOTOR_PIN1 4
#define RIGHT_MOTOR_PIN2 5

// Define motor speeds
#define MAX_SPEED 255
#define BASE_SPEED 150

void setup() {
  // Set motor pins as output
  pinMode(LEFT_MOTOR_PIN1, OUTPUT);
  pinMode(LEFT_MOTOR_PIN2, OUTPUT);
  pinMode(RIGHT_MOTOR_PIN1, OUTPUT);
  pinMode(RIGHT_MOTOR_PIN2, OUTPUT);
}

void loop() {
  // Example: boat moves forward with both motors on full speed
  moveForward(MAX_SPEED);
}

void moveForward(int speed) {
  // Set left motor to move forward
  analogWrite(LEFT_MOTOR_PIN1, speed);
  analogWrite(LEFT_MOTOR_PIN2, 0);

  // Set right motor to move forward
  analogWrite(RIGHT_MOTOR_PIN1, speed);
  analogWrite(RIGHT_MOTOR_PIN2, 0);
}

