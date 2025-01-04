#pragma once

#include <string>
#include <vector>
#include <memory>

//////////////////
// Player Class //
//////////////////

class Player {
public:
    Player(const std::string& name, int number);
    ~Player();
    std::string getName() const;
    int getNumber() const;
    void setPerformance(int performance);
    int getPerformance() const;
private:
    std::string name;
    int number;
    int performance;
};

////////////////
// Team Class //
////////////////

class Team {
public:
    Team(const std::string& name);
    ~Team();
    void addPlayer(const Player& player);
    void removePlayer(const std::string& playerName);
    Player getPlayer(const std::string& playerName) const;
    std::vector<Player> getPlayers() const;
private:
    std::string name;
    std::vector<Player> players;
};

///////////////////////////////////////
// Interactive Coaching System Class //
///////////////////////////////////////

class InteractiveCoachingSystem {
public:
    InteractiveCoachingSystem();
    ~InteractiveCoachingSystem();
    void makeDecision(const std::string& decision);
    void substitutePlayer(const std::string& outPlayer, const std::string& inPlayer);
    void callPlay(const std::string& play);
    void analyzePerformance();
    void coachChallenge(const std::string& challenge);
    void updateMomentumMeter(int change);
    void unlockStrategy(const std::string& strategy);
private:
    Team team;
    int momentumMeter;
    std::vector<std::string> playbook;
    std::vector<std::string> unlockedStrategies;
};

#endif // INTERACTIVE_COACHING_SYSTEM_H