#ifndef PrinterExtensionShejan_h
#define PrinterExtensionShejan_h
#include "Arduino.h"
class PrinterExtensionShejan
{
	public:
		PrinterExtensionShejan(int baud); //set the output properly
		void printLog(String s);
		void printError(String s);
		void printLogTime(String s);
		void printErrorTime(String s);
};
#endif