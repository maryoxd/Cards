# 🃏 Card Game Simulation – C++ Exam Project  

**Card Game Simulation** is a **C++ console-based game** that simulates a battle between four players. The game consists of 8 rounds, where each player plays a randomly assigned card. The player with the highest card value wins the round, and the final winner is the one with the most rounds won.  

This project was developed as part of the **Informatics 3 exam**, focusing on **object-oriented programming (OOP), random shuffling, and game logic implementation**.  

## 🎮 Features  
- **Deck of 32 unique cards** – Each card is a combination of a letter ("A" or "B") and a number (1 to 8).  
- **Automated card shuffling** – Uses a **random shuffle algorithm** to distribute cards fairly.  
- **Turn-based gameplay** – Players reveal one card per round.  
- **Card comparison logic** – The winner is determined first by number, then by letter priority (A > B).  
- **Result tracking** – The program keeps score of the number of rounds won per player.  

## 🛠️ Technologies Used  
- **C++ (Standard Library & Vectors)**  
- **Random Shuffle (srand, time-based seed)**  
- **Object-Oriented Programming (OOP) – Classes for Cards, Players, and Game Logic**  
- **Console Output for Game Progress & Results**  

## 🚀 How to Install & Run  
1. **Clone the repository:**  
   ```bash
   git clone https://github.com/maryoxd/CardGameSimulation.git  
   cd CardGameSimulation
2. **Compile and run the program:**
   ```bash
   g++ -o card_game main.cpp Card.cpp Player.cpp Game.cpp
   ./card_game  

