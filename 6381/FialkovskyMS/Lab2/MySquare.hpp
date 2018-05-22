#ifndef _Square
#define Square

#include "MyShape.hpp"

class MySquare final : public MyShape {
public:
    MySquare(sf::RenderWindow *w, float x, float y);

    virtual void ChangePosition(float new_x, float new_y) override ;
    virtual void ChangeAngle(int angle) override;
    virtual void ChangeColor(int r, int g, int b) override;
    virtual void ChangeScale(float kf) override;
    virtual void Draw() override;
};

#endif