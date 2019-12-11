# Projeto-Hackerspace-2019

# Controle de Acesso com Arduíno.

## Projeto
  O projeto que eu desenvolvi trata-se de um dispositivo para ser usado nos portões elétricos das residências. O intuito é que cada pessoa, ao desenvolver seu dispositivo, possa configurar seu cartão de ônibus, ou qualquer outro modelo de cartão com mesma tecnologia, ou seja, que o módulo Frid reconheça, e a partir disso possa entrar em sua casa utilizando-o.
  A ideia é que, além de utilizar o cartão em uma outra função, além da sua trivial, há comodidade no que se trata de uma única coisa para mais de uma funcionalidade.

## Recursos utilizados
  Para esse projeto eu montei um protótipo de uma porta e nela instalei um módulo de leitura FRID, esse módulo é ligado de uma maneira muito específica nos pinos do arduíno UNO.
  Para a conexão com a trava elétrica eu utilizei um relé para não causar danos na placa do arduíno.
  Em relação ao código, utilizei a IDE do arduíno, que é uma linguagem C com algumas funções para o arduíno já implementadas e também baixei a biblioteca MFRC522.h, que permite suporte para o módulo, essa biblioteca pode ser encontrada na própria IDE.
  Para o projeto, tomei como base o passo-a-passo disponível em: https://www.youtube.com/watch?v=gcBN4NLqz_U&list=PLYjrJH3e_wDNLUTN32WittrpBxeleEqNp&t=0s, para obeter mais conhecimento sobre o módulo de leitura rfid.

## Faça você também!
  Para fazer seu próprio Controle de Acesso, você precisa:
  1. Baixar a IDE do arduíno disponível em: https://www.arduino.cc/en/main/software, e instalar a biblioteca MFRC522.h;
  2. Abrir o código disponível nesse github pela IDE;
  3. Descobrir o ID do cartão que voce quer conceder acesso, e alterar a linha 65 do meu código.
  3. Fazer as seguintes conexões entre seu módulo rfid e o arduíno UNO:
  ![Imagem](https://github.com/amandapascon/Projeto-Hackerspace-2019/blob/master/RFID.png)
  4. Ligar o pino de dados do relé no pina 4 do arduíno (esse foi o que eu escolhi e já está configurado na linha 9 do meu código);
  5. Conectar a trava elétrica, de modo a passar pelo relé, para que possa ter o controle a partir dele de quando ativá-la;
  6. Passar o código para o arduíno.
  
## Bugs
  Tome cuidado ao comprar seu módulo rfid, ele pode apresentar alguns problemas, como o meu, e não ser preciso na leitura dos cartões.

## Autores
*Amanda Carnio Pascon (https://github.com/amandapascon)

## Imagens do projeto
![Imagem](https://github.com/amandapascon/Projeto-Hackerspace-2019/blob/master/projeto.jpeg)
