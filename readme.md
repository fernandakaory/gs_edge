# Bomba de água e sensor de umidade

Este projeto foi desenvolvido para a entrega da global solution da matéria de Edge Computing and Computer Systems
## Solução 
A partir do desafio proposto na Global Solution em parceria com a Kraft Heinz, ONG Caça-Fome e Microsoft, o grupo decidiu direcionar o projeto para a otimização de fazendas verticais para incentivar uma agricultura mais sustentável e colaborar para a diminuição da fome e escassez de alimentos.
Dessa forma, a solução consiste em uma plataforma com o objetivo de compilar, centralizar os dados importantes para a manutenção de fazendas verticais e supervisão dos dados e da produção, com uma interface fácil e intuitiva.Nela, será possível visualizar e controlar(programar) a temperatura, umidade, fornecimento de água e nutrientes,
consultar e comparar os dados de produções anteriores e verificar a data estimada, de acordo com as informações captadas, de cada fase do processo produtivo. 
Além disso, terá uma aba na qual serão disponibilizadas pesquisas e dicas para baratear o custo das fazendas verticais como melhorias de hardware e infraestrutura.

## A solução em Edge Computing and Computer Systems
Para a matéria de edge desenvolvemos  um protótipo que simula uma bomba de agua que atua em conjunto a um sensor tmp (que simula um dht11), que é ligado sempre que a umidade captada for baixa (menor ou igual a 40%) . Em teoria este projeto seria unifocado a plataforma para garantir que o usuário possa programar e controlar a umidade de produção para garantir a qualidade.
**É importante ressaltar que, não adicionamos luzes de LED, display LCD ou búzinas pois, o intuíto da nossa plataforma, do nosso projeto é ser mais simples, fácil e barata que os outros já disponíveis.** 

## Como utilizar o protótipo 
A utilização deste sensor e da bomba e muito simples. Quando a umidade lida pelo sensor for baixa (40% ou menos) a bomba de água é ligada. No momento em que a umidade estiver acina de 40% a bomba estará ou será desativada. Mensagens de alerta serão exibidos no monitor serial simulamdo mensagens da plataforma como “ “ ou “ “ e a indicação do valor em porcentagem 

## Materiais utilizados no tinkercad
-Placa de prototipação pequena
-Arduino Uno R3
-10 cabos jumper macho-macho
-Sensor Tmp (simular DHT11 ou sensor de umidade semelhante)
-Motor CC (simular a bomba de água)
-Potenciômetro (controla a mudança dos valores de umidade)

## Referências para a criação do protótipo
-Checkpoint 2 utilizando sensor tmp 
https://www.tinkercad.com/things/g87u6b1uDKq-cp2/editel?sharecode=0DGd-dmv_2ie-JaYIbdrJ_FY7SmAQbmMK-JCjMIV6nQ
-Projeto extra de Edge Computing usando motores CC
https://www.tinkercad.com/things/a3SUva5GLw0-matriz-l293d-arduino-rotacao-dois-motores/editel?sharecode=-6Wnpg2lE6lmKDDIuZHmGbc9MBa7P0vlmfiB7JZEnKg
