#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include <process.h>

//notes

/* --- OCTAVE 2  --- */
enum notes{

    C2  = 65,
    Cs2 = 69,
    D2  = 73,
    Ds2 = 78,
    E2  = 82,
    F2  = 87,
    Fs2 = 93,
    G2  = 98,
    Gs2 = 104,
    A2  = 110,
    As2 = 117,
    B2  = 123,

/* --- OCTAVE 3 --- */
    C3  = 131,
    Cs3 = 139,
    D3  = 147,
    Ds3 = 156,
    E3  = 165,
    F3  = 175,
    Fs3 = 185,
    G3  = 196,
    Gs3 = 208,
    A3  = 220,
    As3 = 233,
    B3  = 247,

/* --- OCTAVE 4 (Middle C Range) --- */
    C4  = 262,
    Cs4 = 277,
    D4  = 294,
    Ds4 = 311,
    E4  = 330,
    F4  = 349,
    Fs4 = 370,
    G4  = 392,
    Gs4 = 415,
    A4  = 440,
    As4 = 466,
    B4  = 494,

/* --- OCTAVE 5 --- */
    C5  = 523,
    Cs5 = 554,
    D5  = 587,
    Ds5 = 622,
    E5  = 659,
    F5  = 698,
    Fs5 = 740,
    G5  = 784,
    Gs5 = 831,
    A5  = 880,
    As5 = 932,
    B5  = 988,

    /* --- OCTAVE 6 --- */
    C6  = 1047,
    Cs6 = 1109,
     D6  = 1175,
    Ds6 = 1245,
    E6  = 1319,
    F6  = 1397,
    Fs6 = 1480,
    G6  = 1568,
    Gs6 = 1661,
    A6  = 1760,
    As6 = 1865,
    B6  = 1976,

    rest = 0,



};

void delayMs(int ms){
    clock_t start = clock();
    while ((clock() - start) * 1000 / CLOCKS_PER_SEC < ms);
}


void play(int melody[][2], int length){
    for (int i = 0; i < length; i++) {
        Beep(melody[i][0], melody[i][1]);  // sound
        delayMs(10);                      // micro rest between notes
    }
}


/*
    A game about a parkour guy who runs around the map and gets to a orange square
*/


// Initiate the structs to avoid errors


// Screen struct for
struct screen
{
    int lines;
    int screenAnimMS;
    char screenElement[100][100];
};

const struct screen screen_start =
{
        23,
        50,
        {
            {"===================================================================="},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                      Welcome to Pre-Move Paul                  ||"},
            {"||                               _____                            ||"},
            {"||                              /     \\                           ||"},
            {"||                             /       \\                          ||"},
            {"||                            |         |                         ||"},
            {"||                             \\       /                          ||"},
            {"||                              \\_____/                           ||"},
            {"||                              |     |                           ||"},
            {"||                              |     |                           ||"},
            {"||                              |     |                           ||"},
            {"||                              |     |                           ||"},
            {"||                              |     |                           ||"},
            {"||                              |_____|                           ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                    Press any button to continue                ||"},
            {"||                                                                ||"},
            {"===================================================================="}
        }
};

const struct screen screen_mainMenu1 =
{
        25,
        0,
        {
            {"===================================================================="},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||   ||==\\\\   //=\\\\  ||   || ||                                   ||"},
            {"||   ||   || //   \\\\ ||   || ||                                   ||"},
            {"||   ||==//  ||===|| ||   || ||                                   ||"},
            {"||   ||      ||   || ||   || ||          ()                       ||"},
            {"||   ||      ||   ||  \\\\-//  ||=====     ||                       ||"},
            {"||                                                                ||"},
            {"|| > P - Play                                                     ||"},
            {"||                                                               @||"},
            {"|| > L - Levels                                                   ||"},
            {"||                                                             @ @||"},
            {"|| > H - How to play                                          @@  ||"},
            {"||                                                          _@@@  ||"},
            {"|| > C - Credits                                           /___\\  ||"},
            {"||                                               ___________|_|___||"},
            {"|| > Q - Quit                                   /                 ||"},
            {"||                                             /__________________||"},
            {"||                                              |   ___         __||"},
            {"||                                              |  |_|_|       |  ||"},
            {"||                                              |              |  ||"},
            {"===================================================================="}
        }
};

const struct screen screen_mainMenu2 =
{
        25,
        0,
        {
            {"===================================================================="},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||   ||==\\\\   //=\\\\  ||   || ||                                   ||"},
            {"||   ||   || //   \\\\ ||   || ||                                   ||"},
            {"||   ||==//  ||===|| ||   || ||                                   ||"},
            {"||   ||      ||   || ||   || ||              ()                   ||"},
            {"||   ||      ||   ||  \\\\-//  ||=====         ||                   ||"},
            {"||                                                                ||"},
            {"|| > P - Play                                                     ||"},
            {"||                                                                ||"},
            {"|| > L - Levels                                                  @||"},
            {"||                                                              @ ||"},
            {"|| > H - How to play                                           @@ ||"},
            {"||                                                          __@@  ||"},
            {"|| > C - Credits                                           /___\\  ||"},
            {"||                                               ___________|_|___||"},
            {"|| > Q - Quit                                   /                 ||"},
            {"||                                             /__________________||"},
            {"||                                              |   ___         __||"},
            {"||                                              |  |_|_|       |  ||"},
            {"||                                              |              |  ||"},
            {"===================================================================="}
        }
};

