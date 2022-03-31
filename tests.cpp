#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Basic Caesar Encryption"){
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
}
TEST_CASE("Solve + Distance Formula"){
   CHECK(solve(encryptCaesar("My name is Bob and here is the way", 10)) == "My name is Bob and here is the way");
   CHECK(solve("UIJT GVODUJPO SPUBUFT 26 UJNFT GPS FWFSZ TUSJOH") == "THIS FUNCTION ROTATES 26 TIMES FOR EVERY STRING");
   CHECK(solve(encryptCaesar("This is a working example", 10)) == "This is a working example");
   CHECK(encryptCaesar("Hello World and Cpp", 26) == "Hello World and Cpp");
   CHECK(solve(encryptCaesar("Hello World and Cpp", 26)) == "Lipps Asvph erh Gtt");
}
