# Controle de Acesso com Arduíno.
Projeto-Hackerspace-2019

## Projeto
  O projeto que eu desenvolvi trata-se de um dispositivo para ser usado nos portões elétricos das casas. 
  O intuito é que cada pessoa, ao desenvolver seu dispositivo, possa configurar seu cartão de ônibus, ou qualquer outro modelo de cartão com mesma tecnologia, ou seja, que o módulo frid reconheça, e a partir disso possa entrar em sua casa com ele.
  A ideia é que, além de utilizar o cartão para uma outra função, sem contar sua trivial, existe uma comodidade para o chamado "2 em 1", ou seja, uma única coisa para mais de uma funcionalidade.

## Recursos utilizados
  Para esse projeto eu montei um protótipo de uma porta e nela instalei um módulo de leitura FRID. Esse módulo é ligado nos pinos do arduíno UNO.
  Para a conexão com a trava elétrica eu utilizei um relé para não causar danos na placa do arduíno.
  Em relação ao código, utilizei a IDE do arduíno, que é uma linguagem C com algumas funções para o arduíno já implementadas e também baixei a biblioteca MFRC522.h, que permite suporte para o módulo e essa biblioteca pode ser encontrada na própria IDE.
  Para o projeto, tomei como base o tutorial disponível em: https://www.youtube.com/watch?v=gcBN4NLqz_U&list=PLYjrJH3e_wDNLUTN32WittrpBxeleEqNp&t=0s, afim de obeter mais conhecimento sobre aa tecnologia rfid.

## Faça você também!
  Para fazer seu próprio Controle de Acesso, você precisa:
  1. Baixar a IDE do arduíno disponível em: https://www.arduino.cc/en/main/software, e instalar a biblioteca MFRC522.h;
  2. Abrir o código disponível nesse github pela IDE;
  3. Descobrir o ID do cartão que voce quer conceder acesso, e alterar a linha 65 do meu código.
  3. Fazer as seguintes conexões entre seu módulo rfid e o arduíno UNO:
  ![Imagem](https://github.com/amandapascon/Projeto-Hackerspace-2019/blob/master/RFID.png)
  4. Ligar o pino de dados do relé no pino 4 do arduíno (esse foi o que eu escolhi e já está configurado na linha 9 do meu código);
  5. Conectar a trava elétrica, de modo a passar pelo relé, para que possa ter o controle a partir dele de quando ativá-la;
  6. Passar o código para o arduíno.
  
  Pronto, assim você já pode entrar na sua casa usando o seu cartão do ônibus!
  
## Bugs
  Tome cuidado ao comprar seu módulo rfid, ele pode apresentar alguns problemas, como o meu, e não ser preciso na leitura dos cartões.

## Autores
Amanda Carnio Pascon (https://github.com/amandapascon)

## Imagens do projeto
![Imagem](https://github.com/amandapascon/Projeto-Hackerspace-2019/blob/master/projeto.jpeg)