const struct screen screen_mainMenu3 =
{
        25,
        0,
        {
            {"===================================================================="},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||   ||==\\\\   //=\\\\  ||   || ||                                   ||"},
            {"||   ||   || //   \\\\ ||   || ||                                   ||"},
            {"||   ||==//  ||===|| ||   || ||                                   ||"},
            {"||   ||      ||   || ||   || ||                  ()               ||"},
            {"||   ||      ||   ||  \\\\-//  ||=====             ||               ||"},
            {"||                                                                ||"},
            {"|| > P - Play                                                     ||"},
            {"||                                                               @||"},
            {"|| > L - Levels                                                   ||"},
            {"||                                                              @ ||"},
            {"|| > H - How to play                                           @  ||"},
            {"||                                                          _@@@  ||"},
            {"|| > C - Credits                                           /___\\  ||"},
            {"||                                               ___________|_|___||"},
            {"|| > Q - Quit                                   /                 ||"},
            {"||                                             /__________________||"},
            {"||                                              |   ___         __||"},
            {"||                                              |  |_|_|       |  ||"},
            {"||                                              |              |  ||"},
            {"===================================================================="}
        }
};
const struct screen screen_mainMenu4 =
{
        25,
        0,
        {
            {"===================================================================="},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||   ||==\\\\   //=\\\\  ||   || ||                                   ||"},
            {"||   ||   || //   \\\\ ||   || ||                                   ||"},
            {"||   ||==//  ||===|| ||   || ||                                   ||"},
            {"||   ||      ||   || ||   || ||              ()                   ||"},
            {"||   ||      ||   ||  \\\\-//  ||=====         ||                   ||"},
            {"||                                                                ||"},
            {"|| > P - Play                                                     ||"},
            {"||                                                                ||"},
            {"|| > L - Levels                                                   ||"},
            {"||                                                              @ ||"},
            {"|| > H - How to play                                          @@@ ||"},
            {"||                                                          _@@   ||"},
            {"|| > C - Credits                                           /___\\  ||"},
            {"||                                               ___________|_|___||"},
            {"|| > Q - Quit                                   /                 ||"},
            {"||                                             /__________________||"},
            {"||                                              |   ___         __||"},
            {"||                                              |  |_|_|       |  ||"},
            {"||                                              |              |  ||"},
            {"===================================================================="}
        }
};

const struct screen screen_mainMenu5 =
{
        25,
        0,
        {
            {"===================================================================="},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||   ||==\\\\   //=\\\\  ||   || ||                                   ||"},
            {"||   ||   || //   \\\\ ||   || ||                                   ||"},
            {"||   ||==//  ||===|| ||   || ||                                   ||"},
            {"||   ||      ||   || ||   || ||          ()                       ||"},
            {"||   ||      ||   ||  \\\\-//  ||=====     ||                       ||"},
            {"||                                                                ||"},
            {"|| > P - Play                                                     ||"},
            {"||                                                               @||"},
            {"|| > L - Levels                                                 @@||"},
            {"||                                                             @@ ||"},
            {"|| > H - How to play                                          @   ||"},
            {"||                                                          _@@@  ||"},
            {"|| > C - Credits                                           /___\\  ||"},
            {"||                                               ___________|_|___||"},
            {"|| > Q - Quit                                   /                 ||"},
            {"||                                             /__________________||"},
            {"||                                              |   ___         __||"},
            {"||                                              |  |_|_|       |  ||"},
            {"||                                              |              |  ||"},
            {"===================================================================="}
        }
};

const struct screen screen_howToPlay1 =
{
        23,
        50,
        {
            {"===================================================================="},
            {"||                                                                ||"},
            {"||  Q - Back to menu                                              ||"},
            {"||                                                                ||"},
            {"||  What is Pre-move Paul?                                        ||"},
            {"||   > Pre-move Paul is a prediction style puzzle game            ||"},
            {"||     You input moves in a chained order. Paul then follows      ||"},
            {"||     whatever you pressed and does it despite what happens.     ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||        This is Paul             _______________________        ||"},
            {"||           |                    |                       |       ||"},
            {"||           |                    | Hello I am Paul  :P   |       ||"},
            {"||           |                    |                       |       ||"},
            {"||           |                    | ______________________|       ||"},
            {"||           |                    |/                              ||"},
            {"||           |-----------------> ()                               ||"},
            {"||                               ||                               ||"},
            {"||                                                N - Next Page   ||"},
            {"||                                                                ||"},
            {"===================================================================="}
        }
};

