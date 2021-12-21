extern "C" // Extern C is used when we are using a funtion written in "C" language in a C++ code IDE.
{
  uint8_t temprature_sens_read(); // This function is written in C language
}

uint8_t temprature_sens_read();

void setup() {
  Serial.begin(115200);
}

void loop() {
  // Print temperature in Fahrenheit (by default)
  Serial.print("Temperature in degree Fahrenheit: ");
  Serial.print(temprature_sens_read());
  Serial.println(" F");

  // Convert temperature from Fahrenheit to Celsius
  Serial.print("Temperature in degree Celsius: ");
  Serial.print((temprature_sens_read() - 32) / 1.8);
  Serial.println(" C");

  Serial.println(" ");
  delay(1000);
}
