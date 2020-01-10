#include<LiquidCrystal.h>
LiquidCrystal lcd(8,7,6,5,4,2);

int switchPin =A4; 
int val = 0;
int counter = 0;
int currentState = 0;
int previousState = 0;
int bpm;
void setup() {
  lcd.begin(20,4);
pinMode(switchPin, OUTPUT);
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(A0,OUTPUT);
pinMode(A1,OUTPUT);
pinMode(A2,OUTPUT);
pinMode(A3,OUTPUT);

}

void loop() {
  digitalWrite(A3,HIGH);
  lcd.clear();
  lcd.print("bpm: ");
  lcd.print(bpm);
  
  delay(100);
int a=8;
val = digitalRead(switchPin);
 
if (val){ 
counter += 1;
}

delay(10);
Serial.println(counter);
delay(100);
int sensorValue=analogRead(A5);
if (sensorValue<=2*a){bpm=40;}
else if (sensorValue>2*a && sensorValue<=3*a){bpm=41;}
else if (sensorValue>3*a && sensorValue<=4*a){bpm=42;}
else if (sensorValue>4*a && sensorValue<=5*a){bpm=43;}
else if (sensorValue>5*a && sensorValue<=6*a){bpm=44;}
else if (sensorValue>6*a && sensorValue<=7*a){bpm=45;}
else if (sensorValue>7*a && sensorValue<=8*a){bpm=46;}
else if (sensorValue>8*a && sensorValue<=9*a){bpm=47;}
else if (sensorValue>9*a && sensorValue<=10*a){bpm=48;}
else if (sensorValue>10*a && sensorValue<11*a){bpm=49;}
else if (sensorValue>11*a && sensorValue<=12*a){bpm=50;}
else if (sensorValue>12*a && sensorValue<=13*a){bpm=51;}
else if (sensorValue>13*a && sensorValue<=14*a){bpm=52;}
else if (sensorValue>14*a && sensorValue<=15*a){bpm=53;}
else if (sensorValue>15*a && sensorValue<=16*a){bpm=54;}
else if (sensorValue>16*a && sensorValue<=17*a){bpm=55;}
else if (sensorValue>17*a && sensorValue<=18*a){bpm=56;}
else if (sensorValue>18*a && sensorValue<=19*a){bpm=57;}
else if (sensorValue>19*a && sensorValue<=20*a){bpm=58;}
else if (sensorValue>20*a && sensorValue<=21*a){bpm=59;}
else if (sensorValue>21*a && sensorValue<=22*a){bpm=60;}
else if (sensorValue>22*a && sensorValue<=23*a){bpm=61;}
else if (sensorValue>23*a && sensorValue<=24*a){bpm=62;}
else if (sensorValue>24*a && sensorValue<=25*a){bpm=63;}
else if (sensorValue>25*a && sensorValue<=26*a){bpm=64;}
else if (sensorValue>26*a && sensorValue<=27*a){bpm=65;}
else if (sensorValue>27*a && sensorValue<=28*a){bpm=66;}
else if (sensorValue>28*a && sensorValue<=29*a){bpm=67;}
else if (sensorValue>29*a && sensorValue<=30*a){bpm=68;}
else if (sensorValue>30*a && sensorValue<=31*a){bpm=69;}
else if (sensorValue>31*a && sensorValue<=32*a){bpm=70;}
else if (sensorValue>32*a && sensorValue<=33*a){bpm=71;}
else if (sensorValue>33*a && sensorValue<=34*a){bpm=72;}
else if (sensorValue>34*a && sensorValue<=35*a){bpm=73;}
else if (sensorValue>35*a && sensorValue<=36*a){bpm=74;}
else if (sensorValue>36*a && sensorValue<=37*a){bpm=75;}
else if (sensorValue>37*a && sensorValue<=38*a){bpm=76;}
else if (sensorValue>38*a && sensorValue<=39*a){bpm=77;}
else if (sensorValue>39*a && sensorValue<=40*a){bpm=78;}
else if (sensorValue>40*a && sensorValue<=41*a){bpm=79;}
else if (sensorValue>41*a && sensorValue<=42*a){bpm=80;}
else if (sensorValue>42*a && sensorValue<=43*a){bpm=81;}
else if (sensorValue>43*a && sensorValue<=44*a){bpm=82;}
else if (sensorValue>44*a && sensorValue<=45*a){bpm=83;}
else if (sensorValue>45*a && sensorValue<=46*a){bpm=84;}
else if (sensorValue>46*a && sensorValue<=47*a){bpm=85;}
else if (sensorValue>47*a && sensorValue<=48*a){bpm=86;}
else if (sensorValue>48*a && sensorValue<=49*a){bpm=87;}
else if (sensorValue>49*a && sensorValue<=50*a){bpm=88;}
else if (sensorValue>50*a && sensorValue<=51*a){bpm=89;}
else if (sensorValue>51*a && sensorValue<=52*a){bpm=90;}
else if (sensorValue>52*a && sensorValue<=53*a){bpm=91;}
else if (sensorValue>53*a && sensorValue<=54*a){bpm=92;}
else if (sensorValue>54*a && sensorValue<=55*a){bpm=93;}
else if (sensorValue>55*a && sensorValue<=56*a){bpm=94;}
else if (sensorValue>56*a && sensorValue<=57*a){bpm=95;}
else if (sensorValue>57*a && sensorValue<=58*a){bpm=96;}
else if (sensorValue>58*a && sensorValue<=59*a){bpm=97;}
else if (sensorValue>59*a && sensorValue<=60*a){bpm=98;}
else if (sensorValue>60*a && sensorValue<=61*a){bpm=99;}
else if (sensorValue>61*a && sensorValue<=62*a){bpm=100;}
else if (sensorValue>62*a && sensorValue<=63*a){bpm=101;}
else if (sensorValue>63*a && sensorValue<=64*a){bpm=102;}
else if (sensorValue>64*a && sensorValue<=65*a){bpm=103;}
else if (sensorValue>65*a && sensorValue<=66*a){bpm=104;}
else if (sensorValue>66*a && sensorValue<=67*a){bpm=105;}
else if (sensorValue>67*a && sensorValue<=68*a){bpm=106;}
else if (sensorValue>68*a && sensorValue<=69*a){bpm=107;}
else if (sensorValue>69*a && sensorValue<=70*a){bpm=108;}
else if (sensorValue>70*a && sensorValue<=71*a){bpm=109;}
else if (sensorValue>71*a && sensorValue<=72*a){bpm=110;}
else if (sensorValue>72*a && sensorValue<=73*a){bpm=111;}
else if (sensorValue>73*a && sensorValue<=74*a){bpm=112;}
else if (sensorValue>74*a && sensorValue<=75*a){bpm=113;}
else if (sensorValue>75*a && sensorValue<=76*a){bpm=114;}
else if (sensorValue>76*a && sensorValue<=77*a){bpm=115;}
else if (sensorValue>77*a && sensorValue<=78*a){bpm=116;}
else if (sensorValue>78*a && sensorValue<=79*a){bpm=117;}
else if (sensorValue>79*a && sensorValue<=80*a){bpm=118;}
else if (sensorValue>80*a && sensorValue<=81*a){bpm=119;}
else if (sensorValue>81*a && sensorValue<=82*a){bpm=120;}
else if (sensorValue>82*a && sensorValue<=83*a){bpm=121;}
else if (sensorValue>83*a && sensorValue<=84*a){bpm=122;}
else if (sensorValue>84*a && sensorValue<=85*a){bpm=123;}
else if (sensorValue>85*a && sensorValue<=86*a){bpm=124;}
else if (sensorValue>86*a && sensorValue<=87*a){bpm=125;}
else if (sensorValue>87*a && sensorValue<=88*a){bpm=126;}
else if (sensorValue>88*a && sensorValue<=89*a){bpm=127;}
else if (sensorValue>90*a && sensorValue<=91*a){bpm=128;}
else if (sensorValue>91*a && sensorValue<=92*a){bpm=129;}
else if (sensorValue>92*a && sensorValue<=93*a){bpm=130;}
else if (sensorValue>93*a && sensorValue<=94*a){bpm=131;}
else if (sensorValue>94*a && sensorValue<=95*a){bpm=132;}
else if (sensorValue>95*a && sensorValue<=96*a){bpm=133;}
else if (sensorValue>96*a && sensorValue<=97*a){bpm=134;}
else if (sensorValue>97*a && sensorValue<=98*a){bpm=135;}
else if (sensorValue>98*a && sensorValue<=99*a){bpm=137;}
else if (sensorValue>99*a && sensorValue<=100*a){bpm=138;}
else if (sensorValue>100*a && sensorValue<=101*a){bpm=139;}
else if (sensorValue>101*a && sensorValue<=102*a){bpm=140;}
else if (sensorValue>102*a && sensorValue<=103*a){bpm=141;}
else if (sensorValue>103*a && sensorValue<=104*a){bpm=142;}
else if (sensorValue>104*a && sensorValue<=105*a){bpm=143;}
else if (sensorValue>105*a && sensorValue<=106*a){bpm=144;}
else if (sensorValue>106*a && sensorValue<=107*a){bpm=145;}
else if (sensorValue>107*a && sensorValue<=108*a){bpm=146;}
else if (sensorValue>108*a && sensorValue<=109*a){bpm=147;}
else if (sensorValue>109*a && sensorValue<=110*a){bpm=148;}
else if (sensorValue>110*a && sensorValue<=111*a){bpm=149;}
else if (sensorValue>111*a && sensorValue<=112*a){bpm=150;}
else if (sensorValue>112*a && sensorValue<=113*a){bpm=151;}
else if (sensorValue>113*a && sensorValue<=114*a){bpm=152;}
else if (sensorValue>114*a && sensorValue<=115*a){bpm=153;}
else if (sensorValue>115*a && sensorValue<=116*a){bpm=154;}
else if (sensorValue>116*a && sensorValue<=117*a){bpm=155;}
else if (sensorValue>117*a && sensorValue<=118*a){bpm=156;}
else if (sensorValue>118*a && sensorValue<=119*a){bpm=157;}
else if (sensorValue>119*a && sensorValue<=120*a){bpm=158;}
else if (sensorValue>120*a && sensorValue<=121*a){bpm=159;}
else if (sensorValue>121*a && sensorValue<=122*a){bpm=160;}
else if (sensorValue>122*a && sensorValue<=123*a){bpm=161;}
else if (sensorValue>123*a && sensorValue<=124*a){bpm=162;}
else if (sensorValue>124*a && sensorValue<=125*a){bpm=163;}
else if (sensorValue>125*a && sensorValue<=126*a){bpm=164;}
else if (sensorValue>126*a && sensorValue<=127*a){bpm=165;}
else if (sensorValue>127*a && sensorValue<=128*a){bpm=166;}
counter=counter%7;
//digitalWrite(13,HIGH);delay(sensorValue/60);digitalWrite(13,LOW);delay(sensorValue/60);
//digitalWrite(12,HIGH);delay(sensorValue/60);digitalWrite(12,LOW);delay(sensorValue/60);
//digitalWrite(11,HIGH);delay(sensorValue/60);digitalWrite(11,LOW);delay(sensorValue/60);
//digitalWrite(10,HIGH);delay(sensorValue/60);digitalWrite(10,LOW);delay(sensorValue/60);
//digitalWrite(9,HIGH);delay(sensorValue/60);digitalWrite(9,LOW);delay(sensorValue/60);
//digitalWrite(A0,HIGH);delay(sensorValue/60);digitalWrite(A0,LOW);delay(sensorValue/60);
//digitalWrite(A1,HIGH);delay(sensorValue/60);digitalWrite(A1,LOW);delay(sensorValue/60);
//digitalWrite(A2,HIGH);delay(sensorValue/60);digitalWrite(A2,LOW);delay(sensorValue/60);
if(counter==0){
digitalWrite(13,HIGH);delay(30000/bpm);digitalWrite(13,LOW);delay(30000/bpm);
digitalWrite(12,HIGH);delay(30000/bpm);digitalWrite(12,LOW);delay(30000/bpm);
}
else if(counter==1){
digitalWrite(13,HIGH);delay(30000/bpm);digitalWrite(13,LOW);delay(30000/bpm);
digitalWrite(12,HIGH);delay(30000/bpm);digitalWrite(12,LOW);delay(30000/bpm);
digitalWrite(11,HIGH);delay(30000/bpm);digitalWrite(11,LOW);delay(30000/bpm);
}
else if(counter==2){
digitalWrite(13,HIGH);delay(30000/bpm);digitalWrite(13,LOW);delay(30000/bpm);
digitalWrite(12,HIGH);delay(30000/bpm);digitalWrite(12,LOW);delay(30000/bpm);
digitalWrite(11,HIGH);delay(30000/bpm);digitalWrite(11,LOW);delay(30000/bpm);
digitalWrite(10,HIGH);delay(30000/bpm);digitalWrite(10,LOW);delay(30000/bpm);
}
else if(counter==3){
digitalWrite(13,HIGH);delay(30000/bpm);digitalWrite(13,LOW);delay(30000/bpm);
digitalWrite(12,HIGH);delay(30000/bpm);digitalWrite(12,LOW);delay(30000/bpm);
digitalWrite(11,HIGH);delay(30000/bpm);digitalWrite(11,LOW);delay(30000/bpm);
digitalWrite(10,HIGH);delay(30000/bpm);digitalWrite(10,LOW);delay(30000/bpm);
digitalWrite(9,HIGH);delay(30000/bpm);digitalWrite(9,LOW);delay(30000/bpm);
}
else if(counter==4){
digitalWrite(13,HIGH);delay(30000/bpm);digitalWrite(13,LOW);delay(30000/bpm);
digitalWrite(12,HIGH);delay(30000/bpm);digitalWrite(12,LOW);delay(30000/bpm);
digitalWrite(11,HIGH);delay(30000/bpm);digitalWrite(11,LOW);delay(30000/bpm);
digitalWrite(10,HIGH);delay(30000/bpm);digitalWrite(10,LOW);delay(30000/bpm);
digitalWrite(9,HIGH);delay(30000/bpm);digitalWrite(9,LOW);delay(30000/bpm);
digitalWrite(A0,HIGH);delay(30000/bpm);digitalWrite(A0,LOW);delay(30000/bpm);}
else if  (counter==5){
digitalWrite(13,HIGH);delay(30000/bpm);digitalWrite(13,LOW);delay(30000/bpm);
digitalWrite(12,HIGH);delay(30000/bpm);digitalWrite(12,LOW);delay(30000/bpm);
digitalWrite(11,HIGH);delay(30000/bpm);digitalWrite(11,LOW);delay(30000/bpm);
digitalWrite(10,HIGH);delay(30000/bpm);digitalWrite(10,LOW);delay(30000/bpm);
digitalWrite(9,HIGH);delay(30000/bpm);digitalWrite(9,LOW);delay(30000/bpm);
digitalWrite(A0,HIGH);delay(30000/bpm);digitalWrite(A0,LOW);delay(30000/bpm);
digitalWrite(A1,HIGH);delay(30000/bpm);digitalWrite(A1,LOW);delay(30000/bpm);

}
else if (counter==6){
digitalWrite(13,HIGH);delay(30000/bpm);digitalWrite(13,LOW);delay(30000/bpm);
digitalWrite(12,HIGH);delay(30000/bpm);digitalWrite(12,LOW);delay(30000/bpm);
digitalWrite(11,HIGH);delay(30000/bpm);digitalWrite(11,LOW);delay(30000/bpm);
digitalWrite(10,HIGH);delay(30000/bpm);digitalWrite(10,LOW);delay(30000/bpm);
digitalWrite(9,HIGH);delay(30000/bpm);digitalWrite(9,LOW);delay(30000/bpm);
digitalWrite(A0,HIGH);delay(30000/bpm);digitalWrite(A0,LOW);delay(30000/bpm);
digitalWrite(A1,HIGH);delay(30000/bpm);digitalWrite(A1,LOW);delay(30000/bpm);
digitalWrite(A2,HIGH);delay(30000/bpm);digitalWrite(A2,LOW);delay(30000/bpm);
digitalWrite(5,HIGH);delay(30000/bpm);digitalWrite(5,LOW);delay(30000/bpm);
}














  
}
