#ifndef __LOTTERYMACHINE_H__
#define __LOTTERYMACHINE_H__

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

class LotteryMachine
{
    private:
        std::vector<std::string> ref;

    public:
    LotteryMachine(std::vector<std::string> &countries)
    {
        ref = countries;
        std::srand(std::time(0));
    }

    void RandomCountries()
    {   
        int r;
        int group_counter = 1;

        for(auto i: ref)
        {
            if(ref.size() % 4 == 0)
            {
                std::cout << "Grupa " << group_counter << ":" << std::endl;
                group_counter++; 
            }
            r = std::rand() % ref.size();
            std::cout << "\t" << ref[r] << std::endl;
            ref.erase(ref.begin()+r);
        }
    }
};

#endif