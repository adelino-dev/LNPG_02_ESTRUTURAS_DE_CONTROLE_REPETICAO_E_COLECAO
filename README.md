# Introdução as Linguagens de Programação C, Java e Haskell: Atividade 06
## Estruturas de Controle, Repetição e Coleções

### Algoritmo 1: Aeroporto - Lista de checagem

#### Descrição

você é um segurança com uma lista checagem, o seu trabalho é checar cada um do passageiros e ver se eles tem

1. RG;
2. Passagem
   
Após isso você deve checar se as datas de nascimento no RG e na passagem são iguais, qual é o assento do passageiro e informa-lo qual é o seu assento

- se o passageiro não tiver um RG ele deve ser direcionado para a saída;
- se o passageiro não tiver uma passagem ele deve ser direcionado para a recepção do aeroporto;
- se a data de nascimento do RG e da Passagem não baterem você deve chamar a policia. 

#### Formato de entrada

- um número inteiro positivo N, que representa a quantidade de passageiros;
- uma String com o valor "RG" ou "Nao possui" para indicar se a pessoa possui ou não RG;
- uma String no formato "DD/MM/AAAA" indicando a data de nascimento do RG;
- uma String com o valor "Passagem" ou "Nao possui" para indicar se a pessoa possui ou não Passagem;
- uma String no formato "DD/MM/AAAA" indicando a data de nascimento da Passagem;
- uma String no formato "A12" indicando a cadeira do passageiro.

#### Formato de saída

- caso o passageiro não tenha RG a saída deve ser "a saída é nessa direção";
- caso o passageiro não tenha Passagem a saída deve ser "a recepção é nessa direção";
- caso as datas de nascimento não sejam iguais a saída deve ser "190";
- caso todos os anteriores não aconteção a saída deve ser "o seu assento é" seguido do assento do passageiro e depois " tenha um ótimo dia".

### Algoritmo 2: Valor aproximado de pi

#### Descrição

O valor aproximado de pi pode ser calculado usando-se a série:

S = (1/1^3) - (1/3^3) - (1/5^3) - (1/7^3) - (1/9^3) - ... 

Sendo pi = (S*32)^(1/3). Fazer um programa para calcular e escrever o valor de pi utilizando n termos da série dada.

#### Formato de entrada

Um número inteiro representando número de termos da série S.

#### Formato de saída

Um número real formatado com 5 casas decimais representando o valor aproximado de pi.

### Algoritmo 3: Vendendo Jogos Educativos

#### Descrição

Catarina trabalha na empresa Kids Play e vende jogos educativos de porta em porta. Cada jogo custa R$ 19.90 e ela recebe como salário 50% do valor total de suas vendas no mês. Além disso, a cada 15 jogos vendidos, ela recebe um bônus de 8% do total de vendas.

Escreva um programa que receba como entrada a quantidade de jogos vendidos esse mês por Catarina e exiba três valores: o valor total arrecadado em vendas, o valor ganho como bônus, e o valor total que Catarina receberá no mês.

#### Formato de entrada

Um valor inteiro

#### Formato de saída

Três números reais, cada um com duas casas decimais

Os valores devem ser separados por quebras de linha (ou seja, cada valor deve ser exibido em uma linha diferente)

### Algoritmo 4: Vestibular

#### Descrição

Em um determinado concurso as provas são objetivas, de múltipla escolha, onde cada questão possui cincoalternativas e somente uma correta. Para agilizar a correção e publicação doresultado a coordenação do concurso solicitou à equipe de TI um programa para permitir a leitura do gabarito, o nome de cada um dos participantes e a resposta em cada uma das dez questões da prova;

Após a leitura destas informações, o programa deve imprimir, usando a formatação do exemplo:

- a. A lista de participantes e suas respectivas notas em ordem alfabética;
- b. A maior pontuação, a menor pontuação e o(s) nome(s) do(s) respectivo(s) participante(s);
- c. O percentual de participantes com mais da metade das questões certas.
  
*Observações:*
• Cada questão possui 5 opções de resposta (1,2,3,4 e 5)

#### Formato de entrada

- Primeira linha contendo 10 inteiros representando o gabarito da prova;
- Demais linhas contendo o nome do participante e mais 10 inteiros representando as respostas do participante;
- A última linha contendo * informa o fim da leitura dos dados.

#### Formato de saída

- Relação dos participantes em ordem alfabética com suas respectivas notas;
- Relação dos participantes com a melhores pontuação;
- Relação dos participantes com a pior pontuação;
- Percentual de participantes com mais da metade de questões certas (precisão de 1 casa decimal).

### Algoritmo 5: Análise do IPCA

#### Descrição

Escreva um programa que carregue os dados referentes ao IPCA (Índice Nacional de Preços ao Consumidor Amplo) e que obtenha o maior e menor valor do IPCA e os respectivos meses/anos em que ocorreram. Além disso, o programa deve calcular a média do IPCA de todos os meses lidos.

#### Formato de entrada

Cada uma das linhas possui a informação do ano/mês e o índice do IPCA (número real) separados entre si por espaço em branco. Observe que as informações do ano e do mês não são fornecidas necessariamente em ordem cronológica e que o valor do IPCA usa a vírgula para separar a parte inteira da decimal. A entrada de dados se encerra quando é encontrada uma linha contendo apenas o caractere *.

#### Formato de saída

A saída é composta por 3 linhas, seguindo o formato mostrado no caso de teste de exemplo:

- Linha 1: Informa o menor valor do IPCA e seu respectivo mês/ano entre parênteses.
- Linha 2: Informa o maior valor do IPCA e seu respectivo mês/ano entre parênteses.
- Linha 3: Informa a média de todos os valores do IPCA lidos pelo programa com 2 casas decimais.