Trabalho desenvolvido com intuíto de funcionamento total de um controlador de velocidade e temporização de motor DC.

Para ser efetuado precisaremos de alguns componentes:

*Display: utilizaremos um [display 16x2](https://components101.com/displays/16x2-lcd-pinout-datasheet) onde existem 16 colunas e 2 linhas para escrita. Esse modelo 
apresenta fundo azul, letras brancas e será utlizado para mostrar a função que deverá ser aplicada no motor.

*CI: será utilizado para fazer a ponte h o [chip L298](https://components101.com/ics/l298-pin-configuration-features-datasheet) 

*Motor: para o motor será utilizado um [motor DC](https://recursos.techmakers.com.br/MediaCenter/Datasheet%20Micro%20Motor%20DC%2012V%206500RPM%20P-N-AK555-306PL12S6500C.pdf), mais conhecido como motor de corrente contínua, onde a velocidade do motor é controlada através da variação da corrente, diferente de outros modelos.

*Mosfet: o [mosfet](https://flaviobabos.com.br/mosfet/) é um transistor de efeito de campo de semicondutor de óxido metálico e será utilizado para a transmissão da tensão para o motor.

*Teclado: será utilizado um [teclado 4x4](https://cdn.sparkfun.com/assets/f/f/a/5/0/DS-16038.pdf), bastante utilizado para Arduino, que é ligado diretamente à placa. No teclado cada tecla acionará uma função diferente para o motor de acordo com a tecla pressionada.

*Fonte externa: utilizaremos uma fonte para energizar o circuito a partir das placas

Precisaremos utilizar duas placas que foram efetuadas durante o curso para o funcionamento do projeto.

*[PiCKIT 2](https://www.google.com/url?sa=i&url=http%3A%2F%2Felectronics-diy.com%2Felectronic_schematic.php%3Fid%3D824&psig=AOvVaw0fKVQ5oa-WGl_pJipMtp1v&ust=1650021809616000&source=images&cd=vfe&ved=0CAkQjRxqFwoTCOCHybG4k_cCFQAAAAAdAAAAABAO): sua função será transmitir os dados do arquivo no computador para o PIC16F887.  
*[PICKIT16F887](https://www.utmel.com/components/pic16f887-8-bit-microcontroller-programming-datasheet-and-pinout?id=777): após receber os dados do PICKIT 2 ele transmitirá os dados diretamente ao display, ocasionando o controle e funcionamento do projeto.

*Saída PWM: o [PWM](https://www.citisystems.com.br/pwm/#:~:text=PWM%20%C3%A9%20a%20t%C3%A9cnica%20usada,a%20gera%C3%A7%C3%A3o%20de%20sinais%20PWM.) é uma técnica utilizada para gerar sinais analógicos de um dispositivo digital (Microcontrolador no nosso caso). Ele é tão eficiente que hoje em dia quase todos os microcontroladores modernos possuem hardware dedicado para a geração de sinais PWM.

*Ponte Retificadora: A [placa retificadora](https://www.mundodaeletrica.com.br/o-que-e-uma-ponte-retificadora/) faz a transformação da corrente elétrica alternada gerada pelo estator em corrente contínua, que irá alimentar a bateria e todo sistema elétrico do veículo.

*Capacitor de filtro: O [capacitor](https://pt.lambdageeks.com/what-is-filter-capacitor-bypass-filter-capacitor/#fc) Um capacitor de filtro é um filtro passivo que consiste no elemento passivo. Os efeitos do capacitor de qualquer sinal dependem da frequência. Esta característica do capacitor é usada para projetar filtros que podem filtrar uma faixa de frequência específica de sinais, conforme necessário.

Resistor:O [Resistor](https://mundoeducacao.uol.com.br/fisica/resistores.htm) 10k ohms 1/4W é um componente eletrônico capaz de limitar a corrente elétrica em um determinado fluxo de energia.

Temos como objetivo de projeto criar um protótipo onde a programação feita nos computadores possa ser utilizada adequadamente, onde cada tecla pressionada tenha a sua devida ação ao display e também para o motor de corrente contínua, tendo um projeto totalmente funcional efetuado com total êxito. Além disso, o grupo espera poder ter maior aprofundamento em todas as etapas do projeto, contando com o protótipo ou a programação pelo software, conseguindo assim realizar com maior facilidade e ganhando maior conhecimento sobre a matéria de eletrônica.

Desenvolvimento:

O projeto foi separado com base no que cada integrante tivesse maior conhecimento, onde foram selecionadas as seguintes funções:

Firmware/Líder: João Vitor

Projeto Eletrônico: Kaique Alves
 
Protótipo: Selival Gomes

Documentação: Gustavo Pereira 

A partir de diversas aulas adquirimos conhecimento e a capacidade de trabalhar com os materiais pré requisitados. Foi possível, mesmo com certa dificuldade, efetuar um código a partir de softwares como o [Proteus](https://www.labsis.com.br/index.php/produtos/proteus), [MPLABX](https://www.microchip.com/en-us/tools-resources/develop/mplab-x-ide) entre outros, onde todos os aparelhos funcionassem mutuamente dentro desses simuladores. A partir de uma aula, um dos integrantes teve tempo para realizar a montagem do display, sendo possível efetuar as conexões com as placas e finalmente ligá-lo com funcionalidade de uma forma física.  

Para realizar a capacidade de inverter o sentido de giro foi utilizado uma [Ponte H](https://mundoprojetado.com.br/ponte-h-o-que-e-e-como-funciona/) um circuito que serve para variar o sentido da corrente em uma determinada carga, bem como controlar sua potência.


|                                 |                                |                                   |                                 |                           |
|                                 |                                |                                   |                                 |                           |
| ------------------------------- | ------------------------------ | --------------------------------- | ------------------------------- | ------------------------- |
|                                 |                                |                                   |                                 |                           |
|                                 |                                |                                   |                                 |                           |
|                                 |                                |                                   |                                 |                           |
|                                 |                                |                                   |                                 |                           |
|                                 |                                |                                   |                                 |                           |
|                                 |                                |                                   |                                 |                           | |                                 |                                |                                   |                                 |                           |
|                                 |                                |                                   |                                 |                           |
|                                 |                                |                                   |                                 |                           |
|                                 |                                |                                   |                                 |                           |
|                                 |                                |                                   |                                 |                           |
|                                 |                                |                                   |                                 |                           |
|                                 |                                |                                   |                                 |                           |
|                                 |                                |                                   |                                 |                           |
|                                 |                                |                                   |                                 |                           |
