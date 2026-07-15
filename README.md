# Servo Sweep Simulation

Four servo motors performing a sweep motion simultaneously.

Simulation: https://www.tinkercad.com/things/eNNwBBfins9-servo-sweep?sharecode=LOrncwCzb-F7oko5sed9MvGr9W2A6WsWV3sYuujP-GM

## Software

The simulation is performed in Tinkercad because it provides a wide range of components that are useful for this project, including the Arduino Uno, a mini breadboard, an external power supply, and servo motors.

## Circuit

Each servo motor has three connections: **power (VCC)**, **ground (GND)**, and **signal**.

- The **ground** pins of all servos are connected to the Arduino **GND** pin.
- The **signal** pins are connected to Arduino digital pins **10 through 13**.
- The **power** pins are connected to an external **5 V power supply**.

The servos are powered externally because four servo motors can draw significantly more current than the Arduino's 5 V pin can safely provide. When powered via USB, the Arduino's 5 V pin can typically supply approximately **450 mA** for external devices, whereas four micro servos may draw up to **3 A** under maximum load.

In the simulation, an external power supply is used. In a real-world implementation, a USB power bank or any regulated 5 V power source capable of supplying sufficient current can be used instead.

## Code

The program begins by including the **Servo** library and creating four servo objects using an array.

In the `setup()` function, each servo is initialized by attaching it to its corresponding Arduino digital pin.

The `loop()` function performs the sweep motion by moving all four servos simultaneously from **0° to 180°** and then back to **0°** in approximately **2 seconds**.

Since the total angular movement is **360°** (180° forward and 180° backward), the required delay between each one-degree step is calculated as:

```
2000 ms ÷ 360 ≈ 5.56 ms
```

Therefore, a delay of approximately **6 ms** is used between each step because the `delay()` function accepts integer values in milliseconds.

After completing the sweep, all servos smoothly move to the **90°** position and remain there for **5 seconds**. They then smoothly return to the **0°** position before repeating the entire sequence continuously.
