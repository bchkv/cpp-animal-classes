#include "Bird.h"
#include "Crustacean.h"
#include "Spider.h"
#include "Mammal.h"

int main() {
    Bird bird;
    Crustacean crustacean;
    Spider spider;
    Mammal mammal;

    bird.makeSound();
    crustacean.makeSound();
    spider.makeSound();
    mammal.makeSound();

    return 0;
}