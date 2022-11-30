#include <modern/lib.hpp>

#include <tuple>
#include <vector>
#include <algorithm>

std::tuple<double, double> accumulate_vector(const std::vector<double>& values) {
/*
    ba::accumulator_set<double, ba::stats<ba::tag::mean, ba::tag::moment<2>>> acc;

    std::for_each(std::begin(values), std::end(values), std::ref(acc));

    return {ba::mean(acc), ba::moment<2>(acc)};
*/
    return std::tuple<double, double> {0,1};
}