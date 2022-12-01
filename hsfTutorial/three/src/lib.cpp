#include <modern/lib.hpp>

#include <tuple>
#include <vector>
#include <algorithm>

template<class InputIt, class T>
constexpr // since C++20
T accumulate(InputIt first, InputIt last, T init)
{
    for (; first != last; ++first)
        init = std::move(init) + *first; // std::move since C++20
 
    return init;
}
//moment(): Calculates the N-th moment of the samples, which is defined as the sum of the N-th power of the 
// samples over the count of samples.
template<class InputIt, class T>
constexpr // since C++20
T accumulate2(InputIt first, InputIt last, T init)
{
    for (; first != last; ++first){
       auto el = *first;
        init = std::move(init) + el*el; // std::move since C++20
    }
 
    return init;
}

std::tuple<double, double> accumulate_vector(const std::vector<double>& v) {
/*
    ba::accumulator_set<double, ba::stats<ba::tag::mean, ba::tag::moment<2>>> acc;

    std::for_each(std::begin(values), std::end(values), std::ref(acc));

    return {ba::mean(acc), ba::moment<2>(acc)};
*/
    auto sum = accumulate(v.begin(), v.end(), 0);
    auto mean = sum / v.size();
    auto sum2 = accumulate2(v.begin(), v.end(), 0);
    auto moment2 = sum2 / v.size();
    return std::tuple<double, double> {mean,moment2};
}