const struct screen screen_howToPlay2 =
{
        23,
        50,
        {
            {"===================================================================="},
            {"||                                                                ||"},
            {"||  Q - Back to menu                                              ||"},
            {"||                                                                ||"},
            {"||  How do you move Paul?                                         ||"},
            {"||   > Paul has Hyper-Planing Doing Disorder, meaning he has      ||"},
            {"||     to plan whatever he has to do in advance.                  ||"},
            {"||                                                                ||"},
            {"||      His moves are: a/A (left)   You type them out beforehand  ||"},
            {"||                     w/W (jump)                                 ||"},
            {"||                     d/D (right)  Input: ddd a2 w d3            ||"},
            {"||                                                                ||"},
            {"||      _______________________      ___________________________  ||"},
            {"||     |    a    a    w    d   |    |      a2            d3     | ||"},
            {"||     | (left left jump right)|    | (left twice) (right thrice| ||"},
            {"||     | ______________________|    | __________________________| ||"},
            {"||     |/                           |/                            ||"},
            {"||     ()                           ()                            ||"},
            {"||     ||                           ||                            ||"},
            {"||   P - Previous Page                            N - Next Page   ||"},
            {"||                                                                ||"},
            {"===================================================================="}
        }
};

const struct screen screen_quitScreen =
{
        23,
        200,
        {
            {"===================================================================="},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                                   __                           ||"},
            {"||                                  /__\\                           ||"},
            {"||                       ____________||__                         ||"},
            {"||                      /- - - - - - - - \\                        ||"},
            {"||                     /- - - - - - - - - \\                       ||"},
            {"||                    /- - - - - - - - - - \\                      ||"},
            {"||                    [][][][][][][][][][][]                      ||"},
            {"||                    []                  []                      ||"},
            {"||                    []        ()        []                      ||"},
            {"||                    []  [==]  ||  [==]  []                      ||"},
            {"||                    [][][][][][][][][][][]                      ||"},
            {"||                                                                ||"},
            {"||                   Thank you for playing!!!                     ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"===================================================================="}
        }
};


const struct screen screen_gameOver1 =
{
        23,
        200,
        {
            {"===================================================================="},
            {"||                                                                ||"},
            {"||             Your Hyper-Planing Doing Disorder got you          ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                    Would you like to try again?                ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||      > Y - Yes                          >  N - No              ||"},
            {"||                                            (Go to main menu)   ||"},
            {"||                                                                ||"},
            {"===================================================================="}
        }
};

const struct screen screen_winScreen =
{
        23,
        200,
        {
            {"===================================================================="},
            {"||                                                                ||"},
            {"||                            You Won                             ||"},
            {"||                   You now get out of the house                 ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                         Paul is now happy                      ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"||      > Q - Go back to main menu         >  R - Restart Game    ||"},
            {"||                                                                ||"},
            {"||                                                                ||"},
            {"===================================================================="}
        }
};

typedef struct  {int x, y;} Vec2;


struct roomData {
    int roomX;
    int roomY;
    int attempts;
};

// roomLayouts
// This is a global variable that needs to exist because this will tell all the other functions what room level we are on
int roomLevel = 0;


// This variable is for handling the current room we have, basically we just make this room equal to all the values in the room we're currently at
int curRoom[100][100];

// Function prototypes declaration
void update();
void start();
void restart();
void initialize();

// sound
void delayMs(int ms);
void play(int melody[][2], int length);
void playWinSound();
void playGameOverSound();
void playErrorSound();
void menuMusicThread();
void gameplayMusicThread();
void stopAllMusic();
bool menuMusicRunning = false;
bool gameplayMusicRunning = false;


// UI
void startScreen();
void mainMenu();
void drawGameOver();
void winGame();
double mainMenuAnimTime = 1/16;


// Functions for displaying the screen
void drawScreen();
void printCell(int);
void clearScreen();
void setPlayerBackground();
void printDisplayCoordinatesX();
void displayUIScreen(struct screen);
void howToPlayScreen();
void quitScreen();

// Function responsible for the roomLayouts
void setRoom(int);

// Functions responsible for input
void getInput();

// Function for moving the player
void findPlayerPos(); // Finds the location of the players head
void movePlayer(char inputData[],int inputLength);
void moveX(int);
void moveRight();
void jump(bool);
void gravCheck();
void changePlayerPos(int);
int convertToNum(char);
const int jumpHeight = 2;

// Variables for player
int attemptTimes = 0; // Amount of times the player can pre-move



// Function for time
void waitDelay(float);
void timeHandler();
clock_t previousFrameTime = 0;
clock_t currentFrameTime = 0;
double deltaTime = 0;

//  Create vector 2 struct: A Vector 2 only holds 2 integers, a x and a y
Vec2 headPosPL;
Vec2 bodyPosPL;

float moveSpeed = 300; // The delay in displaying the next move

// Game Loop Variable
bool gameOn = true;
void gameOver();
void winCheck();

// A set of colors, 16 bit color palatte
// Standard colors
#define BLACK         "\033[30m"
#define RED           "\033[31m"
#define GREEN         "\033[32m"
#define YELLOW        "\033[33m"
#define BLUE          "\033[34m"
#define MAGENTA       "\033[35m"
#define CYAN          "\033[36m"
#define WHITE         "\033[37m"

// Bright colors
#define GRAY           "\033[90m"
#define BRIGHT_RED     "\033[91m"
#define BRIGHT_GREEN   "\033[92m"
#define BEIGE  "\033[93m"
#define BRIGHT_BLUE    "\033[94m"
#define BRIGHT_MAGENTA "\033[95m"
#define BRIGHT_CYAN    "\033[96m"
#define BRIGHT_WHITE   "\033[97m"
#define RESET         "\033[0m"


// Others

struct roomData room[10] =
{
    // Room 1
    {18, 10, 5},
    // Room 2
    {20, 14, 5},
    // Room 3
    {11, 20, 5},
    //Room 4
    {20, 15, 5},
    //Room 5
    {20, 15, 5},
};

// Container of all the roomLayouts were in
const int roomLayouts[5][100][100] = {
    {
        // Room 1
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 5, 5, 0, 5, 5, 0, 0, 0, 0, 5},
        {5, 1, 0, 0, 0, 7, 5, 0, 5, 5, 0, 5, 5, 0, 0, 0, 0, 5},
        {5, 2, 11, 12, 7, 5, 5, 0, 5, 5, 0, 5, 5, 0, 9, 10, 0, 5},
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},

    },
    {
        // Room 2
          {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
        {5, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 0, 3, 4, 0, 0, 0, 0, 0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8, 0, 0, 0, 0, 5},
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 8, 0, 0, 0, 5},
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 5, 5},
        {5, 0, 0, 0, 0, 7, 5, 5, 5, 5, 0, 5, 0, 5, 0, 5, 5, 5, 5, 5},
        {5, 0, 0, 0, 7, 5, 5, 5, 5, 5, 0, 5, 0, 5, 0, 5, 5, 5, 5, 5},
        {5, 0, 0, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5},
        {5, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 5},
        {5,5, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 0, 0, 0, 0, 0, 2, 5},
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},

    },
    {
        // Room 3
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 3, 4, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 3, 4, 5},
        {5, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 8, 0, 0, 11, 12, 0, 0, 0, 0, 5},
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 7, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 7, 5, 5},
        {5, 0, 5, 5, 5, 0, 5, 5, 5, 5, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 8, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 5, 8, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 5, 5, 5, 0, 5, 5, 0, 5, 0, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 7, 5},
        {5, 0, 1, 0, 0, 0, 0, 0, 7, 5, 5},
        {5, 0, 2, 0, 0, 9, 10, 7, 5, 5, 5},
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
    },
    {
        //Room 4
         {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 11, 12, 0, 0, 0, 0, 0, 3, 4, 0, 5},
        {5, 0, 0, 0, 7, 5, 0, 5, 0, 5, 5, 0, 5, 0, 5, 5, 5, 5, 5, 5},
        {5, 0, 0, 5, 5, 5, 0, 5, 0, 5, 5, 0, 5, 0, 5, 5, 5, 5, 5, 5},
        {5, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 5, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 5, 5, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 5, 5, 5, 8, 0, 0, 0, 0, 0, 0, 0, 9, 10, 0, 0, 0, 0, 0, 5},
        {5, 5, 5, 5, 5, 5, 0, 5, 0, 5, 0, 5, 5, 5, 8, 0, 0, 0, 0, 5},
        {5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 5, 5, 5, 5, 8, 0, 1, 0, 5},
        {5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 8, 2, 0, 5},
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},

    },
    {
        // Room 5
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 5, 5, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5},
        {5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 2, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 5, 0, 5, 0, 5, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5},
        {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},

    }
};

