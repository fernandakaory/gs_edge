//Global Solution - Edge Computing and Computer Systems
//Simulador de bomba de água (motor cc)e sensor de umidade (Tmp)

//declaração das entradas e váriaveis
const int analogIn = A0;
int sensor = 0;
int motor =12;
int umidade = 0;

void setup(){  
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(motor, OUTPUT);
}

void loop(){
  sensor = analogRead(A1);//os dados da leitura serão armazenados na variável sensor
  delay(2000);  //espera 2 segundos para realizar a próxima leitura
  
  
  //se a umidade estiver menor que 40%, a bomba á ativada
  umidade = (map(sensor, 0, 1023, 10, 70));
  if(umidade<=40){
    digitalWrite(motor, HIGH);
    Serial.println("Umidade baixa. Bomba de agua ligada ");
    Serial.print("Umidade :");
    Serial.print(umidade);
    Serial.println("%");
  }
  
  //se a umidade estiver acima de 40%, a bomba é desligada
  else{
    digitalWrite(motor, LOW);
    Serial.println("Umidade adequdada. Bomba desligada ");
    Serial.print("Umidade :");
    Serial.print(umidade);
    Serial.println("%");
  }
  

}