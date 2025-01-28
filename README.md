
# 🔌 **Projeto Arduino: Controle de LEDs e Buzzer com Potenciômetro**

Este projeto utiliza um Arduino para controlar LEDs e um buzzer com base no valor de um potenciômetro. Ele demonstra como integrar diferentes componentes eletrônicos e criar interações dinâmicas entre eles.

---

## 🛠️ **Funcionalidades**
- Controle de LEDs:
  - LED verde acende quando o potenciômetro está no mínimo.
  - LED amarelo acende quando o potenciômetro está na metade.
  - LED vermelho acende quando o potenciômetro está no máximo.
- Controle do buzzer:
  - Intensidade do som aumenta conforme o potenciômetro é girado.
  - Sem som no valor mínimo do potenciômetro.

---

## 📜 **Objetivo do Projeto**
Este projeto foi criado para:
- Demonstrar o uso do Arduino na integração de LEDs, buzzer e potenciômetro.
- Explorar conceitos básicos de eletrônica e programação embarcada.
- Facilitar a aprendizagem e a replicação do circuito para iniciantes.

---

## 🚀 **Como Reproduzir**
### 1. Componentes Necessários
## Componentes do Projeto

Abaixo está a lista de componentes utilizados no projeto:

| Nome                      | Quantidade | Componente               |
|---------------------------|------------|--------------------------|
| Arduino                   | 1          | Arduino Uno R3           |
| Resistor                  | 3          | Resistor de 220 Ω        |
| ledVerde                  | 1          | LED Verde                |
| ledAmarelo                | 1          | LED Amarelo              |
| ledVermelho               | 1          | LED Vermelho             |
| PIEZOBuzzer               | 1          | Piezo (Buzzer)           |
| Potênciometro             | 1          | Potenciômetro de 250 kΩ  |

### 2. Estrutura do Circuito
- Consulte os arquivos disponíveis na pasta `diagramas`:
  - **Esquema elétrico (png)**: Descrição detalhada das conexões.
  - **Diagrama visual (png)**: Representação gráfica do circuito.

### 3. Configuração e Execução
1. Clone este repositório:
   ```bash
   git clone https://github.com/marioleo7k/arduino-leds-e-buzzer
   cd arduino-leds-e-buzzer
   ```
2. Abra o arquivo `.ino` na IDE do Arduino.
3. Conecte seu Arduino ao computador e faça o upload do código.

---

## 📂 **Estrutura do Repositório**
```
arduino-leds-e-buzzer/
├── diagramas/             # Diagramas e esquemas do circuito
│   ├── lista_componentes.csv
│   ├── visao_circuito.png
│   ├── visao_esquematica.png
├── projeto-arduino.ino    # Código principal do Arduino
├── .gitignore             # Arquivos ignorados pelo Git
└── README.md              # Documentação do projeto
```

---

## 🖼️ **Diagramas do Projeto**
- **Visão do Circuito**:
  <img src="https://raw.githubusercontent.com/marioleo7k/arduino-leds-e-buzzer/refs/heads/main/diagramas/visao_circuito.png" alt="Diagrama do Circuito" width="500" height="250">

- **Visão Esquemática**:
  <img src="https://raw.githubusercontent.com/marioleo7k/arduino-leds-e-buzzer/refs/heads/main/diagramas/visao_esquematica.png" alt="Diagrama Esquemático" width="500" height="250">

---

## 🌟 **Contribuições**
Sinta-se à vontade para sugerir melhorias ou reportar problemas através de issues ou pull requests. Toda ajuda é bem-vinda!

---

## ⚖️ **Licença**
Este projeto está sob a licença MIT. Consulte o arquivo [LICENSE](./LICENSE) para mais detalhes.

---

## 💬 **Contato**
Para dúvidas ou feedback:
- **LinkedIn**: [Mario Leonardo da Silva](https://www.linkedin.com/in/marioleo7k/)
- **E-mail**: marioleo7k@icloud.com
