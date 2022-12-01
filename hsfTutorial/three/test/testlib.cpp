#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <modern/lib.hpp>
#include <iostream>

TEST_CASE( "Quick check", "[main]" ) {
    std::vector<double> values {1, 2., 3.};
    auto [mean, moment] = accumulate_vector(values);

    std::cout << mean << " " << moment;
    REQUIRE( mean == 2.0 );
    //REQUIRE( moment == Approx(4.666666) );
}
