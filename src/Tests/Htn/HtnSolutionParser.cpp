//
// Created by 岳晨阳 on 2021/3/9.
//
//
#include <stdio.h>
#include "../../FXPlatform/Prolog/HtnTermFactory.h"
#include "../../FXPlatform/Prolog/HtnRuleSet.h"
#include "../../FXPlatform/Htn/HtnPlanner.h"
#include "../../FXPlatform/Htn/HtnCompiler.h"

int mytest(){
    std::shared_ptr<HtnTermFactory> factory = std::shared_ptr<HtnTermFactory>(new HtnTermFactory());
    std::shared_ptr<HtnRuleSet> state = std::shared_ptr<HtnRuleSet>(new HtnRuleSet());
    std::shared_ptr<HtnPlanner> planner = std::shared_ptr<HtnPlanner>(new HtnPlanner());
    std::shared_ptr<HtnCompiler> compiler = std::shared_ptr<HtnCompiler>(new HtnCompiler(factory.get(), state.get(), planner.get()));
    std::shared_ptr<HtnPlanner::SolutionsType> result;
}


int main(){
    printf("hello");

    mytest();
}