# Trabalho-de-Aquecimento---AED2
Implementação de multiplicação de matrizes baseado em uma estratégia de segmentação em arquivo.

# Funcionamento geral
Tendo como entrada dois arquivos contendo respectivamente uma grande matriz M NxN e um par de cordenadas ixj que determinarão a secção da matriz a ser processada. Lida a matriz seccionada será calculada a inversa desta em seguida o produto matricial de ambas, este resultado será armazenado em uma tabela Hash da qual a chave será dada pelo calculo com base na string gerada pela concatenação das posições fornecidas.

# Tabela Hash
O que é: Tabela hash ou tabela de dispersão é uma estrutura de dados especial, que associa chaves de pesquisa a valores. Seu objetivo é, a partir de uma chave simples, fazer uma busca rápida e obter o valor desejado.
Cálculo das chaves: São fornecidas ao somar os valores (tabela ASCII) dos caracteres da string e submetendo este inteiro ao método da congruência, que consiste em multiplicar o valor por uma constante, tal que 0 < constante < 1,no caso 0,6180339887, logo em seguida a parte inteira da multiplicação é subtraída e o resultado é multiplicado pelo tamanho da tabela. 
Tratamento de colisões: Esta hash será estruturada através de Listas, ao gerar duas chaves iguais um novo cálculo é feito tomando por base o valor repetido armazenando-o sequencialmente.

# Lista Duplamente Encadeada 

# Arquivos em C++

# Funções:


