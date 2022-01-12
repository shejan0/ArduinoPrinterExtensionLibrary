#include "PrinterExtensionShejan.h"
PrinterExtensionShejan::PrinterExtensionShejan(int baud)
{
	Serial.begin(baud);
	Serial.println("Initialized to "+baud);
}
void PrinterExtensionShejan::printLog(String s){
	Serial.println(s);
}
void PrinterExtensionShejan::printError(String s){
	Serial.print("ERROR: ");
	Serial.println(s);
}
void PrinterExtensionShejan::printLogTime(String s){
	Serial.print(millis());
	Serial.print(": ");
	Serial.println(s);
}
void PrinterExtensionShejan::printErrorTime(String s){
	Serial.print("ERROR: ");
	Serial.print(millis());
	Serial.print(": ");
	Serial.println(s);
}
