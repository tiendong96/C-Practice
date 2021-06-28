#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>

using namespace std;
bool game_over;
const int width = 20;
const int height = 20;
int tailX[100], tailY[100];
int nTail; //length of the tail
int x, y, foodX, foodY, score;
char head = 'O';
enum Direction {STOP = 0, LEFT, RIGHT, UP, DOWN};
Direction dir;

void Setup(){
    game_over = false;
    dir = STOP;
    srand(time(NULL));

//snake head will be centered in the middle of the map
    x = width/2; 
    y = height/2;

//food will spawn randomly within the boundaries of the map
    foodX = rand() % width;
    foodY = rand() % height;

    score = 0;
}
void gameOver(){
    system("cls");
    cout << "Game Over";
    game_over = true;
}
void Draw(){
    system("cls");
    
    //top border of the map
    for (int i = 0; i < width+2; i++){
        cout << "#";
    }
    cout << endl;
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width+1; j++){
            if (j == 0)
                cout << "#";
            //when height/width == location of snake, print O for the head of the snake
            if (i == y && j == x){
                cout << head;
            //print food
            }else if (i == foodY && j == foodX){
                cout << "F";
            }else{
                bool print = false;
                //print the tail
                for (int k = 0; k < nTail; k++){
                    if (tailX[k] == j && tailY[k] == i){
                        cout << "o";
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }
    //bottom border of the map
    for (int i = 0; i < width + 2; i++){
        cout << "#";
    }
    cout << endl;
    cout << "Your location: " << "X: " << x << " Y: " << y << endl;
    cout << "Food location: " << "X: " << foodX << " Y: " << foodY << endl;
    cout << "TailX: " << tailX[0] << " TailY: " << tailY[0] << endl;
    cout << "Score: " << score << endl;
}
void Input(){

    //will return positive number if character is pressed on the keyboard, else 0
    if (_kbhit()){
        switch(_getch()){
            case 'w':
                dir = UP;
                head = '^';
                break;
            case 'a':
                dir = LEFT;
                head = '<';
                break;
            case 's':
                dir = DOWN;
                head = 'v';
                break;
            case 'd':
                dir = RIGHT;
                head = '>';
                break;
            case 'x':
                gameOver();
                break;
        }
    }
}
void Logic(){

    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++){
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }

    //goes through wall onto the opposite side
    if (x >= width) x = 0; else if (x < 0) x = width - 1;
    if (y >= height) y = 0; else if (y < 0) y = height - 1;

    for (int i = 0; i < nTail; i++)
        if(tailX[i] == x && tailY[i] == y)
            gameOver();
            
    //if player eats food, increase score and replace location of food
    if (x == foodX && y == foodY){
        score += 10;
        foodX = rand() % width;
        foodY = rand() % height;
        nTail++;
    }
}
int main(){
    Setup();
    while(!game_over){
        Draw();
        Input();
        Logic();
        Sleep(50);
    }

    return 0;
}