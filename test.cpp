#include "include/Planner.hpp"

State getStartState();
State getTargetState();

int main(ing argc, char *argv[])
{
	string file_name(argv[1]);//todo add validation if file exists
	Map map(file_name);
	State start = getStartState();
	State target = getTargetState();
	Planner astar;
	astar.plan(start, target, map);
}

State getStartState()
{
	//to do: read from yml file
	return State(700, 100, 36);
}

State getTargetState()
{
	//to do: read from yml file
	return State(100, 600, 18);
}
