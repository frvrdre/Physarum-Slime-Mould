# Physarum Polycephalum Simulation

A C++ simulation inspired by *Physarum polycephalum*, a type of slime mould known for its ability to form networks, adapt to its environment and find efficient paths between food sources.

I'm building this project using C++ and raylib while learning more about computer science, biological systems and simulation programming.

The idea came from reading research into how simple computational agents can reproduce some of the behaviours observed in real slime mould. I wanted to try implementing the model myself and understand the mathematics and programming behind it.

## The Project

The aim is to build an interactive simulation based on published research into Physarum's behaviour.

Rather than just creating particles that move around randomly, I want to model how agents sense their surroundings, deposit chemical trails and gradually form networks through their interactions.

Eventually, I want users to be able to modify the simulation through a GUI, experiment with different parameters and see how those changes affect the resulting patterns.

I'd also like to explore whether the simulation can be used for pathfinding problems, such as discovering routes through mazes.

## Current Progress

The project is still in its early stages. So far, I've implemented:

- A basic raylib window and rendering loop.
- A `Slimes` struct to store each agent's position and direction.
- Multiple agents managed using `std::vector`.
- Movement using sine and cosine.
- Frame-independent movement using delta time.
- Basic screen boundary handling.

At the moment, the program is a moving-agent prototype rather than a complete Physarum model.

## Planned Features

### Simulation

- Chemical trail deposition.
- Environmental sensing using multiple sensors.
- Agent movement influenced by chemical concentrations.
- Trail diffusion and decay.
- Network formation through collective agent behaviour.
- Food sources and environmental obstacles.

### Interactive Controls

I want the simulation to be something users can experiment with rather than just watch.

The planned GUI will allow users to adjust settings such as:

- Number of agents.
- Movement speed.
- Sensor angle and distance.
- Rotation angle.
- Chemical trail strength.
- Diffusion and decay rates.
- Simulation speed.
- Colours and rendering options.

I'd also like to include pause, reset and preset options for experimenting with different behaviours.

### Maze Sol 
