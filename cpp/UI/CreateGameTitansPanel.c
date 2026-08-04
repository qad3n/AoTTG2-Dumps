// Type: UI.CreateGameTitansPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CreateGameTitansPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CreateGamePopup/CreateGameTitansPanel.cs
// --------------------------------

// UI.CreateGameTitansPanel$$get_VerticalSpacing
// il2cpp: float UI_CreateGameTitansPanel__get_VerticalSpacing (UI_CreateGameTitansPanel_o* __this, const MethodInfo* method);
// 0x4380600

float UI_CreateGameTitansPanel__get_VerticalSpacing(UI_CreateGameTitansPanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.CreateGameTitansPanel$$get_ScrollBar
// il2cpp: bool UI_CreateGameTitansPanel__get_ScrollBar (UI_CreateGameTitansPanel_o* __this, const MethodInfo* method);
// 0x4380610

bool_conflict UI_CreateGameTitansPanel__get_ScrollBar(UI_CreateGameTitansPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGameTitansPanel$$Setup
// il2cpp: void UI_CreateGameTitansPanel__Setup (UI_CreateGameTitansPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4380620

void UI_CreateGameTitansPanel__Setup
               (UI_CreateGameTitansPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *pUVar2;
  Settings_BaseSetting_o *pSVar3;
  System_String_o *subCategory;
  UI_ElementStyle_o *style;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_array *options;
  System_String_o *pSVar6;
  UI_CreateGameTitansPanel_o *__this_00;
  UI_ToggleGroupSettingElement_o *__this_01;
  System_String_o *in_RCX;
  MethodInfo *setting;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar7;
  UI_CreateGameTitansPanel_o *__this_02;
  System_String_array *in_R8;
  System_String_o *in_R9;
  float elementWidth;
  float in_XMM1_Da;
  MethodInfo *in_stack_ffffffffffffff68;
  MethodInfo *in_stack_ffffffffffffff88;
  
  if (g_data_057ae22f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"MaxSize");
    il2cpp_runtime_helper_023445d0(&"SmartMovement");
    il2cpp_runtime_helper_023445d0(&"SpawnEnabled");
    il2cpp_runtime_helper_023445d0(&"Normal");
    il2cpp_runtime_helper_023445d0(&"SpawnEnabledTooltip");
    il2cpp_runtime_helper_023445d0(&"StandardModelsTooltip");
    il2cpp_runtime_helper_023445d0(&"MinSize");
    il2cpp_runtime_helper_023445d0(&"Armor");
    il2cpp_runtime_helper_023445d0(&"StandardModels");
    il2cpp_runtime_helper_023445d0(&"MaxHealth");
    il2cpp_runtime_helper_023445d0(&"Punk");
    il2cpp_runtime_helper_023445d0(&"CreateGamePopup");
    il2cpp_runtime_helper_023445d0(&"Titans");
    il2cpp_runtime_helper_023445d0(&"ArmorEnabled");
    il2cpp_runtime_helper_023445d0(&"Thrower");
    il2cpp_runtime_helper_023445d0(&"HealthOptions");
    il2cpp_runtime_helper_023445d0(&"SizeEnabled");
    il2cpp_runtime_helper_023445d0(&"MinHealth");
    il2cpp_runtime_helper_023445d0(&"Jumper");
    il2cpp_runtime_helper_023445d0(&"HealthMode");
    il2cpp_runtime_helper_023445d0(&"SmartMovementTooltip");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Crawler");
    il2cpp_runtime_helper_023445d0(&"Abnormal");
    g_data_057ae22f = '\x01';
  }
  __this_02 = __this;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  subCategory = "Titans";
  pSVar6 = "CreateGamePopup";
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x50);
    parent = (UI_BasePanel_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
    style = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
    (style->fields).FontSize = 0x18;
    (style->fields).TitleWidth = 240.0;
    (style->fields).Spacing = 20.0;
    __this_02 = (UI_CreateGameTitansPanel_o *)&(style->fields).ThemePanel;
    (style->fields).ThemePanel = (System_String_o *)parent;
    il2cpp_runtime_helper_022b4080();
    if (lVar1 != 0) {
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x20);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"SpawnEnabled","","",(MethodInfo *)0x0);
      pSVar5 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"SpawnEnabledTooltip","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,style,pSVar3,pSVar4,pSVar5,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                 in_stack_ffffffffffffff68);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x28);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"Normal","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,style,pSVar3,pSVar4,"",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffff88);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x30);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"Abnormal","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,style,pSVar3,pSVar4,"",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffff88);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x38);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"Jumper","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,style,pSVar3,pSVar4,"",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffff88);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x40);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"Crawler","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,style,pSVar3,pSVar4,"",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffff88);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x48);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"Thrower","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,style,pSVar3,pSVar4,"",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffff88);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x50);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"Punk","","",(MethodInfo *)0x0);
      pMVar7 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateInputSetting
                (pUVar2,style,pSVar3,pSVar4,"",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffff88);
      UI_BasePanel__CreateHorizontalDivider
                ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,1.0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x58);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"SizeEnabled","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,style,pSVar3,pSVar4,"",30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                 pMVar7);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x60);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"MinSize","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,style,pSVar3,pSVar4,"",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffff88);
      pUVar2 = (__this->fields).DoublePanelLeft;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x68);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"MaxSize","","",(MethodInfo *)0x0);
      pMVar7 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateInputSetting
                (pUVar2,style,pSVar3,pSVar4,"",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffff88);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x70);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"HealthMode","","",(MethodInfo *)0x0);
      options = UI_UIManager__GetLocaleArray(pSVar6,subCategory,"HealthOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleGroupSetting
                (pUVar2,style,pSVar3,pSVar4,options,"",30.0,30.0,pMVar7);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x78);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"MinHealth","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar2,style,pSVar3,pSVar4,"",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffff88);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x80);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"MaxHealth","","",(MethodInfo *)0x0);
      pMVar7 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateInputSetting
                (pUVar2,style,pSVar3,pSVar4,"",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffff88);
      UI_BasePanel__CreateHorizontalDivider
                ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x88);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"ArmorEnabled","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,style,pSVar3,pSVar4,"",30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
                 pMVar7);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x98);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"Armor","","",(MethodInfo *)0x0);
      pMVar7 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateInputSetting
                (pUVar2,style,pSVar3,pSVar4,"",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffff88);
      UI_BasePanel__CreateHorizontalDivider
                ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0xa0);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"StandardModels","","",(MethodInfo *)0x0);
      pSVar5 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"StandardModelsTooltip","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,style,pSVar3,pSVar4,pSVar5,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,pMVar7);
      pUVar2 = (__this->fields).DoublePanelRight;
      pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0xa8);
      pSVar4 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"SmartMovement","","",(MethodInfo *)0x0);
      pSVar6 = UI_UIManager__GetLocale
                         (pSVar6,subCategory,"SmartMovementTooltip","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar2,style,pSVar3,pSVar4,pSVar6,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,pMVar7);
      return;
    }
  }
  elementWidth = (float)il2cpp_runtime_helper_022b2c90();
  pMVar7 = setting;
  if (g_data_057ae26a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ToggleGroupSettingElement_AddComponent_ToggleGroupSettin);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/ToggleGroupSetting");
    g_data_057ae26a = '\x01';
    pMVar7 = extraout_RDX;
  }
  __this_00 = (UI_CreateGameTitansPanel_o *)
              UI_ElementFactory__InstantiateAndBind((UnityEngine_Transform_o *)__this_02,"Prefabs/Elements/ToggleGroupSetting",pMVar7);
  if (__this_00 != (UI_CreateGameTitansPanel_o *)0x0) {
    __this_01 = (UI_ToggleGroupSettingElement_o *)
                UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)__this_00,MethodInfo_ToggleGroupSettingElement_AddComponent_ToggleGroupSettin);
    __this_02 = __this_00;
    if (__this_01 != (UI_ToggleGroupSettingElement_o *)0x0) {
      UI_ToggleGroupSettingElement__Setup
                (__this_01,(Settings_BaseSetting_o *)setting,(UI_ElementStyle_o *)parent,in_RCX,in_R8,in_R9,
                 elementWidth,in_XMM1_Da,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_CreateGameCategoryPanel___ctor((UI_CreateGameCategoryPanel_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameTitansPanel$$.ctor
// il2cpp: void UI_CreateGameTitansPanel___ctor (UI_CreateGameTitansPanel_o* __this, const MethodInfo* method);
// 0x4381140

void UI_CreateGameTitansPanel___ctor(UI_CreateGameTitansPanel_o *__this,MethodInfo *method)

{
  UI_CreateGameCategoryPanel___ctor((UI_CreateGameCategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


