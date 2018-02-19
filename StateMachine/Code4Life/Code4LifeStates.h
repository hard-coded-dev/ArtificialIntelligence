#pragma once
#include "../StateMachine.h"

namespace FSM
{
	class Robot;

	namespace Code4Life
	{
		class StartState : public State
		{
		public:
			StartState();
			virtual void Enter( Robot* robot );
			virtual void Execute( Robot* robot );
			virtual void Exit();
		};

		class SampleState : public State
		{
		public:
			SampleState();
			virtual void Enter( Robot* robot );
			virtual void Execute( Robot* robot );
			virtual void Exit();
		};

		class DiagnosisState : public State
		{
		public:
			DiagnosisState();
			virtual void Enter( Robot* robot );
			virtual void Execute( Robot* robot );
			virtual void Exit();

		};

		class MoleculeState : public State
		{
		public:
			MoleculeState();

			virtual void Enter( Robot* robot );
			virtual void Execute( Robot* robot );
			virtual void Exit();
		};

		class LaboratoryState : public State
		{
		public:
			LaboratoryState();

			virtual void Enter( Robot* robot );
			virtual void Execute( Robot* robot );
			virtual void Exit();
		};

	}
}