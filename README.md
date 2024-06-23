# Battle Simulation Game

Welcome to the Battle Simulation Game! This project features a simple text-based battle simulator where a player and a monster face off until one of them is defeated.

## Table of Contents

1. [Introduction](#introduction)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Files](#files)
6. [Contributing](#contributing)
7. [License](#license)
8. [Acknowledgements](#acknowledgements)
9. [Contact](#contact)

## Introduction

This project is a basic C++ program simulating a battle between a player and a monster. Both characters have randomly generated attributes including health, attack power, and defense. The game continues in turns until one of the characters' health reaches zero.

This project was created for the Comp 2215 Object Oriented Programming lectures laboratory project.

## Features

- Random attribute generation for both player and monster.
- Turn-based combat system.
- Text-based user interface displaying the current state of the battle.
- Win/loss conditions.

## Installation

To run this project, you need to have a C++ compiler installed. Follow the steps below to compile and run the program:

1. Clone the repository:
   ```bash
   git clone https://github.com/Elveng/Battle_Simulator.git
   ```
2. Navigate to the project directory:
   ```bash
   cd Battle_Simulator
   ```
3. Compile the program:
   ```bash
   g++ lab6.cpp -o BattleSim
   ```
4. Run the executable:
   ```bash
   ./BattleSim
   ```

## Usage

Once you run the program, it will generate a player and a monster with random attributes and begin the battle. The game will display the progress of each turn until either the player or the monster is defeated.

Example output:
```
Player is entering to the battle arena!
Name: Samed
Health: 120
Attack Power: 30
Defense: 15

Monster is entering to the battle arena!
Name: Beyaz Troll
Health: 130
Attack Power: 25
Defense: 10

Turn 1 started!
------------------------------------------------------------------
Player Samed is attacking the monster Beyaz Troll
Player damage: 30
Monster Remaining Health: 110/130

Monster Beyaz Troll is attacking the player Samed
Monster damage: 25
Player Remaining Health: 95/120

...
```

## Files

- **lab6.cpp**: The main program file where the battle simulation takes place.
- **Player.h**: Header file defining the Player class and its attributes.
- **Player.cpp**: Implementation of the Player class methods.
- **Monster.h**: Header file defining the Monster class and its attributes.
- **Monster.cpp**: Implementation of the Monster class methods.

## Contributing

Contributions are welcome! Please fork the repository and create a pull request with your changes.

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add new feature'`).
5. Push to the branch (`git push origin feature-branch`).
6. Create a new Pull Request.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.

## Acknowledgements

This project was developed as part of an Object-Oriented Programming class. Special thanks to the course instructors and peers for their support and feedback.

## Contact

For any questions or suggestions, feel free to contact the author:

**Name:** Tahsin Berk Oztekin  
**Email:** tahsinberkoztekin@gmail.com

