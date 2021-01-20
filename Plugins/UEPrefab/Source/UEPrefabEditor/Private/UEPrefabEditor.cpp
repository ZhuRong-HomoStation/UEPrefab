#include "UEPrefabEditor.h"
#include "Logging.h"

#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FUEPrefabEditor"

void FUEPrefabEditor::StartupModule()
{
}

void FUEPrefabEditor::ShutdownModule()
{
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUEPrefabEditor, UEPrefabEditor);