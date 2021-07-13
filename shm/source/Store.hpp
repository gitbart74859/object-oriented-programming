#pragma once

#include "Cargo.hpp"
#include "Player.hpp"

enum class Response {
    done,
    lack_of_maney,
    lack_of_cargo,
    lack_of_space
};

class Store {
public:
    //ctor
    Store();
    //dtor
    ~Store();
    Response buy(Cargo* cargo, size_t amount, Player* player);
    Response sell(Cargo* cargo, size_t amount, Player* player);

private:
};