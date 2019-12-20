#ifndef GAME_H
#define GAME_H

class Graphics; //forward declare hehe

class Game{
public:
    Game();
    ~Game();
private:
    void gameLoop();
    void draw(Graphics &Graphics);
    void update(float elapsedTime);

};

#endif //GAME_H
