#pragma once

namespace FSM
{
	class Robot;

	class State
	{
	public:
		virtual ~State() {}

		virtual void Enter( Robot* robot ) = 0;
		virtual void Execute( Robot* robot ) = 0;
		virtual void Exit() = 0;

	};
}