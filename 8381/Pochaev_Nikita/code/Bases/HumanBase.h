#ifndef OOP_HUMANBASE_H
#define OOP_HUMANBASE_H

#include "GameBase.h"
#include "../Units/ObjectFactory.h"
#include "../Units/Unit.h"

class HumanBase : public GameBase
{
public:
    HumanBase() = default;
    ~HumanBase() override = default;
    void describeYourself() override;
};

#endif //OOP_HUMANBASE_H