int main()
{

    // Initialize function
    initialize();

}

// Initialize functions
void initialize()
{
    printf("\e[?25l");


    menuMusicRunning = true;
    _beginthread(menuMusicThread, 0, NULL);

    // Start at a set room
    startScreen();

    // Start from the beginning room

    //setRoom(0);
}

void startScreen()
{
    displayUIScreen(screen_start);
    while(!_kbhit());
    getch();
    system("cls");
    displayUIScreen(screen_mainMenu1);
    mainMenu();
}


int state = 1;
void mainMenu()

    {
    // Start menu music
    if(!menuMusicRunning) {
        stopAllMusic(); // Stop any other music first
        menuMusicRunning = true;
        _beginthread(menuMusicThread, 0, NULL);
    }

    while(1)
    {
        timeHandler();

       mainMenuAnimTime += deltaTime;


       if(mainMenuAnimTime > 1000 / 4)
       {
            state++;
            if(state > 4) state = 1;

            system("cls");
            switch(state)
            {
                case 1: displayUIScreen(screen_mainMenu1); break;
                case 2: displayUIScreen(screen_mainMenu2); break;
                case 3: displayUIScreen(screen_mainMenu3); break;
                case 4: displayUIScreen(screen_mainMenu4); break;
            }



            if(_kbhit())
            {
                char c = getch();

                switch(c)
                {
                    case 'p':
                    case 'P':
                        stopAllMusic();
                        start();
                    return; break;
                    case 'h':
                    case 'H': howToPlayScreen(); return; break;
                    case 'q':
                    case 'Q': quitScreen(); return; break;

                }
            }
            mainMenuAnimTime = 0;

        }
    }
}

