// Copyright Epic Games, Inc. All Rights Reserved.

#include "AudioMeterPluginCommands.h"

#define LOCTEXT_NAMESPACE "FAudioMeterPluginModule"

void FAudioMeterPluginCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "AudioMeterPlugin", "Execute AudioMeterPlugin action", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
