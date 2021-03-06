#include "feature.h"

void Feature::OnFrame()
{

	for (Manager *mgr : mManagers)
		if (mgr->GetActive())
			mgr->OnFrame();
}

void Feature::OnStart()
{
	for (Manager *mgr : mManagers)
		mgr->OnStart();
}

void Feature::OnStop()
{
	for (Manager *mgr : mManagers)
		mgr->OnStop();
}

void Feature::OnActivate()
{

}

void Feature::OnDeactivate()
{

}

std::string Feature::GetFeatureName()
{
	return mFeatureName;
}

void Feature::AttachManager(Manager *arg_manager)
{
	mManagers.push_back(arg_manager);
	arg_manager->OnActivate();
}