// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "AudioMeterPluginStyle.h"

class FAudioMeterPluginCommands : public TCommands<FAudioMeterPluginCommands>
{
public:

	FAudioMeterPluginCommands()
		: TCommands<FAudioMeterPluginCommands>(TEXT("AudioMeterPlugin"), NSLOCTEXT("Contexts", "AudioMeterPlugin", "AudioMeterPlugin Plugin"), NAME_None, FAudioMeterPluginStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
