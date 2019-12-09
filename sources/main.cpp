// Copyright 2019 CERZAR

#include <boost/log/utility/setup.hpp>
#include <thread>
#include <vector>
#include "../include/HashFinder.h"

int main(int argc, char *argv[]) {

    size_t threads_num = std::thread::hardware_concurrency();
    if (argc > 1)
        threads_num = boost::lexical_cast<size_t>(argv[1]);

    boost::log::add_file_log("NewLog.txt");
    boost::log::add_console_log(std::cout);

    std::vector<std::thread> threads;
    for (size_t i = 0; i < threads_num; i++)
        threads.emplace_back(HashFinder);
        
    for (std::thread &thread : threads)
        thread.join();

    return 0;
}