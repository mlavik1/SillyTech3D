#include "core_events.h"


void ICoreEvents::OnFrame()
{

}

void ICoreEvents::OnStart()
{

}

void ICoreEvents::OnStop()
{

}

void ICoreEvents::OnActivate()
{

}

void ICoreEvents::OnDeactivate()
{

}

void ICoreEvents::SetActive(bool arg_active)
{
	if (!mIsActive & arg_active)
		OnActivate();
	else if (mIsActive & !arg_active)
		OnDeactivate();
}