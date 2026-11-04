// Type: UI.CharacterEditorEditPerksPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorEditPerksPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorEditPerksPopup.cs
// --------------------------------

// UI.CharacterEditorEditPerksPopup.<>c__DisplayClass16_0$$.ctor
// il2cpp: void UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0___ctor (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0___ctor(UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup.<>c__DisplayClass16_0$$<CreatePerkButton>b__0
// il2cpp: void UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0___CreatePerkButton_b__0 (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x1821e8140

void UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0___CreatePerkButton_b__0
               (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorEditPerksPopup_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorEditPerksPopup_o *)0x0) {
    UI_CharacterEditorEditPerksPopup__OnPerkChanged(__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorEditPerksPopup$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorEditPerksPopup__get_Title (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x1821d8210

System_String_o *
UI_CharacterEditorEditPerksPopup__get_Title(UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346f93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Perks");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346f93 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterEditor","Perks","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorEditPerksPopup$$get_Width
// il2cpp: float UI_CharacterEditorEditPerksPopup__get_Width (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x1821d82b0

float UI_CharacterEditorEditPerksPopup__get_Width
                (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 580.0;
}


// UI.CharacterEditorEditPerksPopup$$get_Height
// il2cpp: float UI_CharacterEditorEditPerksPopup__get_Height (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x1821d8200

float
UI_CharacterEditorEditPerksPopup__get_Height(UI_CharacterEditorEditPerksPopup_o* __this, MethodInfo* method)

{
  return 590.0;
}


// UI.CharacterEditorEditPerksPopup$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorEditPerksPopup__get_VerticalSpacing (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x182160800

float UI_CharacterEditorEditPerksPopup__get_VerticalSpacing
                (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 25.0;
}


// UI.CharacterEditorEditPerksPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorEditPerksPopup__get_HorizontalPadding (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x180847000

int32_t
UI_CharacterEditorEditPerksPopup__get_HorizontalPadding(UI_CharacterEditorEditPerksPopup_o* __this, MethodInfo* method)

{
  return 0x3c;
}


// UI.CharacterEditorEditPerksPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorEditPerksPopup__get_VerticalPadding (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x1821bb430

int32_t
UI_CharacterEditorEditPerksPopup__get_VerticalPadding(UI_CharacterEditorEditPerksPopup_o* __this, MethodInfo* method)

{
  return 0x1e;
}


// UI.CharacterEditorEditPerksPopup$$Setup
// il2cpp: void UI_CharacterEditorEditPerksPopup__Setup (UI_CharacterEditorEditPerksPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821d7af0

void UI_CharacterEditorEditPerksPopup__Setup
               (UI_CharacterEditorEditPerksPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar3;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar5;
  Settings_BaseSetSetting_o *pSVar6;
  Characters_HumanStats_o *pCVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_UI_Text_o *value;
  UnityEngine_Transform_o *pUVar9;
  
  if (Il2CppMethodInitialized_184346f94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorEditPerksPopup_Setup_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorEditPerksPopup_Setup_b__15_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanStats);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Allow air-dash up or down depending on camera.");
    il2cpp_codegen_initialize_runtime_metadata(&"AdvancedAlloy");
    il2cpp_codegen_initialize_runtime_metadata(&"DurableBlades");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Reduces gas refill time.");
    il2cpp_codegen_initialize_runtime_metadata(&"Blades consume no durability, but break immediately on low speed hits.");
    il2cpp_codegen_initialize_runtime_metadata(&"RefillTime");
    il2cpp_codegen_initialize_runtime_metadata(&"Allow air-dash in any direction depending on camera.");
    il2cpp_codegen_initialize_runtime_metadata(&"Have fewer but more durable blades.");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"OmniDash");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Points Left");
    il2cpp_codegen_initialize_runtime_metadata(&"VerticalDash");
    Il2CppMethodInitialized_184346f94 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar4 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,130.0,20.0,pSVar4,(MethodInfo *)0x0);
  pUVar9 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar4 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterEditorEditPerksPopup_Setup_b__15_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar9,__this_01,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  pUVar9 = (__this->fields).BottomBar;
  pSVar4 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterEditorEditPerksPopup_Setup_b__15_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar9,__this_01,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
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
        pSVar4 = (pSVar3->fields)._value;
        if ((TypeInfo_Characters_HumanStats->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanStats);
        }
        Characters_HumanStats__Deserialize(pCVar7,pSVar4,(MethodInfo *)0x0);
        pUVar8 = UI_ElementFactory__CreateDefaultLabel
                           ((__this->fields).SinglePanel,__this_01,"Points Left",0,4,(MethodInfo *)0x0
                           );
        if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
          value = UnityEngine_GameObject__GetComponent_object_
                            (pUVar8,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
          (__this->fields)._pointsLeftLabel = value;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._pointsLeftLabel,value);
          pUVar8 = UI_ElementFactory__CreateHorizontalGroup
                             ((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
            pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
            UI_CharacterEditorEditPerksPopup__CreatePerkButton
                      (__this,pUVar9,__this_01,"RefillTime","Reduces gas refill time.",(MethodInfo *)0x0);
            pUVar8 = UI_ElementFactory__CreateHorizontalGroup
                               ((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
              UI_CharacterEditorEditPerksPopup__CreatePerkButton
                        (__this,pUVar9,__this_01,"DurableBlades","Have fewer but more durable blades.",(MethodInfo *)0x0
                        );
              if (Il2CppMethodInitialized_184346f96 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/ArrowRightIcon");
                Il2CppMethodInitialized_184346f96 = '\x01';
              }
              UI_ElementFactory__CreateRawImage
                        (pUVar9,__this_01,"Icons/Navigation/ArrowRightIcon",32.0,32.0,(MethodInfo *)0x0);
              UI_CharacterEditorEditPerksPopup__CreatePerkButton
                        (__this,pUVar9,__this_01,"AdvancedAlloy","Blades consume no durability, but break immediately on low speed hits.",(MethodInfo *)0x0
                        );
              pUVar8 = UI_ElementFactory__CreateHorizontalGroup
                                 ((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
              if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                UI_CharacterEditorEditPerksPopup__CreatePerkButton
                          (__this,pUVar9,__this_01,"VerticalDash","Allow air-dash up or down depending on camera.",
                           (MethodInfo *)0x0);
                if (Il2CppMethodInitialized_184346f96 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/ArrowRightIcon");
                  Il2CppMethodInitialized_184346f96 = '\x01';
                }
                UI_ElementFactory__CreateRawImage
                          (pUVar9,__this_01,"Icons/Navigation/ArrowRightIcon",32.0,32.0,(MethodInfo *)0x0);
                UI_CharacterEditorEditPerksPopup__CreatePerkButton
                          (__this,pUVar9,__this_01,"OmniDash","Allow air-dash in any direction depending on camera.",
                           (MethodInfo *)0x0);
                UI_CharacterEditorEditPerksPopup__OnPerkChanged
                          (__this,"",(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorEditPerksPopup$$CreatePerkButton
// il2cpp: void UI_CharacterEditorEditPerksPopup__CreatePerkButton (UI_CharacterEditorEditPerksPopup_o* __this, UnityEngine_Transform_o* group, UI_ElementStyle_o* style, System_String_o* name, System_String_o* desc, const MethodInfo* method);
// 0x1821d6f40

void UI_CharacterEditorEditPerksPopup__CreatePerkButton
               (UI_CharacterEditorEditPerksPopup_o *__this,UnityEngine_Transform_o *group,
               UI_ElementStyle_o *style,System_String_o *name,System_String_o *desc,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *title;
  UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_00;
  UnityEngine_GameObject_o *value;
  
  if (Il2CppMethodInitialized_184346f95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorEditPerksPopup_c__DisplayClass16_0_CreatePerkButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorEditPerksPopup_c__DisplayClass16_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_184346f95 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_UI_CharacterEditorEditPerksPopup_c__DisplayClass16_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(object->fields).name,name);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._perkDescriptions;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)(object->fields).name,(Il2CppObject *)desc,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._perkButtons;
      title = (object->fields).name;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_UI_CharacterEditorEditPerksPopup_c__DisplayClass16_0_CreatePerkButton_b__0,
                 (MethodInfo *)0x0);
      value = UI_ElementFactory__CreatePerkButton
                        (group,style,title,desc,195.0,95.0,120.0,__this_00,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,(Il2CppObject *)title,(Il2CppObject *)value,
                   (MethodInfo_146B4B0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorEditPerksPopup$$CreateArrow
// il2cpp: void UI_CharacterEditorEditPerksPopup__CreateArrow (UI_CharacterEditorEditPerksPopup_o* __this, UnityEngine_Transform_o* group, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x1821d6ee0

void UI_CharacterEditorEditPerksPopup__CreateArrow
               (UI_CharacterEditorEditPerksPopup_o *__this,UnityEngine_Transform_o *group,
               UI_ElementStyle_o *style,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/ArrowRightIcon");
    Il2CppMethodInitialized_184346f96 = '\x01';
  }
  UI_ElementFactory__CreateRawImage(group,style,"Icons/Navigation/ArrowRightIcon",32.0,32.0,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup$$OnButtonClick
// il2cpp: void UI_CharacterEditorEditPerksPopup__OnButtonClick (UI_CharacterEditorEditPerksPopup_o* __this, System_String_o* button, const MethodInfo* method);
// 0x1821d70e0

void UI_CharacterEditorEditPerksPopup__OnButtonClick
               (UI_CharacterEditorEditPerksPopup_o *__this,System_String_o *button,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar3;
  UI_BaseMenu_o *pUVar4;
  UI_BaseMenu_c *pUVar5;
  bool bVar6;
  Settings_BaseSetSetting_o *pSVar7;
  Characters_HumanStats_o *pCVar8;
  System_String_o *pSVar9;
  
  if (Il2CppMethodInitialized_184346f97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanStats);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346f97 = '\x01';
  }
  bVar6 = System_String__op_Equality(button,"Back",(MethodInfo *)0x0);
  if (bVar6) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar6 = System_String__op_Equality(button,"Save",(MethodInfo *)0x0);
  if (!bVar6) {
    return;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar2->fields).CustomSets,
     __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
    pSVar7 = Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_C8EAF0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    if (pSVar7 == (Settings_BaseSetSetting_o *)0x0) {
      pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
      Characters_HumanStats___ctor(pCVar8,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    }
    else {
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((pSVar7->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar7->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar7);
      }
      pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
      Characters_HumanStats___ctor(pCVar8,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
      pSVar3 = (*(uint64_t *)((char *)pSVar7 + 0x108));
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        pSVar9 = (pSVar3->fields)._value;
        if ((TypeInfo_Characters_HumanStats->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanStats);
        }
        pCVar8 = Characters_HumanStats__Deserialize(pCVar8,pSVar9,(MethodInfo *)0x0);
        if (pCVar8 != (Characters_HumanStats_o *)0x0) {
          pSVar3 = (*(uint64_t *)((char *)pSVar7 + 0x108));
          pSVar9 = Characters_HumanStats__Serialize(pCVar8,(MethodInfo *)0x0);
          if (pSVar3 != (Settings_StringSetting_o *)0x0) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar9,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar4 != (UI_BaseMenu_o *)0x0) {
              pUVar5 = pUVar4->klass;
              bVar1 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
              if ((bVar1 <= (pUVar5->_2).typeHierarchyDepth) &&
                 ((pUVar5->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu)) {
                (*(code *)((Il2CppClass *)pUVar5)->vtable[8].methodPtr)(pUVar4,0,((Il2CppClass *)pUVar5)->vtable[8].method);
                (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
                return;
              }
              il2cpp_codegen_raise_invalid_cast_exception(pUVar4,TypeInfo_UI_CharacterEditorMenu);
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorEditPerksPopup$$OnPerkChanged
// il2cpp: void UI_CharacterEditorEditPerksPopup__OnPerkChanged (UI_CharacterEditorEditPerksPopup_o* __this, System_String_o* perkName, const MethodInfo* method);
// 0x1821d73a0
// eh: try 0x1821d770b..0x1821d7add -> pad 0x183331810 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821d7965: mov rdx, qword ptr [rip + 0x1ee39f4]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_Dispose
// asm:   0x1821d796c: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821d7971: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821d7976: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821d797b: test rcx, rcx
// asm:   0x1821d797e: jne 0x1821d7add
// asm:   0x1821d7984: mov r12, qword ptr [rsp + 0xb0]
// asm:   0x1821d798c: mov r13, qword ptr [rsp + 0x60]
// asm:   0x1821d7991: mov r14, qword ptr [rsp + 0x68]
// asm:   0x1821d7996: mov r15d, dword ptr [rsp + 0x20]
// asm:   0x1821d7add: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331810: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331815: push rbp
// asm:   0x183331816: sub rsp, 0x20
// asm:   0x18333181a: mov rbp, rdx
// asm:   0x18333181d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x183331821: mov rcx, qword ptr [rax]
// asm:   0x183331824: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183331828: movabs rax, 0
// asm:   0x183331832: add rsp, 0x20
// asm:   0x183331836: pop rbp
// asm:   0x183331837: ret 

void UI_CharacterEditorEditPerksPopup__OnPerkChanged
               (UI_CharacterEditorEditPerksPopup_o *__this,System_String_o *perkName,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  Settings_HumanCustomSettings_o *pSVar5;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar6;
  System_Collections_Generic_Dictionary_string__BasePerk__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  System_Collections_Generic_Dictionary_string__GameObject__o *__this_02;
  bool bVar8;
  int32_t iVar9;
  int32_t iVar10;
  Settings_BaseSetSetting_o *pSVar11;
  Characters_HumanStats_o *pCVar12;
  Characters_BasePerk_o *pCVar13;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  System_String_o *value;
  System_String_array *values;
  System_String_o *pSVar14;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_UI_Text_o *pUVar16;
  System_String_o *pSVar17;
  int32_t local_res20 [2];
  undefined1 local_80 [16];
  System_String_o *local_70;
  undefined1 local_68 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_60;
  System_String_o *local_58;
  Settings_BaseSetSetting_o *local_50;
  Characters_HumanStats_o *local_48;
  Settings_BaseSetSetting_o *local_40;
  
  if (Il2CppMethodInitialized_184346f98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanStats);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_GameObject_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"<b>");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"</b>\n(");
    il2cpp_codegen_initialize_runtime_metadata(&"</b>");
    il2cpp_codegen_initialize_runtime_metadata(&"<b>Points left: ");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    Il2CppMethodInitialized_184346f98 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pUStack_60 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_58 = (System_String_o *)0x0;
  local_res20[0] = 0;
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar5 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar5->fields).CustomSets,
     __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
    pSVar11 = Settings_SetSettingsContainer_object___GetSelectedSet
                        ((Settings_SetSettingsContainer_T__o *)__this_00,
                         (MethodInfo_C8EAF0 *)
                         MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    local_50 = pSVar11;
    if (pSVar11 == (Settings_BaseSetSetting_o *)0x0) {
      pCVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
      Characters_HumanStats___ctor(pCVar12,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    }
    else {
      bVar2 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((pSVar11->klass->_2).typeHierarchyDepth < bVar2) ||
         ((pSVar11->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar11);
      }
      pCVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
      Characters_HumanStats___ctor(pCVar12,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
      pSVar6 = (*(uint64_t *)((char *)pSVar11 + 0x108));
      if (pSVar6 != (Settings_StringSetting_o *)0x0) {
        pSVar17 = (pSVar6->fields)._value;
        if ((TypeInfo_Characters_HumanStats->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanStats);
        }
        pCVar12 = Characters_HumanStats__Deserialize(pCVar12,pSVar17,(MethodInfo *)0x0);
        local_48 = pCVar12;
        if (pCVar12 != (Characters_HumanStats_o *)0x0) {
          iVar3 = TypeInfo_Characters_HumanStats->static_fields->MaxPerkPoints;
          iVar9 = Characters_HumanStats__GetPerkPoints(pCVar12,(MethodInfo *)0x0);
          __this_01 = (pCVar12->fields).Perks;
          if (__this_01 != (System_Collections_Generic_Dictionary_string__BasePerk__o *)0x0) {
            bVar8 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                               (Il2CppObject *)perkName,
                               (MethodInfo_1455450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_ContainsKey);
            if (bVar8) {
              pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar12->fields).Perks;
              if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_1821d7a8a;
              pCVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar7,(Il2CppObject *)perkName,
                                   (MethodInfo_147A5B0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
              if (pCVar13 == (Characters_BasePerk_o *)0x0) goto label_1821d7a8a;
              iVar4 = (pCVar13->fields).CurrPoints;
              iVar10 = (*(pCVar13->klass->vtable)._5_get_MaxPoints.methodPtr)
                                 (pCVar13,(pCVar13->klass->vtable)._5_get_MaxPoints.method);
              if ((iVar4 < iVar10) && (iVar9 < iVar3)) {
                bVar8 = (*(pCVar13->klass->vtable)._7_HasRequirements.methodPtr)
                                  (pCVar13,(pCVar12->fields).Perks,
                                   (pCVar13->klass->vtable)._7_HasRequirements.method);
                if (bVar8) {
                  piVar1 = &(pCVar13->fields).CurrPoints;
                  *piVar1 = *piVar1 + 1;
                }
              }
              else {
                (pCVar13->fields).CurrPoints = 0;
              }
            }
            __this_02 = (__this->fields)._perkButtons;
            if (__this_02 != (System_Collections_Generic_Dictionary_string__GameObject__o *)0x0) {
              __this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                          System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                                     (MethodInfo_13C6500 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Keys
                                    );
              if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                           )local_80,__this_03,
                           (MethodInfo_F1E4D0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_GameObject_GetEnumerator
                          );
                local_68 = (undefined1  [8])local_80._0_8_;
                pUStack_60 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80._8_8_;
                local_58 = local_70;
                local_80._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                local_80._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68;
                local_40 = pSVar11;
                while( true ) {
                  bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                      *)local_68,
                                     (MethodInfo_156BDD0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_MoveNext
                                    );
                  pSVar17 = local_58;
                  if (!bVar8) break;
                  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar12->fields).Perks;
                  if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pCVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                                      (pSVar7,(Il2CppObject *)local_58,
                                       (MethodInfo_147A5B0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item
                                      );
                  if (pCVar13 == (Characters_BasePerk_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar8 = (*(pCVar13->klass->vtable)._7_HasRequirements.methodPtr)
                                    (pCVar13,(pCVar12->fields).Perks,
                                     (pCVar13->klass->vtable)._7_HasRequirements.method);
                  if (!bVar8) {
                    (pCVar13->fields).CurrPoints = 0;
                  }
                  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                  }
                  value = Utility_Util__PascalToSentence(pSVar17,(MethodInfo *)0x0);
                  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
                  pSVar14 = "<b>";
                  if (values == (System_String_array *)0x0) {
                    ThrowNullReferenceException();
                  }
                  if ((int)values->max_length == 0) {
                    ThrowIndexOutOfRangeException();
                  }
                  values->m_Items[0] = "<b>";
                  Il2CppCodeGenWriteBarrier(values->m_Items,pSVar14);
                  if ((uint)values->max_length < 2) {
                    ThrowIndexOutOfRangeException();
                  }
                  values->m_Items[1] = value;
                  Il2CppCodeGenWriteBarrier(values->m_Items + 1,value);
                  pSVar14 = "</b>\n(";
                  if ((uint)values->max_length < 3) {
                    ThrowIndexOutOfRangeException();
                  }
                  values->m_Items[2] = "</b>\n(";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar14);
                  pSVar14 = System_Int32__ToString(&(pCVar13->fields).CurrPoints,(MethodInfo *)0x0);
                  if ((uint)values->max_length < 4) {
                    ThrowIndexOutOfRangeException();
                  }
                  values->m_Items[3] = pSVar14;
                  Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar14);
                  pSVar14 = "/";
                  if ((uint)values->max_length < 5) {
                    ThrowIndexOutOfRangeException();
                  }
                  values->m_Items[4] = "/";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar14);
                  local_res20[0] =
                       (*(pCVar13->klass->vtable)._5_get_MaxPoints.methodPtr)
                                 (pCVar13,(pCVar13->klass->vtable)._5_get_MaxPoints.method);
                  pSVar14 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
                  if ((uint)values->max_length < 6) {
                    ThrowIndexOutOfRangeException();
                  }
                  values->m_Items[5] = pSVar14;
                  Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar14);
                  pSVar14 = ")";
                  if ((uint)values->max_length < 7) {
                    ThrowIndexOutOfRangeException();
                  }
                  values->m_Items[6] = ")";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 6,pSVar14);
                  pSVar14 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._perkButtons;
                  if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  __this_04 = System_Collections_Generic_Dictionary_object__object___get_Item
                                        (pSVar7,(Il2CppObject *)pSVar17,
                                         (MethodInfo_147A5B0 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item
                                        );
                  if (__this_04 == (UnityEngine_GameObject_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar15 = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0);
                  if (pUVar15 == (UnityEngine_Transform_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar15 = UnityEngine_Transform__Find(pUVar15,"Text",(MethodInfo *)0x0);
                  if (pUVar15 == (UnityEngine_Transform_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar16 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar15,
                                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text
                                      );
                  if (pUVar16 == (UnityEngine_UI_Text_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  (*(pUVar16->klass->vtable)._75_set_text.methodPtr)
                            (pUVar16,pSVar14,(pUVar16->klass->vtable)._75_set_text.method);
                }
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68,
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_Dispose
                          );
                pSVar11 = local_50;
                iVar9 = Characters_HumanStats__GetPerkPoints(pCVar12,(MethodInfo *)0x0);
                pUVar16 = (__this->fields)._pointsLeftLabel;
                if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                }
                local_res20[0] = System_Math__Max_1b2c0d0(0,iVar3 - iVar9,(MethodInfo *)0x0);
                pSVar17 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
                pSVar17 = System_String__Concat_1969b70
                                    ("<b>Points left: ",pSVar17,"</b>",(MethodInfo *)0x0);
                if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
                  (*(pUVar16->klass->vtable)._75_set_text.methodPtr)
                            (pUVar16,pSVar17,(pUVar16->klass->vtable)._75_set_text.method);
                  pSVar6 = (*(uint64_t *)((char *)pSVar11 + 0x108));
                  pSVar17 = Characters_HumanStats__Serialize(pCVar12,(MethodInfo *)0x0);
                  if (pSVar6 != (Settings_StringSetting_o *)0x0) {
                    Settings_TypedSetting_object___set_Value
                              ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar17,
                               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
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
label_1821d7a8a:
  ThrowNullReferenceException();
}


// UI.CharacterEditorEditPerksPopup$$.ctor
// il2cpp: void UI_CharacterEditorEditPerksPopup___ctor (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x1821d8130

void UI_CharacterEditorEditPerksPopup___ctor(UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GameObject__o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  
  if (Il2CppMethodInitialized_184346f99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    Il2CppMethodInitialized_184346f99 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor);
  (__this->fields)._perkButtons = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._perkButtons,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  (__this->fields)._perkDescriptions = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._perkDescriptions,__this_01);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup$$<Setup>b__15_0
// il2cpp: void UI_CharacterEditorEditPerksPopup___Setup_b__15_0 (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x1821d80b0

void UI_CharacterEditorEditPerksPopup___Setup_b__15_0
               (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346f9a = '\x01';
  }
  UI_CharacterEditorEditPerksPopup__OnButtonClick(__this,"Save",(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup$$<Setup>b__15_1
// il2cpp: void UI_CharacterEditorEditPerksPopup___Setup_b__15_1 (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x1821d80f0

void UI_CharacterEditorEditPerksPopup___Setup_b__15_1
               (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184346f9b = '\x01';
  }
  UI_CharacterEditorEditPerksPopup__OnButtonClick(__this,"Back",(MethodInfo *)0x0);
  return;
}


