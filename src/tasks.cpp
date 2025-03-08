// Copyright 2025 Alexey Gromov
#include "tasks.h"
#include "circle.h"

void taskPool() {
    Circle pool;
    double diameter = 1.0;
    double depth = 1.1;
    double concreteCostPerCubicMeter = 1000.0;
    double tileCostPerSquareMeter = 2000.0;

    pool.setRadius(diameter / 2);

    double volume = pool.getArea() * depth;
    double concreteCost = volume * concreteCostPerCubicMeter;

    double baseArea = pool.getArea();
    double baseTileCost = baseArea * tileCostPerSquareMeter;

    double sideArea = pool.getFerence() * 1.0;
    double sideTileCost = sideArea * tileCostPerSquareMeter;

    double totalCost = concreteCost + baseTileCost + sideTileCost;
}

void taskRope() {
    Circle pool;
    double ference = 1.0;
    int numRopes = 10;
    double ropeLength = 1.0;
    double ropeCostPerMeter = 3.0;

    pool.setFerence(ference);

    double totalRopeLength = ference * numRopes;
    double totalRopeCost = totalRopeLength * ropeCostPerMeter;
}
