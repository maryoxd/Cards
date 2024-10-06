[SK]
Simulácia kartovej hry

Jedná sa o úlohu, ktorá bola na skúške z predmetu INFORMATIKA 3.

Popis programu:

Program simuluje jednoduchú kartovú hru medzi štyrmi hráčmi. Cieľom hry je zistiť, ktorý hráč vyhrá najviac kôl na základe hodnoty kariet.

Princíp hry:

Balíček kariet: Balíček obsahuje 32 kariet, ktoré sú kombináciou písmen ("A", "B") a čísel (1 až 8). Každá karta je unikátna kombinácia písmena a čísla.
Rozdávanie kariet: Karty sú náhodne premiešané a rozdané hráčom tak, že každý hráč dostane 8 kariet.
Priebeh hry: Hra sa skladá z 8 kôl. V každom kole každý hráč odhalí jednu kartu z ruky.
Porovnávanie kariet: Víťazom kola je hráč s najvyššou hodnotou karty. Hodnota karty je určená najprv číslom; ak majú dvaja hráči rovnaké číslo, rozhoduje písmeno (písmeno "A" má vyššiu hodnotu ako "B").
Sledovanie výsledkov: Po každom kole sa zaznamená, ktorý hráč vyhral kolo. Na konci hry sa vypíše celkový počet vyhraných kôl pre každého hráča.
Štruktúra programu:

Trieda Karta:

Atribúty: Pismeno (string), Cislo (int).
Metódy: Konštruktor, getPismeno(), getCislo().
Trieda Hrac:

Atribúty: Meno (string), karty (vektor objektov Karta), vyhraneKola (int).
Metódy: Konštruktor, pridajKartu(), dajKartu(), pridajKolo(), getVyhraneKola(), getMeno().
Trieda Hra:

Atribúty: hraci (vektor objektov Hrac), karty (vektor objektov Karta).
Metódy:
nacitajKartyAhracov(): Inicializuje hráčov a karty, premieša balíček a rozdá karty hráčom.
porovnajKartyHracom(): Porovnáva dve karty a určuje, ktorá je vyššia podľa pravidiel.
hrajHru(): Riadi priebeh hry cez jednotlivé kolá, určuje víťaza každého kola a aktualizuje skóre.
Implementačné detaily:

Náhodné premiešanie: Používa sa funkcia random_shuffle na náhodné premiešanie balíčka kariet. Generátor náhodných čísel je inicializovaný s aktuálnym časom pomocou srand(time(0)).
Rozdávanie kariet: Karty sú rozdelené medzi hráčov rovnomerne, každý dostane 8 kariet.
Porovnávanie kariet: Implementované tak, že najprv sa porovnajú číselné hodnoty kariet. Ak sú rovnaké, porovná sa písmeno karty podľa lexikografického poradia.
Výpis výsledkov: Po každom kole sa vypíšu karty všetkých hráčov a určí sa víťaz kola. Na konci sa vypíše celkový počet vyhraných kôl pre každého hráča.
Možné rozšírenia a úpravy:

Viac hráčov alebo kariet: Program môže byť upravený na viac hráčov alebo na použitie štandardného balíčka kariet s rôznymi symbolmi a hodnotami.
Interaktívne prvky: Umožniť hráčovi zadať mená hráčov, počet kôl alebo iné parametre hry.
Grafické rozhranie: Pre lepšiu prezentáciu výsledkov by sa mohlo implementovať jednoduché grafické užívateľské rozhranie.

[EN]
Card game simulation

This is a task that was on the exam for the subject INFORMATICS 3.

Program description:

The program simulates a simple card game between four players. The object of the game is to see which player wins the most rounds based on the value of the cards.

Principle of the game:

Deck of cards: The deck contains 32 cards that are a combination of letters ("A", "B") and numbers (1 to 8). Each card is a unique combination of letter and number.
Dealing: The cards are shuffled randomly and dealt to the players so that each player receives 8 cards.
Course of the game: The game consists of 8 rounds. Each round, each player reveals one card from their hand.
Matching cards: The winner of the round is the player with the highest card value. The value of the card is determined first by the number; if two players have the same number, the letter decides (the letter "A" has a higher value than "B").
Track results: After each round, it is recorded which player won the round. At the end of the game, the total number of rounds won for each player is displayed.
Program structure:

Class Card:

Attributes: Letter (string), Number (int).
Methods: Constructor, getLetter(), getNumber().
Player Class:

Attributes: Name (string), cards (vector of Card objects), winRounds (int).
Methods: Constructor, addCard(), giveCard(), addRound(), getWinRound(), getName().
Game Class:

Attributes: players (vector of Player objects), cards (vector of Card objects).
Methods:
loadPlayerCards(): Initializes players and cards, shuffles the deck, and deals cards to players.
compareKartyHracom(): Compares two cards and determines which one is higher according to the rules.
playGame(): Controls the progress of the game through individual rounds, determines the winner of each round and updates the score.
Implementation details:

Random Shuffle: The random_shuffle function is used to shuffle the deck of cards randomly. The random number generator is initialized with the current time using srand(time(0)).
Dealing the cards: The cards are distributed among the players equally, each player receives 8 cards.
Card Comparison: Implemented by first comparing the numerical values ​​of the cards. If they are the same, the letter of the card is compared according to the lexicographic order.
Listing of results: After each round, the cards of all players are listed and the winner of the round is determined. At the end, the total number of rounds won for each player is displayed.
Possible extensions and modifications:

Multiple Players or Cards: The program can be modified for multiple players or to use a standard deck of cards with different symbols and values.
Interactive elements: Allow the player to enter player names, number of rounds or other parameters of the game.
Graphical interface: A simple graphical user interface could be implemented for a better presentation of the results.
