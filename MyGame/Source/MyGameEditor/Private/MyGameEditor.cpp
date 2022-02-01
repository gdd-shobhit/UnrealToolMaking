#include "MyGameEditor.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"
#include "MyCustomActor.h"
#include "MyCustomActorDetails.h"
//#include "MyCustomActorDetails.h"
//#include "IDetailCustomization.h"

IMPLEMENT_GAME_MODULE(FMyGameEditorModule, MyGameEditor);

void FMyGameEditorModule::StartupModule()
{
    
    
    // register custom layouts
    {
        static FName PropertyEditor("PropertyEditor");
        FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>(PropertyEditor);
        PropertyModule.RegisterCustomClassLayout(ACustomActor::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FCustomActorDetails::MakeInstance));
    }
}

void FMyGameEditorModule::ShutdownModule()
{
    // unregister custom layouts
    if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
    {
        FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
        PropertyModule.UnregisterCustomClassLayout(ACustomActor::StaticClass()->GetFName());
    }
}