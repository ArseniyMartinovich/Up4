#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"

struct Brick {
	sf::RectangleShape shape;
	const sf::Vector2f BRICK_START_POS;
	const sf::Color BRICK_COLOR;
};

void brickInit(Brick& brick) {
	brick.shape.setSize(sf::Vector2f(BRICK_WIDTH, BRICK_HEIGHT));
	brick.shape.setFillColor(BRICK_COLOR);
	brick.shape.setPosition(BRICK_START_POS);
}

void brickUpdate(Brick& brick, sf::Color BRICK_COLOR) {

}

void brickDraw(sf::RenderWindow& window, const Brick& brick) {
	window.draw(brick.shape);
}