#include <Arduino.h>
#line 1 "c:\\Users\\josee\\Documents\\Arduino\\Bluetooth\\BTLED_PORJECT\\bluetooth.ino"
String code = "";
#line 2 "c:\\Users\\josee\\Documents\\Arduino\\Bluetooth\\BTLED_PORJECT\\bluetooth.ino"
void setup();
#line 9 "c:\\Users\\josee\\Documents\\Arduino\\Bluetooth\\BTLED_PORJECT\\bluetooth.ino"
void loop();
#line 2 "c:\\Users\\josee\\Documents\\Arduino\\Bluetooth\\BTLED_PORJECT\\bluetooth.ino"
void setup()
{
	Serial.begin(9600);
    Serial1.begin(9600);
    Serial.println("System Online");
}

void loop()
{
	if (Serial1.available())
    {
        char c;
        while ()
        {
            c=Serial1.read();
            if ((c!='\n')&&(c!='\r'))
            {
                /* code */
            }
            
        }
<<<<<<< HEAD
        Serial.println("codigo obtenido --------->   ");
        Serial.println(code);
=======
>>>>>>> parent of a2b9fcc (area de trabajo vscode)
        
    }
    
}

