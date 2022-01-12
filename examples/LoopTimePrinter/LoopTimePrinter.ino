#include <PrinterExtensionShejan.h>
PrinterExtensionShejan printer(9600);
int i=0;
void setup() {
  printer.printLogTime("Started the program");
}

void loop() {
  printer.printErrorTime("COUNT: " + i);
}