void quitScreen()
{
    system("cls");
    displayUIScreen(screen_quitScreen);
    return;
}

void howToPlayScreen()
{
    system("cls");
    displayUIScreen(screen_howToPlay1);

    int page = 1;
    int curPage = page;
    while(1)
    {
        if(curPage != page)
        {
            if(page > 3) page = 3;
            if(page < 1) page = 1;
            curPage = page;

            system("cls");
            switch(page)
            {
                case 1: displayUIScreen(screen_howToPlay1); break;
                case 2: displayUIScreen(screen_howToPlay2); break;
            }
        }

        if(_kbhit())
        {
            char c = getch();

            switch(c)
            {
                // Y case, Quit start screen
                case 'Q':
                case 'q': mainMenu(); return; break;

                // N case, shows next page
                case 'N':
                case 'n': page++; break;
                // P case, shows previous page
                case 'P':
                case 'p': page--; break;
            }
        }
    }
}

void drawGameOver()
{
    system("cls");
    displayUIScreen(screen_gameOver1);

     // Switch back to menu music
    stopAllMusic();
    menuMusicRunning = true;
    _beginthread(menuMusicThread, 0, NULL);

    while(1)
    {
        if(_kbhit())
        {
            char c = getch();

            switch(c)
            {
                case 'y':
                case 'Y': stopAllMusic(); // Stop menu music
                          restart(); break;
                case 'n':
                case 'N': mainMenu(); break;

            }
        }
    }

}

// Beginning of the game function
void start()
{
    attemptTimes = room[roomLevel].attempts;
    setRoom(roomLevel);
    system("cls");
    drawScreen();
    gameOn = true;


    gameplayMusicRunning = true;
    _beginthread(gameplayMusicThread, 0, NULL);

    // Update Function - Used for the update function of the game
    update();
}

// Update Functions
void update()
{
    // The idea is that we ask the user for input then we do stuff based on what we inputted
    while (gameOn == true)
    {
        if(attemptTimes > 0)
        {
            getInput();
        } else
        {
            gameOn = false;
            break;
        }

    }

    // Checks if the game should still run
    if(gameOn) update(); else gameOver();




    return;
}

void gameOver()
{

    drawGameOver();
}


void drawScreen()
{
    clearScreen();

    // Responsible for drawing the entire room
    for(int y = 0; y < room[roomLevel].roomY; y++)
    {
        if(y == 0)
        {
            for(int i = 0; i < room[roomLevel].roomX  + 4; i++)
            {
                printf("--");
            }
            printf("\n");
        }

        for(int x = 0; x < room[roomLevel].roomX; x++)
        {

            if(x == 0)
            {
                printf("| ");
            }

            printCell(curRoom[y][x]);

            if(x == room[roomLevel].roomX - 1)
            {
                printf("> %d", room[roomLevel].roomY - y);
                if(room[roomLevel].roomY - y >= 10) printf(" |"); else printf("  |");

            }

        }
        printf("\n");


        // Handles displaying the coordinates of the Y level of the room
        if(y ==  room[roomLevel].roomY - 1)
        {
            printDisplayCoordinatesX();

            printf("\n");
            for(int i = 0; i < room[roomLevel].roomX + 4; i++)
            {
                printf("--");
            }

        }
    }



}



void printDisplayCoordinatesX()
{
    // Purpose of the function is to print the lower portion of the board
    // Added for clarity
    int currentCharacter = 'A';
    for(int i = 0; i < room[roomLevel].roomX; i++)
    {
        if(i == 0) printf("| ");
        printf("v ");
        if(i == room[roomLevel].roomX - 1) printf("     |");
    }

    printf("\n");

    for(int i = 0; i < room[roomLevel].roomX; i++)
    {
        if(i == 0) printf("| ");
        printf("%c ", currentCharacter);
        if(i == room[roomLevel].roomX - 1) printf("     |");
        currentCharacter++;
    }
}

