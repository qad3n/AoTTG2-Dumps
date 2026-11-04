// Type: UI.CharacterEditorStatsPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorStatsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorStatsPanel.cs
// --------------------------------

// UI.CharacterEditorStatsPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorStatsPanel__get_Title (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x1821dd5c0

System_String_o *
UI_CharacterEditorStatsPanel__get_Title(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346fc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Stats");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346fc3 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterEditor","Stats","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorStatsPanel$$get_Width
// il2cpp: float UI_CharacterEditorStatsPanel__get_Width (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x1821d2010

float
UI_CharacterEditorStatsPanel__get_Width(UI_CharacterEditorStatsPanel_o* __this, MethodInfo* method)

{
  return 330.0;
}


// UI.CharacterEditorStatsPanel$$get_Height
// il2cpp: float UI_CharacterEditorStatsPanel__get_Height (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x1821dd5b0

float UI_CharacterEditorStatsPanel__get_Height(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 360.0;
}


// UI.CharacterEditorStatsPanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorStatsPanel__get_VerticalSpacing (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_CharacterEditorStatsPanel__get_VerticalSpacing(UI_CharacterEditorStatsPanel_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.CharacterEditorStatsPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorStatsPanel__get_HorizontalPadding (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x1821d1fa0

int32_t
UI_CharacterEditorStatsPanel__get_HorizontalPadding(UI_CharacterEditorStatsPanel_o* __this, MethodInfo* method)

{
  return 0x19;
}


// UI.CharacterEditorStatsPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorStatsPanel__get_VerticalPadding (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x1821d1fa0

int32_t
UI_CharacterEditorStatsPanel__get_VerticalPadding(UI_CharacterEditorStatsPanel_o* __this, MethodInfo* method)

{
  return 0x19;
}


// UI.CharacterEditorStatsPanel$$Setup
// il2cpp: void UI_CharacterEditorStatsPanel__Setup (UI_CharacterEditorStatsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821dd0d0

void UI_CharacterEditorStatsPanel__Setup
               (UI_CharacterEditorStatsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *category;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_01;
  Settings_BaseSetSetting_o *pSVar6;
  Characters_HumanStats_o *pCVar7;
  System_String_o *pSVar8;
  UnityEngine_Events_UnityAction_o *pUVar9;
  
  if (Il2CppMethodInitialized_184346fc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorStatsPanel_Setup_b__12_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorStatsPanel_Setup_b__12_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanStats);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Acceleration");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"EditPerks");
    il2cpp_codegen_initialize_runtime_metadata(&"Stats");
    il2cpp_codegen_initialize_runtime_metadata(&"Speed");
    il2cpp_codegen_initialize_runtime_metadata(&"Ammunition");
    il2cpp_codegen_initialize_runtime_metadata(&"EditStats");
    il2cpp_codegen_initialize_runtime_metadata(&"Gas");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346fc4 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,130.0,20.0,pSVar5,(MethodInfo *)0x0);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar2->fields).CustomSets,
     __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
    pSVar6 = Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_C8EAF0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    if (pSVar6 == (Settings_BaseSetSetting_o *)0x0) {
      pCVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
      Characters_HumanStats___ctor(pCVar7,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    }
    else {
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((pSVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
      }
      pCVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
      Characters_HumanStats___ctor(pCVar7,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
      pSVar3 = (*(uint64_t *)((char *)pSVar6 + 0x108));
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        pSVar5 = (pSVar3->fields)._value;
        if ((TypeInfo_Characters_HumanStats->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanStats);
        }
        pCVar7 = Characters_HumanStats__Deserialize(pCVar7,pSVar5,(MethodInfo *)0x0);
        category = "CharacterEditor";
        pSVar5 = "Stats";
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar8 = UI_UIManager__GetLocale
                           (category,pSVar5,"Acceleration","","",
                            (MethodInfo *)0x0);
        if (pCVar7 != (Characters_HumanStats_o *)0x0) {
          UI_CharacterEditorStatsPanel__CreateStatBar
                    (__this,pSVar8,(pCVar7->fields).Acceleration,(MethodInfo *)0x0);
          pSVar8 = UI_UIManager__GetLocale
                             (category,pSVar5,"Speed","",
                              "",(MethodInfo *)0x0);
          UI_CharacterEditorStatsPanel__CreateStatBar(__this,pSVar8,(pCVar7->fields).Speed,(MethodInfo *)0x0);
          pSVar8 = UI_UIManager__GetLocale
                             (category,pSVar5,"Gas","",
                              "",(MethodInfo *)0x0);
          UI_CharacterEditorStatsPanel__CreateStatBar(__this,pSVar8,(pCVar7->fields).Gas,(MethodInfo *)0x0);
          pSVar8 = UI_UIManager__GetLocale
                             (category,pSVar5,"Ammunition","",
                              "",(MethodInfo *)0x0);
          UI_CharacterEditorStatsPanel__CreateStatBar
                    (__this,pSVar8,(pCVar7->fields).Ammunition,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).BottomBar;
          pSVar8 = UI_UIManager__GetLocale
                             (category,pSVar5,"EditStats","",
                              "",(MethodInfo *)0x0);
          pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar9,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_CharacterEditorStatsPanel_Setup_b__12_0,(MethodInfo *)0x0);
          UI_ElementFactory__CreateTextButton(pUVar4,__this_01,pSVar8,0.0,pUVar9,(MethodInfo *)0x0);
          pUVar4 = (__this->fields).BottomBar;
          pSVar5 = UI_UIManager__GetLocale
                             (category,pSVar5,"EditPerks","",
                              "",(MethodInfo *)0x0);
          pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar9,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_CharacterEditorStatsPanel_Setup_b__12_1,(MethodInfo *)0x0);
          UI_ElementFactory__CreateTextButton(pUVar4,__this_01,pSVar5,0.0,pUVar9,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorStatsPanel$$CreateStatBar
// il2cpp: void UI_CharacterEditorStatsPanel__CreateStatBar (UI_CharacterEditorStatsPanel_o* __this, System_String_o* title, int32_t value, const MethodInfo* method);
// 0x1821dc770

void UI_CharacterEditorStatsPanel__CreateStatBar
               (UI_CharacterEditorStatsPanel_o *__this,System_String_o *title,int32_t value,MethodInfo *method
               )

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  System_String_o *pSVar4;
  UnityEngine_Color_o *pUVar5;
  UnityEngine_UI_Slider_o *pUVar6;
  UnityEngine_UI_Image_o *pUVar7;
  float fVar8;
  float fVar9;
  int32_t local_res18 [4];
  UnityEngine_Color_Fields local_38 [2];
  
  local_res18[0] = value;
  if (Il2CppMethodInitialized_184346fc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Slider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"ProgressBar/Background");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"QuestPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"ProgressBarFillColor");
    il2cpp_codegen_initialize_runtime_metadata(&"ProgressBar");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"QuestItem");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    il2cpp_codegen_initialize_runtime_metadata(&"ProgressBar/Fill Area/Fill");
    il2cpp_codegen_initialize_runtime_metadata(&"ProgressBarBackgroundColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/StatBar");
    Il2CppMethodInitialized_184346fc5 = '\x01';
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind
                        ((__this->fields).SinglePanel,"Prefabs/Misc/StatBar",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    fVar8 = ((float)local_res18[0] - 50.0) / 50.0;
    fVar9 = 0.0;
    if ((0.0 <= fVar8) && (fVar9 = 1.0, fVar8 <= 1.0)) {
      fVar9 = fVar8;
    }
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__Find(pUVar1,"Label",(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar2,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                    (pUVar3,title,(pUVar3->klass->vtable)._75_set_text.method);
          pUVar2 = UnityEngine_Transform__Find(pUVar1,"Label",(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            pUVar3 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar2,
                                (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
            pSVar4 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar5 = UI_UIManager__GetThemeColor
                               ((UnityEngine_Color_o *)local_38,pSVar4,"DefaultLabel",
                                "TextColor","DefaultPanel",(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
              local_38[0].r = (pUVar5->fields).r;
              local_38[0].g = (pUVar5->fields).g;
              local_38[0].b = (pUVar5->fields).b;
              local_38[0].a = (pUVar5->fields).a;
              (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                        (pUVar3,(UnityEngine_Color_o *)local_38,(pUVar3->klass->vtable)._23_set_color.method);
              pUVar2 = UnityEngine_Transform__Find(pUVar1,"ProgressBar",(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                pUVar6 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar2,
                                    (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Slider)
                ;
                if (pUVar6 != (UnityEngine_UI_Slider_o *)0x0) {
                  (*(pUVar6->klass->vtable)._47_set_value.methodPtr)
                            (pUVar6,fVar9,(pUVar6->klass->vtable)._47_set_value.method);
                  pUVar2 = UnityEngine_Transform__Find(pUVar1,"ProgressBar/Background",(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    pUVar7 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar2,
                                        (MethodInfo_6651A0 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_Image);
                    pUVar5 = UI_UIManager__GetThemeColor
                                       ((UnityEngine_Color_o *)local_38,"QuestPopup",
                                        "QuestItem","ProgressBarBackgroundColor","DefaultPanel",
                                        (MethodInfo *)0x0);
                    if (pUVar7 != (UnityEngine_UI_Image_o *)0x0) {
                      local_38[0].r = (pUVar5->fields).r;
                      local_38[0].g = (pUVar5->fields).g;
                      local_38[0].b = (pUVar5->fields).b;
                      local_38[0].a = (pUVar5->fields).a;
                      (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
                                (pUVar7,(UnityEngine_Color_o *)local_38,
                                 (pUVar7->klass->vtable)._23_set_color.method);
                      pUVar2 = UnityEngine_Transform__Find(pUVar1,"ProgressBar/Fill Area/Fill",(MethodInfo *)0x0);
                      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                        pUVar7 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar2,
                                            (MethodInfo_6651A0 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_Image);
                        pUVar5 = UI_UIManager__GetThemeColor
                                           ((UnityEngine_Color_o *)local_38,"QuestPopup",
                                            "QuestItem","ProgressBarFillColor","DefaultPanel",
                                            (MethodInfo *)0x0);
                        if (pUVar7 != (UnityEngine_UI_Image_o *)0x0) {
                          local_38[0].r = (pUVar5->fields).r;
                          local_38[0].g = (pUVar5->fields).g;
                          local_38[0].b = (pUVar5->fields).b;
                          local_38[0].a = (pUVar5->fields).a;
                          (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
                                    (pUVar7,(UnityEngine_Color_o *)local_38,
                                     (pUVar7->klass->vtable)._23_set_color.method);
                          pUVar2 = UnityEngine_Transform__Find(pUVar1,"Value",(MethodInfo *)0x0)
                          ;
                          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                            pUVar3 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar2,
                                                (MethodInfo_6651A0 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_Text);
                            pSVar4 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
                            if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                              (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                                        (pUVar3,pSVar4,(pUVar3->klass->vtable)._75_set_text.method);
                              pUVar1 = UnityEngine_Transform__Find
                                                 (pUVar1,"Value",(MethodInfo *)0x0);
                              if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                                pUVar3 = UnityEngine_Component__GetComponent_object_
                                                   ((UnityEngine_Component_o *)pUVar1,
                                                    (MethodInfo_6651A0 *)
                                                    MethodInfo_UnityEngine_Component_GetComponent_Text);
                                pSVar4 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                   (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                                pUVar5 = UI_UIManager__GetThemeColor
                                                   ((UnityEngine_Color_o *)local_38,pSVar4,
                                                    "DefaultLabel","TextColor",
                                                    "DefaultPanel",(MethodInfo *)0x0);
                                if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                                  local_38[0].r = (pUVar5->fields).r;
                                  local_38[0].g = (pUVar5->fields).g;
                                  local_38[0].b = (pUVar5->fields).b;
                                  local_38[0].a = (pUVar5->fields).a;
                                  (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                                            (pUVar3,(UnityEngine_Color_o *)local_38,
                                             (pUVar3->klass->vtable)._23_set_color.method);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorStatsPanel$$OnButtonClick
// il2cpp: void UI_CharacterEditorStatsPanel__OnButtonClick (UI_CharacterEditorStatsPanel_o* __this, System_String_o* button, const MethodInfo* method);
// 0x1821dcc40

void UI_CharacterEditorStatsPanel__OnButtonClick
               (UI_CharacterEditorStatsPanel_o *__this,System_String_o *button,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  UI_MessagePopup_o *pUVar3;
  bool bVar4;
  UI_TooltipPopup_o *pUVar5;
  
  if (Il2CppMethodInitialized_184346fc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"EditPerks");
    il2cpp_codegen_initialize_runtime_metadata(&"EditStats");
    Il2CppMethodInitialized_184346fc6 = '\x01';
  }
  bVar4 = System_String__op_Equality(button,"EditStats",(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_1821dd06f;
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UI_CharacterEditorHumanMenu);
    }
    pUVar5 = (*(uint64_t *)((char *)pUVar2 + 0xc0));
    if (pUVar5 == (UI_TooltipPopup_o *)0x0) goto label_1821dd06f;
    if ((pUVar5->fields).IsActive == false) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_1821dd06f;
      bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
      if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UI_CharacterEditorHumanMenu);
      }
      pUVar3 = (*(uint64_t *)((char *)pUVar2 + 0xc8));
      if (pUVar3 == (UI_MessagePopup_o *)0x0) goto label_1821dd06f;
      (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_1821dd06f;
      bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
      if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
      }
      pUVar5 = (*(uint64_t *)((char *)pUVar2 + 0xc0));
      goto label_1821dd054;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_1821dd06f;
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UI_CharacterEditorHumanMenu);
    }
    pUVar5 = (*(uint64_t *)((char *)pUVar2 + 0xc0));
  }
  else {
    bVar4 = System_String__op_Equality(button,"EditPerks",(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_1821dd06f;
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UI_CharacterEditorHumanMenu);
    }
    pUVar3 = (*(uint64_t *)((char *)pUVar2 + 0xc8));
    if (pUVar3 == (UI_MessagePopup_o *)0x0) goto label_1821dd06f;
    if ((pUVar3->fields).IsActive == false) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_1821dd06f;
      bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
      if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UI_CharacterEditorHumanMenu);
      }
      pUVar5 = (*(uint64_t *)((char *)pUVar2 + 0xc0));
      if (pUVar5 == (UI_TooltipPopup_o *)0x0) goto label_1821dd06f;
      (*(pUVar5->klass->vtable)._22_Hide.methodPtr)(pUVar5,(pUVar5->klass->vtable)._22_Hide.method);
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_1821dd06f;
      bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
      if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
      }
      pUVar5 = (UI_TooltipPopup_o *)(*(uint64_t *)((char *)pUVar2 + 0xc8));
label_1821dd054:
      if (pUVar5 != (UI_TooltipPopup_o *)0x0) {
        (*(pUVar5->klass->vtable)._21_Show.methodPtr)(pUVar5,(pUVar5->klass->vtable)._21_Show.method);
        return;
      }
      goto label_1821dd06f;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_1821dd06f;
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2,TypeInfo_UI_CharacterEditorHumanMenu);
    }
    pUVar5 = (UI_TooltipPopup_o *)(*(uint64_t *)((char *)pUVar2 + 0xc8));
  }
  if (pUVar5 != (UI_TooltipPopup_o *)0x0) {
    (*(pUVar5->klass->vtable)._22_Hide.methodPtr)(pUVar5,(pUVar5->klass->vtable)._22_Hide.method);
    return;
  }
label_1821dd06f:
  ThrowNullReferenceException();
}


// UI.CharacterEditorStatsPanel$$.ctor
// il2cpp: void UI_CharacterEditorStatsPanel___ctor (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x1821d6e20

void
UI_CharacterEditorStatsPanel___ctor(UI_CharacterEditorStatsPanel_o* __this, MethodInfo* method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorStatsPanel$$<Setup>b__12_0
// il2cpp: void UI_CharacterEditorStatsPanel___Setup_b__12_0 (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x1821dd530

void UI_CharacterEditorStatsPanel___Setup_b__12_0(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346fc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EditStats");
    Il2CppMethodInitialized_184346fc7 = '\x01';
  }
  UI_CharacterEditorStatsPanel__OnButtonClick(__this,"EditStats",(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorStatsPanel$$<Setup>b__12_1
// il2cpp: void UI_CharacterEditorStatsPanel___Setup_b__12_1 (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x1821dd570

void UI_CharacterEditorStatsPanel___Setup_b__12_1(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346fc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EditPerks");
    Il2CppMethodInitialized_184346fc8 = '\x01';
  }
  UI_CharacterEditorStatsPanel__OnButtonClick(__this,"EditPerks",(MethodInfo *)0x0);
  return;
}


