#include "MounteaDialogueSystemDeveloper.h"

#include "Styling/MonuteaDialogueSystemDeveloperStyle.h"

DEFINE_LOG_CATEGORY(MounteaDialogueSystemDeveloper);

#define LOCTEXT_NAMESPACE "FMounteaDialogueSystemDeveloper"

void FMounteaDialogueSystemDeveloper::StartupModule()
{
	// Register Style
	{
		FMonuteaDialogueSystemDeveloperStyle::Initialize();
	}
	
	UE_LOG(MounteaDialogueSystemDeveloper, Warning, TEXT("MounteaDialogueSystemDeveloper module has been loaded"));
}

void FMounteaDialogueSystemDeveloper::ShutdownModule()
{
	// Style Shutdown
	{
		FMonuteaDialogueSystemDeveloperStyle::Shutdown();
	}
	
	UE_LOG(MounteaDialogueSystemDeveloper, Warning, TEXT("MounteaDialogueSystemDeveloper module has been unloaded"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FMounteaDialogueSystemDeveloper, MounteaDialogueSystemDeveloper)