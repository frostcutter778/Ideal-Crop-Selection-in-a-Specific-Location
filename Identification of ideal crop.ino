including dht sensor library
including adafruit libraries
initialize SensorPin A3         
initialize avgValue;
initialize b,buf[10],temp,R0,hum,tempa,chk;
initialize DHTPIN A1        
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  start arduino at 9600 baud;

  //Gas Sensor
    initialize sensorValue;
    initialize gas=0.0;
    loop iterating 20 times
      sensorValue = analogRead(A0);
      gas = gas+(sensorValue/1024*5.0);
      delay(100);
    gas=gas/20.0;
    if(gas<=2.0){
  Display "Clean air. Safe for cultivation";  
      }
    else{
      Display "Contaminated air!!! Unsafe for cultivation";
      }
    Display"Gas sensor voltage: ";
    Display gas;
    Display "V";



  //pH Sensor    
   loop iterating 20 times 
      buf[i]=analogRead(SensorPin);
    delay(10);
  sorting all the values in buf array;
  initialize avgValue=0;
  loop iterating 5 times                      
    avgValue+=buf[i];
  float phValue=(float)avgValue*5.0/1024/6; 
  phValue=3.5*phValue;                      
  Display "pH:";  
  Display phValue,3;


  //Temperature and Humidity Sensor
   start dht sensor;
   initialize hum=0.0;
   initialize tempa=0.0;
   loop iterating 20 times
    hum = hum+dht.readHumidity();
      tempa= tempa+dht.readTemperature();
      delay(200);
   hum=hum/20.0;
   tempa=tempa/20.0;
   Display "Humidity: ";
   Display hum;
   Display "%";
   Display "Temp: ";
   Display tempa;
   Display " Celsius";



    //Moisture Sensor
    initialize sensorPin1=A5;
    initialize lol[20];
    initialize s=0;
    initialize i=0;
    loop iterating 20 times
      lol[i]=analogRead(sensorPin1);
      delay(200);
    initialize avg=0;
    loop iterating 20 times
      avg=avg+lol[i];
    avg=avg/20;
    avg=avg-(avg/1023.00)*100;
    Display"Moist Value in %: ";
    Display avg;




   Display "Best  for planting: ";
   checking the result and finding which plant should be planted among Rice, Corn, Cotton, Wheat, Soybean, Apple, Citrus, Beans, Cabbage, Eggplant etc with if/else condition.
  
  
