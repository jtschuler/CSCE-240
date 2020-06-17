#ifndef TEST_INC_TREE_H_
#define TEST_INC_TREE_H_


#include <inc/queue.h>
#include <inc/stack.h>
#include <inc/tree.h>
#include <cassert>
// using assert
#include <cstddef>
// using size_t
#include <iostream>


const std::string kMovie_tree[] = {
    "3%", "The 4400", "Altered Carbon", "American Horror Story",
    "American Vandal", "Being Mary Jane", "Better Call Saul",
    "BoJack Horseman", "Break Bad", "Cheers", "Chef's Table",
    "The Crown", "Fauda", "Frontier", "GLOW", "The Good Place",
    "Grace and Frankie", "Happy Valley", "Lady Dynamite", "Mad Men",
    "Mindhunter", "Narcos", "Nobel", "The OA", "The Office", "Ozark", "Pose",
    "Riverdale", "Stranger Things", "The Witcher", "You" };

const size_t kTree_size = sizeof(kMovie_tree)/sizeof(std::string);


#endif  // TEST_INC_TREE_H_
