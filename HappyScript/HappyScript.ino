/*
 * Idhar bohot danger hai , bole toh sambhal ke
 * kch bhi karne ka , nahin toh pehle computer se 
 * haath dhone ka phir dettol se.
 * #StayHomeStaySafe -Munna Bhai 
 */
/*
 * Majak kar raha the main , 
 * jyada se jyada ek do file delete hojayega
 * bas aur kch nahin.
 */
/*%%%%%Ab kaam ki baat karte apun log%%%%%
 * This is a harmless demo code which just opens
 * up a bunch of command prompts and browser tabs
 * just to demonstrate power of USB HID devices like
 * (drum rolls)(playing we will rock you)(Enters)
 * -- "Arduino Leonardo" (ta da)
 */
//Adha page ka to comment likh diya main
//okay to next...   
//Get Leonardo's Keyboard library
#include "Keyboard.h"
//Delay constants
#define shortDelay 100
#define defaultDelay 200
#define longDelay 400
#define longerDelay 600
#define longestDelay 2000
#define longestSeBhiLongerDelay 8000
//Delays give device the time to react
#define GUI KEY_LEFT_GUI 
//GUI --> Window Key
#define ENTER KEY_RETURN
//Enter Key

//String Array to launch prompts in different colors
char *cmdColor[] = {"cmd /T:20","cmd /T:42",
                    "cmd /T:60","cmd /T:19",
                    "cmd /T:A4","cmd /T:72",
                    "cmd /T:C6","cmd /T:E2",
                    "cmd /T:BF","cmd /T:51"}; 
//Button for switching execution ON/OFF
const int buttonPin1 = 4;  
const int buttonPin2 = 5;

void setup() {
  // make the button1 pin an input:
  pinMode(buttonPin1, INPUT_PULLUP);
  // make the button2 pin an output:
  pinMode(buttonPin2, OUTPUT);
  digitalWrite(buttonPin2,LOW);
  
  // initialize control over the keyboard:
  Keyboard.begin();
  //If button is ON go to sleep and wait to be programmed
  if(digitalRead(buttonPin1)==LOW){
    Keyboard.end();
    //End control over keyboard
    while(1);
    //Infinite loop
  }
  //This function is the real deal
  script();
  GoToSleep();
  //Naam se hi samajh jao
}

void loop() {
  //Abhi iska jaroorat nahin
}

void script(){
  //wait for the device to be ready
  delay(longerDelay);
  //do a rick roll(Don't know? - google RickRolling)
  Keyboard.press(GUI);
  delay(shortDelay);
  Keyboard.press('r');
  //Launch run Dialog
  delay(shortDelay);
  Keyboard.releaseAll();
  //Release pressed keys
  Keyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  delay(defaultDelay);
  //wait for the link to be typed
  Keyboard.press(ENTER);
  //Enter dabane ka
  Keyboard.release(ENTER);
  //Enter Chodhne ka
  delay(longerDelay);
  delay(longestSeBhiLongerDelay);
  //video dekhte kya thoda ?
  //nahin nahin hackor apun
  //baad mein...

  /*
   * Yeh 'for' loop ka kya udhar upar apun log array 
   * define kiye the na wahi ek ek kar sabko goli mar do.
   * Aree matlab ek ek kar ke sab execute karne ka
   * Movie ka dialogue nikal jaata hai kabhi 
   * kabhi(Embarrased Emoji).
   */
  for(int i = 0;i<10;i++){
    Keyboard.press(GUI);
    //Yaad hai na sabko 
    delay(shortDelay);
    //pehle window dabane ka
    Keyboard.press('r');
    //phir 'r' dabane ka
    delay(shortDelay);
    Keyboard.releaseAll();
    //phir sab chodh dene ka(:Cool Face Emoji)
    Keyboard.print(cmdColor[i]);
    delay(shortDelay);
    //Pura rangoli bana dene ka
    Keyboard.press(ENTER);
    Keyboard.release(ENTER);
    //Isse khaali 'Enter' key release hoyenga
    delay(longDelay);
    Keyboard.print("tree");
    //This command just launches a tree of all files
    //Isse feel ayega
    //Bole toh pura hackor type dikhega
    //Lekin sab fake hai (:Smirk Emoji)
    delay(longDelay);
    Keyboard.press(ENTER);
    Keyboard.release(ENTER);
    //Yaad hai to 'press' matlab dabao
    //'release' matlab....samjhdar to hai hi tmlog
    delay(longerDelay);
    //Taaki dikhe bhi ki kya ho raha
  }//Ab command prompt wala game khatam
  //Ab kch different karte hain
  Keyboard.press(GUI);
  delay(shortDelay);
  Keyboard.press('r');
  delay(shortDelay);
  Keyboard.releaseAll();
  Keyboard.print("https://sensorstechforum.com/wp-content/uploads/2017/10/stf-magic-ransomware-virus-background-image-youve-been-hacked.png");
  //Isse kya mast wala photo khulega "You've been hacked" likha hua
  delay(shortDelay);
  Keyboard.press(ENTER);
  Keyboard.release(ENTER);
  //Remember??
  //Haan ab lagta hai smajh rahe tmlog
  delay(longerDelay);
  Keyboard.press(KEY_F11);
  //Isse kya browser fullscreen ho jayega
  Keyboard.release(KEY_F11);
  delay(longestDelay);
  //Kyunki bunty ka internet bhi slow hai

  
  Keyboard.press(GUI);
  delay(shortDelay);
  Keyboard.press('r');
  delay(shortDelay);
  Keyboard.releaseAll();
  Keyboard.print("https://giphy.com/gifs/scary-female-6kwZe7EbKLKEg/fullscreen");
  delay(shortDelay);
  //Shh.. waali budhiya aayegi idhar se
  //Thoda darane ka logon ko
  Keyboard.press(ENTER);
  Keyboard.release(ENTER);
  delay(longerDelay);
  delay(longestSeBhiLongerDelay);
  delay(longestSeBhiLongerDelay);
  //Kyunki old hai na load hone mein time lagega(ROFL Emoji)

  
  Keyboard.press(GUI);
  delay(shortDelay);
  Keyboard.press('r');
  delay(longDelay);
  Keyboard.releaseAll();
  Keyboard.print("https://giphy.com/gifs/creepy-scary-night-d9HAXiVeBCpZS/fullscreen");
  //Wolf wala gif aayega isse
  delay(shortDelay);
  Keyboard.press(ENTER);
  Keyboard.release(ENTER);
  delay(longerDelay);
  delay(longestSeBhiLongerDelay);
  //Isko bhi load hone ka time dete..
  //20G kab aayega re ??
}
/*
 * Yeh function basically execution kahtam karke
 * Arduino ko infinite loop mein phansa deta hai,
 * abhi ke liye itna hi janne ka.
 */
void GoToSleep(){
  Keyboard.end();
    while(1);
}
//GoToSleep() isn't imporatant here but will be in future.

//Bas ab khatam
//Packup
//Sab apne apne kaam pe jao
//Movie chal raha hai kya idhar ??
