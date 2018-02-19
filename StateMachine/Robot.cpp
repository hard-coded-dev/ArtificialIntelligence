#include "Robot.h"

#include "StateMachine.h"

namespace FSM
{
	Robot::Robot()
	{
		_state = nullptr;
	}

	Robot::~Robot()
	{
	}

	void Robot::Update()
	{
		if( _state )
		{
			_state->Execute( this );
		}
	}

	void Robot::ChangeState( State* newState )
	{
		if( _state )
		{
			_state->Exit();
			delete _state;
		}

		_state = newState;

		if( _state )
			_state->Enter( this );
	}
}