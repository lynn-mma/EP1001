import controlP5.*;             //import ControlP5 Library
import processing.serial.*;

Serial port;

ControlP5 cp5;                  //create ControlP5 object
PFont font;

void setup(){ 
  size(300,500);                //window size, (width, height)
  
  printArray(Serial.list());    //prints all available serial ports
  
  port = new Serial(this, "COM8", 9600); //arduino pro micro connected to com 8
  
  cp5 = new ControlP5(this);
  font = createFont("calibri light", 20); // custom fonts
  
  cp5.addButton("green")         //"red" is the name of button
  .setPosition(100, 50)         //X and Y coordinates of upper left corner of the button 
  .setSize(100, 80)             // (width, height)
  .setFont(font);
  ;
  
  cp5.addButton("yellow")       //"red" is the name of button
  .setPosition(100, 150)        //X and Y coordinates of upper left corner of the button 
  .setSize(100, 80)             // (width, height)
  .setFont(font);
  ;
  
  cp5.addButton("red")          //"red" is the name of button
  .setPosition(100, 250)        //X and Y coordinates of upper left corner of the button 
  .setSize(100, 80)             // (width, height)
  .setFont(font);
  ;
  
  cp5.addButton("alloff")      //"red" is the name of button
  .setPosition(100, 350)        //X and Y coordinates of upper left corner of the button 
  .setSize(100, 80)             // (width, height)
  .setFont(font);
  ;
  
  
}

void draw(){
  background(124,176,198);      //background color of window, (r,g,b) from 0-255
  fill (90, 90, 255);           //text color (r,g,b)
  text("LED CONTROL", 100, 30); // ("text", X coordinate, Y coordinate)
  
}

void green(){
  port.write('g');
}

void yellow(){
  port.write('y');
}

void red(){
  port.write('r');
}

void alloff(){
  port.write('f');
}