void printCell(int value)
{
    // Function for quick printing
    switch(value)
    {
        case 0: printf("  "); break;    // Blank space
        case 1: printf(BEIGE"()"); break;    // Player head
        case 2: printf(RED"||"); break;    // Player body
        case 3: printf(YELLOW"|-"); break;    // Door left side
        case 4: printf(YELLOW"-|"); break;    // Door Right side
        case 5: printf("[]"); break;    // Normal block
        case 6: printf("/\\"); break;   // Spike
        case 7: printf("/T"); break;    // Right side staircase
        case 8: printf("T\\"); break;    // Left side staircase
        case 9: printf(BRIGHT_GREEN"[-"); break;    // Left side Couch
        case 10: printf(BRIGHT_GREEN"-]"); break;    // Left side Couch
        case 11: printf(BRIGHT_CYAN"[="); break;    // Upside Lamp
        case 12: printf(BRIGHT_CYAN"=]"); break;    // Downside Lamp
        default: printf("er"); break;   // Error case
    }

    printf(RESET);
}


void setRoom(int desiredRoom)
{
    // Sets the current room equal to the room we want to be, this is so that we're working with a copy of the room rather than the original room itself
    for(int y = 0; y < 100; y++)
    {
        for(int x = 0; x < 100; x++)
        {
            curRoom[y][x] = roomLayouts[desiredRoom][y][x];
        }
    }
}

void getInput()
{
    char inputData[100] = "";

    printf("\n\n============================================");
    printf("\nAttempts left: %d", attemptTimes);
    printf("\n\nControls: \n    D/d - Right      Input only R to restart level\n    A/a - Left\n    W/w - Jump\n\nInput:  ");

    // Because we are using sounds and such, we cannot use scanf() because it is a blocking function
    // So we opt to recreate it's functionality using conio.h


    // Initially clear the input buffer
    while(_kbhit())
    {
        getch();
    }

    int inpIndex = 0;

    while(1)
    {
        // Handles time functionality even while getting input, this is so stuff doesn't pause even if we're inputting inputs
        timeHandler();

        // kbhit() detects if there is an input in the input buffer
        if(_kbhit())
        {
            // Will get the current character and place it on the screen
            char c = getch();

            // All printable readable characters in ascii are from 36 - 126
            if(((int)c >= 36 && (int)c <= 126) || c == ' ')
            {
                // We use our index to keep track of where we are on the Input array
                inputData[inpIndex] = c;
                printf("%c", c);
                // We increase our index by 1
                inpIndex++;
            } else if((int)c == 8 && inpIndex > 0)
            {
                // 8 is the ASCII value of backspace
                inputData[inpIndex] = ' ';
                printf("\b \b");
                inpIndex--;
            } else if((int)c == 13)
            {
                // 13 is the ASCII value of
                drawScreen();
                printf("hello");
                break;
            }
        }

    }


    // Finds the length of the given data, we can read this as a string so we use strLen
    int inputLength = strlen(inputData);
    previousFrameTime = clock();


    if(inputData[0] == 'R' || inputData[0] == 'r') restart();

    printf("\033[2J\033[H"); //  Makes the screen black for 1 frame
    movePlayer(inputData, inputLength);
}

void restart()
{

    gameplayMusicRunning = true; // Start gameplay music
    _beginthread(gameplayMusicThread, 0, NULL);
    start();
    attemptTimes++;
    drawScreen();
}

void movePlayer(char inputData[],int inputLength)
{
    // Test input of the data
    for(int i = 0; i < inputLength; i++)
    {
        // Updates the system on the position of the player



        // Determine how the said data will be used, we can use a switch statement here

        bool withinNumRange = ((int)inputData[i+1] >= 48) && ((int)inputData[i+1] <= 57);

        if((i == inputLength - 1 && !withinNumRange) || !withinNumRange || inputLength == 1)
        {
            // When player uses the character only input style
            changePlayerPos(inputData[i]);
        } else
        {
            // When the player uses a line command

            // Read the values of the line
            // i + 1 is a the highest number
            int moveTimes = 0;
            int j = 0;

            // Converts the string of numbers into a integer
            while((int)inputData[i+1+j] >= 48 && (int)inputData[i+1+j] <= 57)
            {
                moveTimes *= 10;
                moveTimes += convertToNum(inputData[i+1]);
                j++;
            }

            // Does the movement n amount of times
            for(int c = 0; c < moveTimes; c++)
            {
                changePlayerPos(inputData[i]);
            }

            i += j;
        }
    }


    // We check if the player is grounded
    findPlayerPos();
    while(curRoom[bodyPosPL.y + 1][bodyPosPL.x] != 5 && curRoom[bodyPosPL.y+1][bodyPosPL.x] != 7 && curRoom[bodyPosPL.y+1][bodyPosPL.x] != 8)
    {
        gravCheck();
    }

    // After doing all those actions, we check if our current position is at the door
    winCheck();
    drawScreen();

}

