## Caso de teste 2: Insercao <br>
### Pré condição: <br>
A tabela hash está vazia. <br>
### Ação:<br>
Inserir três elementos: "caneta" com preço 10, "xicara" com preço 20 e "copo" com preço 30. <br>
### Resultado Esperado: <br>

Os elementos devem ser inseridos corretamente na tabela hash. <br>
### Verificação: <br>

Após a inserção, imprimir a tabela hash e verificar se os elementos estão corretamente armazenados.

![insercao](imagens/insercao.png)
<br>

## Caso de teste 2: Exclusao <br>
### Pré-condição: <br>
A tabela hash contém os elementos "caneta" com preço 10, "xicara" com preço 20 e "copo" com preço 30, dando foco ao elemento caneta.
### Ação: <br>
Remover o elemento "caneta" da tabela hash.
### Resultado Esperado: <br>
O elemento "caneta" deve ser removido corretamente da tabela hash.
### Verificação:
<br>
Após a remoção, imprimir a tabela hash e verificar se o elemento "caneta" não está mais presente.

![exclusao](imagens/exclusao.png)
<br>


## Caso de teste 3: Overflow <br>
### Pré-condição: <br>
A tabela hash tem capacidade para armazenar apenas 5 elementos.
### Ação: <br>
Inserir mais de 5 elementos na tabela para observar como ela lida com isso.
### Resultado Esperado: <br>
Como o número de elementos inseridos excede o tamanho máximo da tabela hash, alguns elementos ficam sem ter onde serem colocados. Mas como utilizamos encademaneto separado, o overflow gerado será eviado para para as células vizinhas.
### Verificação:
<br>
Imprimir a tabela hash e verificar como a tabela lida quando fica cheia.

![exclusao](imagens/overflow.png)
<br>


## Caso de teste 4: Busca <br>
### Pré-condição: <br>
A tabela hash tem elementos inseridos nela, com foco em caneta.
### Ação: <br>
Procurar em qual posição da tabela hash caneta está e se ela existe dentro da tabela
### Resultado Esperado: <br>
Retornar a posição da tabela hash em que caneta está localizada, caso ela exista
### Verificação:
<br>
Imprimir se caneta existe na tabela hash ea posição de dela dentro da tabela hash 

![busca](imagens/busca.png)
<br>


## Caso de teste 5: Colisoes <br>
### Pré-condição: <br>
A tabela hash tem elementos que ocupam o mesmo slot e obersvar o funcionamento do tratamento de colisões.
### Ação: <br>
Inserir varios elementos que utilizariam o mesmo ID para ver como a tabela lida com isso
### Resultado Esperado: <br>
Retornar a tabela hash com diversos itens encadeados para observar o tratamento de colisões de encadeamento aberto.
### Verificação:
<br>
Imprimir a tabela hash e observar como o encadeamento separado está funcionando

![busca](imagens/colisoes.png)
<br>





