

#ifndef level2_hpp
#define level2_hpp

#include "nextGenerator.h"
#include <cstdlib>
#include <iostream>
////////////
//class Block;
//class Cell;
/////////

class Level2:public NextGenerator{
    int rand_result;
    virtual Block* generateNext(std::vector<std::vector <Cell>> &grid,int &success,char &k,char &next,bool init,bool norand,std::string norandfilename) override;
public:
};

#endif /* level2_hpp */
