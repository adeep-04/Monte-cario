Monte Carlo Simulation to Approximate π
Overview

This program uses a Monte Carlo method, a randomized simulation technique, to compute an approximation of π (pi). It simulates randomly throwing "darts" at a square circumscribing a circle, then uses the ratio of darts that land inside the circle versus total darts thrown to estimate π.
Concept

Imagine a circle of radius 1, centered at the origin, and circumscribed by a square. The area of the circle is π * r² (where r = 1, so the area is π), and the area of the square is 4 (since each side of the square has length 2).

If we throw random darts at this dartboard, the ratio of darts that land inside the circle to the total number of darts should equal the ratio of the area of the circle to the area of the square. Using this relationship, we can estimate the value of π.
Formula

By using random points generated inside the square and counting how many land inside the circle, we can calculate π with the formula:
π=4×darts inside the circletotal darts thrown
π=4×total darts throwndarts inside the circle​
Approach

We simplify the simulation by only considering the first quadrant of the circle and square, which reduces the computational load and math. In this case, the area of one quadrant of the square is 1, and the quarter-circle's area is π/4. The estimation of π becomes:
π=4×darts in quadrant circletotal darts in quadrant square
π=4×total darts in quadrant squaredarts in quadrant circle​
How It Works

    Random Dart Throwing: We generate random (x, y) coordinates within the first quadrant of the square, where 0 <= x <= 1 and 0 <= y <= 1.
    Check if Inside Circle: For each dart, check if it falls inside the quarter circle by checking if x² + y² <= 1.
    Estimate π: The ratio of the number of darts inside the circle to the total number of darts is used to estimate π.
