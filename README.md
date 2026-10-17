# Physarum Slime Mould Simulation

A work-in-progress **Physarum slime mould simulation**, built using **C++ and Raylib**.

The goal of this project is to simulate the movement and emergent behaviour of slime mould (*Physarum polycephalum*) using autonomous agents.

## Current Features

- Multiple independently moving agents.
- Frame-rate-independent movement using delta time.
- Directional movement using sine and cosine.
- Wall collision detection and reflection.
- Simple 2D rendering using Raylib.

## Technologies

- **C++** – Core simulation logic.
- **Raylib** – Graphics and window management.
- **C++ Standard Library** – Dynamic agent storage using `std::vector`.
- **cmath** – Trigonometric calculations.

## How It Works

Each agent stores three properties: its X position, Y position, and movement angle.

Agents move independently based on their angle and speed. When they reach the window boundaries, their direction is reflected to keep them inside the simulation.

## Planned Features

- [x] Basic agent movement
- [x] Multiple agents
- [x] Boundary collision handling
- [ ] Randomised agent movement
- [ ] Chemical trail deposition
- [ ] Environmental sensing
- [ ] Trail diffusion and decay
- [ ] Emergent slime mould patterns
- [ ] Performance optimisation for thousands of agents

## Project Status

**Early Development - Movement Prototype**

Currently learning and implementing the foundational systems required for a more realistic Physarum simulation. Chemical trails and agent sensing have not yet been implemented.

## Inspiration

Inspired by research into slime mould behaviour and agent-based simulations of biological systems. I am also reading, Applications of Multi-Agent Slime Mould Computing
Author: Jeff Jones — University of the West of England https://arxiv.org/pdf/1511.05774
