#include <SFML/Graphics.hpp>
#include <iostream>

int main(int argc, char* argv[]) {

    sf::RenderWindow window = sf::RenderWindow(sf::VideoMode(1000, 1000), "sfml-test");
    window.setVerticalSyncEnabled(true);

    

    while (window.isOpen()) {

        sf::Event event;
        while (window.pollEvent(event)) {
            
            if (event.type == sf::Event::Closed) {
                window.close();
            }

        }


        window.clear(sf::Color::White);
        
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            sf::CircleShape circle(20);
            circle.setFillColor(sf::Color::Black);
            circle.setPosition(sf::Mouse::getPosition(window).x - circle.getRadius(), sf::Mouse::getPosition(window).y - circle.getRadius());
            window.draw(circle);
        }

        window.display();
    }

}