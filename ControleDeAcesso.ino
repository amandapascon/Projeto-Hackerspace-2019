//AMANDA CARNIO PASCON
//PROJETO HACKERSPACE 2019

//INCLUINDO AS BIBLIOTECAS
#include <SPI.h>
#include <MFRC522.h>

//DEFININDO O PINO DO RELÉ
#define RELE 4     

//DEFININDO PINOS DO MODULO RFID
#define SS_PIN 10
#define RST_PIN 9

//CRIANDO A INSTANCIA DO MFRC522
MFRC522 mfrc522(SS_PIN, RST_PIN);
 
void setup()
{
  //INICIANDO SERIAL
  Serial.begin(9600);
  SPI.begin();
  
  //INICIANDO MFRC522    
  mfrc522.PCD_Init();

  //DEFININDO O PINO DO RELÉ
  pinMode(RELE, OUTPUT);
  //DEFININDO RELE COMO NAO ATIVO NO COMECO, PARA A TRAVA CONTINUAR FECHADA
  digitalWrite(RELE, HIGH);   
  
  //ACOMPANHANDO PELO MONITOR SERIAL
  Serial.println("Aproxime seu cartão\n");
}
 
void loop()
{ 
  //BUSCANDO CARTOES PARA LER
  if ( ! mfrc522.PICC_IsNewCardPresent())
  {
    return;
  }
  
  //SELECIONA O CARTAO PARA SER LIDO
  if ( ! mfrc522.PICC_ReadCardSerial())
  {
    return;
  }
  
  //MOSTRANDO ID DO CARTÃO NO MONITOR SERIAL
  Serial.print("ID:");
  String conteudo = "";
  byte letra;
  //PEGANDO ID
  for (byte i = 0; i < mfrc522.uid.size; i++)
  {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    conteudo.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    conteudo.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  conteudo.toUpperCase();
 
  if (conteudo.substring(1) == "3B B2 15 56" || conteudo.substring(1) == "02 36 78 21") //ID DOS CARTOES AUTORIZADOS
  {
    Serial.println("Acesso autorizado!\n");
    //ABRINDO A PORTA
    digitalWrite(RELE, LOW);    
    //SEGURA ABERTA POR UM TEMPO (2000 ms)
    delay(2000);          
    //ACIONA A TRAVA NOVAMENTE
    digitalWrite(RELE, HIGH);    
  }else{
    Serial.println("Acesso negado!\n");    
  }
  
}
