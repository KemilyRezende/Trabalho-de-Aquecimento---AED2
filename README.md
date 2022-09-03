# Trabalho-de-Aquecimento---AED2
Implementação de multiplicação de matrizes baseado em uma estratégia de segmentação em arquivo.

# Funcionamento geral
Tendo como entrada dois arquivos contendo respectivamente uma grande matriz M NxN e um par de cordenadas ixj que determinarão a secção da matriz a ser processada. Lida a matriz seccionada será calculada a inversa desta em seguida o produto matricial de ambas, este resultado será armazenado em uma tabela Hash da qual a chave será dada pelo calculo com base na string gerada pela concatenação das posições fornecidas.

# Tabela Hash
O que é: Tabela hash ou tabela de dispersão é uma estrutura de dados especial, que associa chaves de pesquisa a valores. Seu objetivo é, a partir de uma chave simples, fazer uma busca rápida e obter o valor desejado.
Cálculo das chaves: São fornecidas ao somar os valores (tabela ASCII) dos caracteres da string e submetendo este inteiro ao método da congruência, que consiste em multiplicar o valor por uma constante, tal que 0 < constante < 1,no caso 0,6180339887, logo em seguida a parte inteira da multiplicação é subtraída e o resultado é multiplicado pelo tamanho da tabela. 
Tratamento de colisões: Esta hash será estruturada através de Listas, ao gerar duas chaves iguais um novo cálculo é feito tomando por base o valor repetido armazenando-o sequencialmente.

# Lista Duplamente Encadeada 
A Lista Duplamente encadeada é uma estrutura de dados ligada que  consiste de um conjunto de registros sequencialmente ligados chamados de Nós.
É uma extensão da Lista simplesmente encadeada tendo como diferença a presença de um ponteiro a mais nos Nós, que aponta para o item anterior da lista.

# Funções

Object:
void setPos(string pos): Recebe a string cujo valor é igual as posições de início e término da matriz seccionada do arquivo.
string getPos(): Retorna a string com o valor das posições.
void setValue(int **value, int i): Recebe como parâmetros a Matriz resultante da multiplicação proposta no exercício e a armazena e o um inteiro i equivalente ao número de linhas e colunas dessa matriz.
int** getValue(): Retorna a Matriz resultante da multiplicação proposta.
void MostrarMat(): Imprime a Matriz resultante.

No:
No(Object valor): É o construtor da classe, inicializa o objeto ao receber um item Object como parâmetro.
void setValor(Object valor): Recebe o Objeto a ser armazenado.
int** getValor(): Retorna a Matriz armazenada no Object correspondente.
string getPosition(): Retorna a string armazenada no Object correspondente.
void setProx(No* no): Recebe o ponteiro do próximo elemento.
No* getProx(): Retorna o ponteiro do próximo elemento.
void setAnt(No* no): Recebe o ponteiro do elemento anterior.
No* getAnt(): Retorna o ponteiro do elemento anterior.
void Mostrar(): Imprime a Matriz armazenada no Object.

Lista:
Lista(): Construtor padrão.
Lista(Object v): Construtor parametrizado.
int Size(): Retorna o tamanho da lista.
bool verificaVazia(): Verifica se há itens na lista retornando "true" caso não haja itens armazenados e "false" caso contrário.
void removeItem(Object v): Remove um item da lista.
No* ProcuraItem(string position): Retorna o Nó que armazena a Matriz e string correspondente ao parâmetro passado.
void ExibeItem(string position): Mostra a Matriz resultante correspondente à string position.

Main:
int Hashing(string position, int size): Recebe como parâmetros a string e o tamanho da tabela Hash e realiza o respectivo cálculo da posição a ser ocupada pelo item na Hash.
int Main(): Executa o programa proposto.


