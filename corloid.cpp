#include <iostream>
#include <math.h>
#include <vector> // To store points
#include <SFML/Graphics.hpp> // For drawing

void drawCoroloid(sf::RenderWindow& window, int xc, int yc, int a, int b, int num_petals, int scale) {
    double angle, r;
    int x, y;
    std::vector<sf::Vector2f> points;

    for (angle = 0; angle <= 2 * M_PI; angle += 0.001) {
        // Equation for a coroloid (a type of rose curve)
        // r = a + b * cos(num_petals * angle)
        r = a + b * cos(num_petals * angle);

        x = xc + static_cast<int>(r * cos(angle) * scale);
        y = yc + static_cast<int>(r * sin(angle) * scale);

        points.push_back(sf::Vector2f(static_cast<float>(x), static_cast<float>(y)));
    }

    // Draw the coroloid by connecting the points
    if (points.size() > 1) {
        for (size_t i = 0; i < points.size() - 1; ++i) {
            sf::Vertex line[] = {
                sf::Vertex(points[i], sf::Color::White),
                sf::Vertex(points[i+1], sf::Color::White)
            };
            window.draw(line, 2, sf::Lines);
        }
    }
}

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Coroloid Drawing");
    int xc = 400; // Center x-coordinate
    int yc = 300; // Center y-coordinate
    int a = 50; // Parameter 'a' for the coroloid
    int b = 70; // Parameter 'b' for the coroloid
    int num_petals = 7; // Number of petals
    int scale = 3; // Scaling factor for better visualization

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        drawCoroloid(window, xc, yc, a, b, num_petals, scale);
        window.display();
    }
    return 0;
}
