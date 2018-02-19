#include "Code4LifeStates.h"

#include "../Robot.h"
#include <iostream>
using namespace std;

namespace FSM
{
	namespace Code4Life
	{
		///////////////////////////////////////////////////////////////////////////////////////////
		StartState::StartState()
		{
		}
		void StartState::Enter( Robot* robot ) {}
		void StartState::Execute( Robot* robot ) 
		{
			robot->ChangeState( new SampleState() );
		}
		void StartState::Exit() {}

		///////////////////////////////////////////////////////////////////////////////////////////
		SampleState::SampleState()
		{
		}
		void SampleState::Enter( Robot* robot )
		{
			cout << "GOTO SAMPLES" << endl;
		}
		void SampleState::Execute( Robot* robot ) 
		{
			// Download samples or change to other states
		}
		void SampleState::Exit() 
		{
		}

		///////////////////////////////////////////////////////////////////////////////////////////
		DiagnosisState::DiagnosisState()
		{
		}
		void DiagnosisState::Enter( Robot* robot )
		{
			cout << "GOTO DIAGNOSIS" << endl;
		}
		void DiagnosisState::Execute( Robot* robot ) 
		{
			// Diagnosis undiagnosed samples and change to other states
		}
		void DiagnosisState::Exit() {}

		///////////////////////////////////////////////////////////////////////////////////////////
		MoleculeState::MoleculeState()
		{
		}
		void MoleculeState::Enter( Robot* robot )
		{
			cout << "GOTO MOLECULES" << endl;
		}
		void MoleculeState::Execute( Robot* robot ) 
		{
			// Collect required molecules and change to the other states
		}
		void MoleculeState::Exit()
		{
		}

		///////////////////////////////////////////////////////////////////////////////////////////
		LaboratoryState::LaboratoryState()
		{
		}

		void LaboratoryState::Enter( Robot* robot )
		{
			cout << "GOTO LABORATORY" << endl;
		}
		void LaboratoryState::Execute( Robot* robot ) 
		{
			// Research medicine and change to the other states
		}
		void LaboratoryState::Exit() {}
	}
}