void changePlayerPos(int value)
{
        findPlayerPos();
        bool canJump = curRoom[bodyPosPL.y + 1][bodyPosPL.x] != 0;
        bool jumped = false;

        switch(value)
        {
            case 'a':
            case 'A':
                Beep(1700, moveSpeed/3);
                moveX(-1);
                break;
            case 'd':
            case 'D':
                Beep(1450, moveSpeed/3);
                moveX(1);
                break;
            case 'w':
            case 'W':
                Beep(2000, moveSpeed/3);
                jump(canJump);
                jumped = true;
                break;
            case 'f':
            case 'F':
                printf("\nYou stopped moving");
                break;
            case ' ':
                return;
                break;
            default:
                Beep(1000, moveSpeed);
                printf("\nThat is not a valid movement option");
                break;
        }

        if(!jumped) gravCheck();
        drawScreen();
        waitDelay(moveSpeed);
}


int convertToNum(char value)
{

    int converted = 0;

    switch(value)
    {
        case '1': converted = 1; break;
        case '2': converted = 2; break;
        case '3': converted = 3; break;
        case '4': converted = 4; break;
        case '5': converted = 5; break;
        case '6': converted = 6; break;
        case '7': converted = 7; break;
        case '8': converted = 8; break;
        case '9': converted = 9; break;
        case '0': converted = 0; break;
    }

    return converted;



}



void moveX(int moveForce)
{
    // Move force is the direction we want to go in the x axis

    Vec2 blockPos = {bodyPosPL.x + moveForce, bodyPosPL.y};
    int blockVal = curRoom[blockPos.y][blockPos.x]; // This is the value of the the block

    // Staircase checking
    if(blockVal != 5 && blockVal != 8 && blockVal != 7)
    {
        // Check if it can move to the left, that means all things to the left are 0
        bool canMove = (curRoom[headPosPL.y][headPosPL.x + moveForce] != 5) && (curRoom[bodyPosPL.y][bodyPosPL.x + moveForce] != 5);
        if(!canMove) return;

        curRoom[headPosPL.y][headPosPL.x + moveForce] = 1;
        curRoom[bodyPosPL.y][bodyPosPL.x + moveForce] = 2;

        curRoom[headPosPL.y][headPosPL.x] = roomLayouts[roomLevel][headPosPL.y][headPosPL.x];
        curRoom[bodyPosPL.y][bodyPosPL.x] = roomLayouts[roomLevel][bodyPosPL.y][bodyPosPL.x];


        // Draws the background objects of the player
        setPlayerBackground();

    } else if (blockVal == 8 || blockVal == 7)
    {
        // This happens when we are about to hit a stair case

        // Check if the 2 blocks above the staircase are free
        bool canGetUp = (curRoom[blockPos.y - 1][blockPos.x] != 5 && curRoom[blockPos.y-2][blockPos.x] != 5);
        if(!canGetUp) return;

        curRoom[headPosPL.y - 1][headPosPL.x + moveForce] = 1;
        curRoom[bodyPosPL.y - 1][bodyPosPL.x + moveForce] = 2;

        switch(roomLayouts[roomLevel][headPosPL.y][headPosPL.x])
        {
            case 1:
                curRoom[headPosPL.y][headPosPL.x] = 0;
                break;
            default:
                curRoom[headPosPL.y][headPosPL.x] = roomLayouts[roomLevel][headPosPL.y][headPosPL.x];
        }

        switch(roomLayouts[roomLevel][bodyPosPL.y][bodyPosPL.x])
        {
            case 2:
                curRoom[bodyPosPL.y][bodyPosPL.x] = 0;
                break;
            default:
                curRoom[bodyPosPL.y][bodyPosPL.x] = roomLayouts[roomLevel][bodyPosPL.y][bodyPosPL.x];
        }
    }
}

void jump(bool canJump)
{



    // This checks if we're in the air, if we are at the air then we don't jump but instead fall
    if(!canJump)
    {
        gravCheck();
        return;
    }

    // We check the spaces above the player's head if it is free
    for(int i = 1; i <= jumpHeight; i++)
    {
        // When we hit a block (the block above is not free) then the head position will be the space below it
        if(curRoom[headPosPL.y - i][headPosPL.x] != 0)
        {
            setPlayerBackground();


            curRoom[headPosPL.y - i + 1][headPosPL.x] = 1; // Set the head
            curRoom[bodyPosPL.y - i + 1][bodyPosPL.x] = 2; // Set the body
            break;
        }

        if(i == jumpHeight)
        {
            setPlayerBackground();


            curRoom[headPosPL.y - jumpHeight][headPosPL.x] = 1; // Set the head
            curRoom[bodyPosPL.y - jumpHeight][bodyPosPL.x] = 2; // Set the body
        }
    }
}

