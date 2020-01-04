#include "lotteryMachine.h"

int main()
{
    std::vector<std::string> panstwa = {{"Polska"},      {"Niemcy"},
                                        {"Czechy"},      {"Slowacja"},
                                        {"Francja"},     {"Belgia"},
                                        {"Hiszpania"},   {"Litwa"},
                                        {"Portugalia"},  {"Macedonia"},
                                        {"Grecja"},      {"Ukraina"},
                                        {"Albania"},     {"Bialorus"},
                                        {"Czarnogora"},  {"Chorwacja"},
                                        {"Dania"},       {"Irlandia"},
                                        {"Holandia"},    {"Luksemburg"},
                                        {"Lotwa"},       {"Malta"},
                                        {"Moldawia"},    {"Monako"}};
    LotteryMachine maszyna = panstwa;
    maszyna.RandomCountries();
}