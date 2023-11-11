#include <iostream>
#include <vector>
#include <chrono>
#include <set>
#include <array>
#include <queue>
#include <deque>
#include <list>
 
#define VOLUME 100000000

void benchmark_vector() {
    std::vector <int> v1;

    auto start_push = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < VOLUME; i++) {
        v1.push_back(i);
    }

    auto stop_push = std::chrono::high_resolution_clock::now();

    auto duration_push = std::chrono::duration_cast<std::chrono::microseconds> (stop_push - start_push);

    std::cout << "Vector -> Time duration Push: " << duration_push.count() << std::endl;


    auto start_pop = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < VOLUME; i++) {
        v1.pop_back();
    }

    auto stop_pop = std::chrono::high_resolution_clock::now();

    auto duration_pop = std::chrono::duration_cast<std::chrono::microseconds> (stop_pop - start_pop);

    std::cout << "Vector -> Time duration Pop: " << duration_pop.count() << std::endl;
}

void benchmark_set() {

    auto start_insert = std::chrono::high_resolution_clock::now();

    std::set<int> set;

    for (int i = 0; i < VOLUME; i++) {
        set.insert(i);
    }

    auto stop_insert = std::chrono::high_resolution_clock::now();
    
    auto duraiotn_insert = std::chrono::duration_cast<std::chrono::milliseconds>(stop_insert - start_insert);

    std::cout << "Set -> Time duration Insertation: " << duraiotn_insert.count() << std::endl;

    auto start_erase = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < VOLUME; i++) {
        set.erase(i);
    }

    auto stop_erase = std::chrono::high_resolution_clock::now();

    auto duraiotn_erase = std::chrono::duration_cast<std::chrono::milliseconds>(stop_erase - start_erase);

    std::cout << "Set -> Time duration Erase: " << duraiotn_erase.count() << std::endl;
} 

void benchmark_queue() {

    auto start_insert = std::chrono::high_resolution_clock::now();

    std::queue<int> queue;

    for (int i = 0; i < VOLUME; i++) {
        queue.push(i);
    }

    auto stop_insert = std::chrono::high_resolution_clock::now();

    auto duraiotn_insert = std::chrono::duration_cast<std::chrono::milliseconds>(stop_insert - start_insert);

    std::cout << "Queue -> Time duration push: " << duraiotn_insert.count() << std::endl;

    auto start_erase = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < VOLUME; i++) {
        queue.pop();
    }

    auto stop_erase = std::chrono::high_resolution_clock::now();

    auto duraiotn_erase = std::chrono::duration_cast<std::chrono::milliseconds>(stop_erase - start_erase);

    std::cout << "Queue -> Time duration pop: " << duraiotn_erase.count() << std::endl;
}

void benchmark_deque() {
    auto start_insert = std::chrono::high_resolution_clock::now();

    std::deque<int> deque;

    for (int i = 0; i < VOLUME; i++) {
        deque.push_back(i);
    }

    auto stop_insert = std::chrono::high_resolution_clock::now();

    auto duraiotn_insert = std::chrono::duration_cast<std::chrono::milliseconds>(stop_insert - start_insert);

    std::cout << "Deque -> Time duration push: " << duraiotn_insert.count() << std::endl;

    auto start_erase = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < VOLUME; i++) {
        deque.pop_back();
    }

    auto stop_erase = std::chrono::high_resolution_clock::now();

    auto duraiotn_erase = std::chrono::duration_cast<std::chrono::milliseconds>(stop_erase - start_erase);

    std::cout << "Deque -> Time duration pop back: " << duraiotn_erase.count() << std::endl;
}

void benchmark_list() {
    auto start_insert = std::chrono::high_resolution_clock::now();

    std::list<int> list;

    for (int i = 0; i < VOLUME; i++) {
        list.push_back(i);
    }

    auto stop_insert = std::chrono::high_resolution_clock::now();

    auto duraiotn_insert = std::chrono::duration_cast<std::chrono::milliseconds>(stop_insert - start_insert);

    std::cout << "List -> Time duration push: " << duraiotn_insert.count() << std::endl;

    auto start_erase = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < VOLUME; i++) {
        list.pop_back();
    }

    auto stop_erase = std::chrono::high_resolution_clock::now();

    auto duraiotn_erase = std::chrono::duration_cast<std::chrono::milliseconds>(stop_erase - start_erase);

    std::cout << "List -> Time duration pop back: " << duraiotn_erase.count() << std::endl;
}

int main() {

    benchmark_queue();

    benchmark_deque();

    benchmark_vector();

    benchmark_set();

    benchmark_list();

    return 0;
}