void findPlayerPos()
{
    for(int y = 0; y < room[roomLevel].roomY; y++)
    {
        for(int x = 0; x < room[roomLevel].roomX; x++)
        {
            if(curRoom[y][x] == 1)
            {
                headPosPL.x = x;
                headPosPL.y = y;
                bodyPosPL.x = x;
                bodyPosPL.y = y + 1;
                break;
            }
        }
    }
}


void timeHandler()
{
    currentFrameTime = clock();
    deltaTime = ((double)(currentFrameTime - previousFrameTime) / CLOCKS_PER_SEC * 1000);
    previousFrameTime = currentFrameTime;
}


void waitDelay(float waitForMS)
{
    // Function that replicates Sleep() in windows.h
    int t = 0;
    while(t < waitForMS)
    {
        t += (float)deltaTime;
        timeHandler();
    }
}

void clearScreen()
{
    // Gives the illusion of clearing the screen
    printf("\033[H");
}

void gravCheck()
{
    // Finds position of the head
    findPlayerPos();


    if(curRoom[bodyPosPL.y+1][bodyPosPL.x] != 5 && curRoom[bodyPosPL.y+1][bodyPosPL.x] != 7 && curRoom[bodyPosPL.y+1][bodyPosPL.x] != 8)
    {
        Beep(1000, moveSpeed/4);
        setPlayerBackground();

        curRoom[headPosPL.y + 1][headPosPL.x] = 1;
        curRoom[bodyPosPL.y + 1][bodyPosPL.x] = 2;
        drawScreen();
        waitDelay(moveSpeed);
    }
}

void setPlayerBackground()
{
        // We use 2 separate switch statements because we check behind the head and we check behind the body
        switch(roomLayouts[roomLevel][headPosPL.y][headPosPL.x])
        {
            case 1:
            case 2:
                curRoom[headPosPL.y][headPosPL.x] = 0;
                break;
            default:
                curRoom[headPosPL.y][headPosPL.x] = roomLayouts[roomLevel][headPosPL.y][headPosPL.x];
        }

        switch(roomLayouts[roomLevel][bodyPosPL.y][bodyPosPL.x])
        {
            case 1:
            case 2:
                curRoom[bodyPosPL.y][bodyPosPL.x] = 0;
                break;
            default:
                curRoom[bodyPosPL.y][bodyPosPL.x] = roomLayouts[roomLevel][bodyPosPL.y][bodyPosPL.x];
        }
}

void winCheck()
{
    // This function is called when alll the input actions have been completed, this checks if the player is currently at a door
    findPlayerPos();

    int hdX = headPosPL.x, hdY = headPosPL.y, bdX = bodyPosPL.x, bdY = bodyPosPL.y;

    if(roomLayouts[roomLevel][hdY][hdX] == 4 || roomLayouts[roomLevel][hdY][hdX] == 3)
    {
        printf("\nYou win!!!");
        Beep(2000, 1000);

        stopAllMusic();
        Sleep(50);
        roomLevel++;


        if(roomLevel == 4)
        {
            winGame();
            return;
        } else
        {
            start();
        }

    } else
    {
        attemptTimes--;
    }

}

void displayUIScreen(struct screen e)
{
    for(int i = 0; i < e.lines; i++)
    {
        printf("%s\n", e.screenElement[i]);
        Sleep(e.screenAnimMS);
    }
}


// Menu melody
void menuMusicThread()
{
    int bpm = 120;
    int beat = 60000 / bpm;

    int menuMelody[][2] = {
        {Cs4, beat},{Ds2,  beat },{Ds5, beat/2},{Cs5, beat/2},
    };
    int melodyLen = sizeof(menuMelody) / sizeof(menuMelody[0]);

    while(menuMusicRunning) {
        play(menuMelody, melodyLen);
        if(!menuMusicRunning) break;

    }
}

void winGame()
{
    system("cls");
    displayUIScreen(screen_winScreen);

    while(1)
    {
        if(kbhit())
       {
            char c = getch();

            switch(c)
            {
                case 'Q':
                case 'q': mainMenu(); break;
                case 'p':
                case 'P': roomLevel = 0; start(); break;
            }
       }
    }
}

// Gameplay melody
void gameplayMusicThread()
{
    int bpm = 120;
    int beat = 60000 / bpm;


    int gameplayMelody[][2] = {
        {Ds3, beat},{Fs2, beat},{Ds2, beat},{Fs2, beat}
    };
    int melodyLen = sizeof(gameplayMelody) / sizeof(gameplayMelody[0]);

    while(gameplayMusicRunning) {
        play(gameplayMelody, melodyLen);
        if(!gameplayMusicRunning) break;
    }
}

void stopAllMusic()
{
    // Stop both music threads
    menuMusicRunning = false;
    gameplayMusicRunning = false;

    // Give threads time to exit and clear Beeps
    Sleep(200);

    Beep(0, 0); //0hz beep to clear sound queue

}






