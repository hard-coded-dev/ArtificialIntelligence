#pragma once

namespace FSM
{
	class State;

	class Robot
	{
	public:
		Robot();
		virtual ~Robot();

		void Update();
		void ChangeState( State* newState );

	private:
		State * _state;

	};
}