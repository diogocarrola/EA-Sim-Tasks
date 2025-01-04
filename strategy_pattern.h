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

/////////////////
// Coach Class //
/////////////////

class Coach {
public:
    Coach(const std::string& name);
    ~Coach();
    std::string getName() const;
    void addStrategy(const std::string& strategy);
    std::vector<std::string> getStrategies() const;
private:
    std::string name;
    std::vector<std::string> strategies;
};

///////////////////
// Strategy Class //
///////////////////

class Strategy {
public:
    Strategy(const std::string& name);
    ~Strategy();
    std::string getName() const;
    void addPlay(const std::string& play);
    std::vector<std::string> getPlays() const;
private:
    std::string name;
    std::vector<std::string> plays;
};

///////////////
// Play Class //
///////////////

class Play {
public:
    Play(const std::string& name, const std::string& type);
    ~Play();
    std::string getName() const;
    std::string getType() const;
private:
    std::string name;
    std::string type;
};

////////////////////////
// UserInterface Class //
////////////////////////

class UserInterface {
public:
    UserInterface();
    ~UserInterface();
    void displayMenu();
    void getUserInput();
private:
    // Add necessary members for user interaction
};

/////////////////////////
// MomentumMeter Class //
/////////////////////////

class MomentumMeter {
public:
    MomentumMeter();
    ~MomentumMeter();
    void update(int change);
    int getMomentum() const;
private:
    int momentum;
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
    Coach coach;
    MomentumMeter momentumMeter;
    std::vector<std::string> playbook;
    std::vector<std::string> unlockedStrategies;
};

#endif // INTERACTIVE_COACHING_SYSTEM_H