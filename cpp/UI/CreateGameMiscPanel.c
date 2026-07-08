// Type: UI.CreateGameMiscPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CreateGameMiscPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CreateGamePopup/CreateGameMiscPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.CreateGameMiscPanel$$get_ScrollBar
// il2cpp: bool UI_CreateGameMiscPanel__get_ScrollBar (UI_CreateGameMiscPanel_o* __this, const MethodInfo* method);
// 0x4066270

bool_conflict
UI_CreateGameMiscPanel__get_ScrollBar(UI_CreateGameMiscPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGameMiscPanel$$get_VerticalSpacing
// il2cpp: float UI_CreateGameMiscPanel__get_VerticalSpacing (UI_CreateGameMiscPanel_o* __this, const MethodInfo* method);
// 0x4066280

float UI_CreateGameMiscPanel__get_VerticalSpacing
                (UI_CreateGameMiscPanel_o *__this,MethodInfo *method)

{
  return 15.0;
}


// UI.CreateGameMiscPanel$$Setup
// il2cpp: void UI_CreateGameMiscPanel__Setup (UI_CreateGameMiscPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4066290

void UI_CreateGameMiscPanel__Setup
               (UI_CreateGameMiscPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *pUVar2;
  Settings_BaseSetting_o *pSVar3;
  System_String_o *subCategory;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  
  if (DAT_0570448e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"GunsAirReload");
    il2cpp_init_method_metadata(&"AllowThunderspears");
    il2cpp_init_method_metadata(&"AllowShifterSpecials");
    il2cpp_init_method_metadata(&"AllowSpawnTime");
    il2cpp_init_method_metadata(&"GlobalMinimapDisable");
    il2cpp_init_method_metadata(&"VoiceChat");
    il2cpp_init_method_metadata(&"EndlessRespawnTime");
    il2cpp_init_method_metadata(&"CustomPerksTooltip");
    il2cpp_init_method_metadata(&"VoiceChatOptions");
    il2cpp_init_method_metadata(&"ClearKDROnRestart");
    il2cpp_init_method_metadata(&"HorsebackCombat");
    il2cpp_init_method_metadata(&"PVP");
    il2cpp_init_method_metadata(&"HookDamageMultiplierTooltip");
    il2cpp_init_method_metadata(&"InvincibilityTime");
    il2cpp_init_method_metadata(&"HumanHealth");
    il2cpp_init_method_metadata(&"PVPOptions");
    il2cpp_init_method_metadata(&"CreateGamePopup");
    il2cpp_init_method_metadata(&"RealismMaxSpeedTooltip");
    il2cpp_init_method_metadata(&"AllowPlayerTitans");
    il2cpp_init_method_metadata(&"RealismMaxSpeed");
    il2cpp_init_method_metadata(&"CustomPerks");
    il2cpp_init_method_metadata(&"AllowAHSS");
    il2cpp_init_method_metadata(&"ProximityMaxDistance");
    il2cpp_init_method_metadata(&"AccountRequiredTooltip");
    il2cpp_init_method_metadata(&"Misc");
    il2cpp_init_method_metadata(&"AllowStock");
    il2cpp_init_method_metadata(&"ShifterHealth");
    il2cpp_init_method_metadata(&"RealismImpactTooltip");
    il2cpp_init_method_metadata(&"APGPVP");
    il2cpp_init_method_metadata(&"AllowVoteKicking");
    il2cpp_init_method_metadata(&"RealismModeTooltip");
    il2cpp_init_method_metadata(&"AllowBlades");
    il2cpp_init_method_metadata(&"AllowSpawnTimeTooltip");
    il2cpp_init_method_metadata(&"RealismImpact");
    il2cpp_init_method_metadata(&"APGPVPTooltip");
    il2cpp_init_method_metadata(&"MOTD");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"RealismMode");
    il2cpp_init_method_metadata(&"ThunderspearPVP");
    il2cpp_init_method_metadata(&"ThunderspearPVPTooltip");
    il2cpp_init_method_metadata(&"CustomStats");
    il2cpp_init_method_metadata(&"AllowAPG");
    il2cpp_init_method_metadata(&"RealismHookLength");
    il2cpp_init_method_metadata(&"RealismHookLengthTooltip");
    il2cpp_init_method_metadata(&"AllowShifters");
    il2cpp_init_method_metadata(&"Horses");
    il2cpp_init_method_metadata(&"HookDamageMultiplier");
    il2cpp_init_method_metadata(&"EndlessRespawnEnabled");
    il2cpp_init_method_metadata(&"ProximityMinDistance");
    il2cpp_init_method_metadata(&"CustomStatsTooltip");
    il2cpp_init_method_metadata(&"AccountRequired");
    DAT_0570448e = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  subCategory = "Misc";
  pSVar7 = "CreateGamePopup";
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x58);
    pSVar4 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x18,240.0,20.0,pSVar4,(MethodInfo *)0x0);
    if (lVar1 != 0) {
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x20);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"PVP","","",
                          (MethodInfo *)0x0);
      pSVar5 = UI_UIManager__GetLocaleArray
                         (pSVar7,subCategory,"PVPOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleGroupSetting
                (pUVar2,__this_00,pSVar3,pSVar4,pSVar5,"",30.0,30.0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0xf0);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"CustomStats","","",
                          (MethodInfo *)0x0);
      pSVar6 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"CustomStatsTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,pSVar6,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0xf8);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"CustomPerks","","",
                          (MethodInfo *)0x0);
      pSVar6 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"CustomPerksTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,pSVar6,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 200);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"RealismMode","","",
                          (MethodInfo *)0x0);
      pSVar6 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"RealismModeTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,pSVar6,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0xd0);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"RealismImpact","","",
                          (MethodInfo *)0x0);
      pSVar6 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"RealismImpactTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,__this_00,pSVar3,pSVar4,pSVar6,140.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0xd8);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"RealismHookLength","","",
                          (MethodInfo *)0x0);
      pSVar6 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"RealismHookLengthTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,__this_00,pSVar3,pSVar4,pSVar6,140.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0xe0);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"RealismMaxSpeed","","",
                          (MethodInfo *)0x0);
      pSVar6 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"RealismMaxSpeedTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,__this_00,pSVar3,pSVar4,pSVar6,140.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0xe8);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"HookDamageMultiplier","","",
                          (MethodInfo *)0x0);
      pSVar6 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"HookDamageMultiplierTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,__this_00,pSVar3,pSVar4,pSVar6,140.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x98);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"Horses","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0xa0);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"HorsebackCombat","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x28);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"EndlessRespawnEnabled","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x30);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"EndlessRespawnTime","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x38);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"AllowSpawnTime","","",
                          (MethodInfo *)0x0);
      pSVar6 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"AllowSpawnTimeTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,__this_00,pSVar3,pSVar4,pSVar6,120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x48);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"ThunderspearPVP","","",
                          (MethodInfo *)0x0);
      pSVar6 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"ThunderspearPVPTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,pSVar6,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x50);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"APGPVP","","",
                          (MethodInfo *)0x0);
      pSVar6 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"APGPVPTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,pSVar6,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x120);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"HumanHealth","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x128);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"ShifterHealth","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x58);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"AllowBlades","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x60);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"AllowAHSS","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x70);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"AllowThunderspears","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x68);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"AllowAPG","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x78);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"AllowPlayerTitans","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x88);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"AllowShifters","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x80);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"AllowShifterSpecials","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x90);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"AllowVoteKicking","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0xb8);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"ClearKDROnRestart","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0xc0);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"GlobalMinimapDisable","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x108);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"VoiceChat","","",
                          (MethodInfo *)0x0);
      pSVar5 = UI_UIManager__GetLocaleArray
                         (pSVar7,subCategory,"VoiceChatOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar2,__this_00,pSVar3,pSVar4,pSVar5,"",120.0,40.0,300.0,
                 (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x110);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"ProximityMinDistance","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x118);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"ProximityMaxDistance","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0xa8);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"GunsAirReload","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0xb0);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"AllowStock","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x40);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"InvincibilityTime","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x100);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"MOTD","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,__this_00,pSVar3,pSVar4,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x130);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"AccountRequired","","",
                          (MethodInfo *)0x0);
      pSVar7 = UI_UIManager__GetLocale
                         (pSVar7,subCategory,"AccountRequiredTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,__this_00,pSVar3,pSVar4,pSVar7,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameMiscPanel$$.ctor
// il2cpp: void UI_CreateGameMiscPanel___ctor (UI_CreateGameMiscPanel_o* __this, const MethodInfo* method);
// 0x4067730

void UI_CreateGameMiscPanel___ctor(UI_CreateGameMiscPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


