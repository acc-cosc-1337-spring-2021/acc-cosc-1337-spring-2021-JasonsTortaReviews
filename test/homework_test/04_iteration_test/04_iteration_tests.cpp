#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_gc_content function works")
{
	string dna_strand = "AGCTATAG";
	string dna_strand2 = "CGCTATAG";
	REQUIRE(get_gc_content(dna_strand)==37.5);
	REQUIRE(get_gc_content(dna_strand2)==50);
}

TEST_CASE("Verify get_reverse_string function works")
{
	string dna_strand = "AGCTATAG";
	string dna_strand2 = "CGCTATAG";
	REQUIRE(get_reverse_string(dna_strand)== "GATATCGA");
	REQUIRE(get_reverse_string(dna_strand2)=="GATATCGC");
}
TEST_CASE("Verify get_dna_complement function works")
{
	string dna_strand = "AAAACCCGGT";
	string dna_strand2 = "CCCGGAAAAT";

	REQUIRE(get_dna_complement(dna_strand)=="ACCGGGTTTT");
	REQUIRE(get_dna_complement(dna_strand2)=="ATTTTCCGGG");

}