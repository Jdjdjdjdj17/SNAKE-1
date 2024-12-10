#include "StateMan.hpp"

Engine::StateMan::StateMan() : m_add(false), m_replace(false), m_remove(false)
{

}

Engine::StateMan::~StateMan() {
    
}

void Engine::StateMan::Add(std::unique_ptr<State> toAdd, bool replace = false){

}
void Engine::StateMan::PopCurrent(){

}
void Engine::StateMan::ProcessStateChange(){

}
std::unique_ptr<State> &GetCurrent(){

}