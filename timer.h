#pragma once

#include <iostream>
#include <chrono>
#include <string>

// Use the Object Lifetime Paradigm
// The timer begins as soon as an instance is produced.
struct Timer
{
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> duration;
    std::string operation;

    Timer() : operation("Timer"), start(std::chrono::steady_clock::now()) {}

    Timer(std::string operation)
        : operation(operation), start(std::chrono::steady_clock::now()) {}

    // Display results at the end of the instance's lifetime, in milliseconds.
    ~Timer()
    {
        end = std::chrono::steady_clock::now();
        duration = end - start;

        float ms = duration.count() * 1000.0f;
        std::cout << operation << " took " << ms << "ms " << std::endl;
    }
};