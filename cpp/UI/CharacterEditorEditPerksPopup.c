// Type: UI.CharacterEditorEditPerksPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/CharacterEditorEditPerksPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorEditPerksPopup.cs
// --------------------------------

// UI.CharacterEditorEditPerksPopup.<>c__DisplayClass16_0$$.ctor
// il2cpp: void UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0___ctor (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5cd29e0

void UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0___ctor
               (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup.<>c__DisplayClass16_0$$<CreatePerkButton>b__0
// il2cpp: void UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0___CreatePerkButton_b__0 (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5cd3200

void UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0___CreatePerkButton_b__0
               (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorEditPerksPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorEditPerksPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorEditPerksPopup__OnPerkChanged(__this_00,(__this->fields).name,in_RDX);
  return;
}


// UI.CharacterEditorEditPerksPopup$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorEditPerksPopup__get_Title (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x5cd1290

System_String_o *
UI_CharacterEditorEditPerksPopup__get_Title(UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547b91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Perks");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547b91 = '\x01';
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
// 0x5cd1330

float UI_CharacterEditorEditPerksPopup__get_Width
                (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 580.0;
}


// UI.CharacterEditorEditPerksPopup$$get_Height
// il2cpp: float UI_CharacterEditorEditPerksPopup__get_Height (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x5cd1340

float UI_CharacterEditorEditPerksPopup__get_Height
                (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 590.0;
}


// UI.CharacterEditorEditPerksPopup$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorEditPerksPopup__get_VerticalSpacing (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x5cd1350

float UI_CharacterEditorEditPerksPopup__get_VerticalSpacing
                (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 25.0;
}


// UI.CharacterEditorEditPerksPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorEditPerksPopup__get_HorizontalPadding (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x5cd1360

int32_t UI_CharacterEditorEditPerksPopup__get_HorizontalPadding
                  (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 0x3c;
}


// UI.CharacterEditorEditPerksPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorEditPerksPopup__get_VerticalPadding (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x5cd1370

int32_t UI_CharacterEditorEditPerksPopup__get_VerticalPadding
                  (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.CharacterEditorEditPerksPopup$$Setup
// il2cpp: void UI_CharacterEditorEditPerksPopup__Setup (UI_CharacterEditorEditPerksPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cd1380

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
  Characters_HumanStats_o *__this_02;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UI_ElementStyle_o *pUVar10;
  MethodInfo *pMVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UI_ElementStyle_o *pUVar12;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  MethodInfo *pMVar13;
  
  if (Il2CppMethodInitialized_07547b92 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"AdvancedAlloy");
    il2cpp_codegen_initialize_runtime_metadata(&"OmniDashDescription");
    il2cpp_codegen_initialize_runtime_metadata(&"DurableBlades");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"AdvancedAlloyDescription");
    il2cpp_codegen_initialize_runtime_metadata(&"VerticalDashDescription");
    il2cpp_codegen_initialize_runtime_metadata(&"RefillTime");
    il2cpp_codegen_initialize_runtime_metadata(&"Perks");
    il2cpp_codegen_initialize_runtime_metadata(&"DurableBladesDescription");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"RefillTimeDescription");
    il2cpp_codegen_initialize_runtime_metadata(&"OmniDash");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"VerticalDash");
    Il2CppMethodInitialized_07547b92 = '\x01';
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
            (pUVar5,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_CharacterEditorEditPerksPopup_Setup_b__15_0
             ,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar9,__this_01,pSVar4,0.0,pUVar5,in_R8);
  pUVar9 = (__this->fields).BottomBar;
  pSVar4 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar5,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_CharacterEditorEditPerksPopup_Setup_b__15_1
             ,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar9,__this_01,pSVar4,0.0,pUVar5,in_R8);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar2->fields).CustomSets,
     __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
    pSVar6 = Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_40477A0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    if (pSVar6 != (Settings_BaseSetSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((pSVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
      }
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
    Characters_HumanStats___ctor(__this_02,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if ((pSVar6 != (Settings_BaseSetSetting_o *)0x0) &&
       (pSVar3 = (*(uint64_t *)((char *)pSVar6 + 0x108)), pSVar3 != (Settings_StringSetting_o *)0x0)) {
      pSVar4 = (pSVar3->fields)._value;
      if ((TypeInfo_Characters_HumanStats->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanStats);
      }
      Characters_HumanStats__Deserialize(__this_02,pSVar4,(MethodInfo *)0x0);
      pUVar7 = UI_ElementFactory__CreateDefaultLabel
                         ((__this->fields).SinglePanel,__this_01,
                          (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),0,4,in_R9);
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        pUVar8 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar7,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
        (__this->fields)._pointsLeftLabel = pUVar8;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._pointsLeftLabel);
        pUVar7 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,20.0,3,method_00);
        if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
          pUVar9 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
          pMVar11 = (MethodInfo *)0x0;
          pSVar4 = UI_UIManager__GetLocale
                             ("CharacterEditor","Perks","RefillTimeDescription",
                              "","",(MethodInfo *)0x0);
          UI_CharacterEditorEditPerksPopup__CreatePerkButton
                    (__this,pUVar9,__this_01,"RefillTime",pSVar4,pMVar11);
          pUVar7 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,20.0,3,method_01);
          if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
            pUVar10 = (UI_ElementStyle_o *)UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
            pMVar13 = (MethodInfo *)0x0;
            pSVar4 = UI_UIManager__GetLocale
                               ("CharacterEditor","Perks","DurableBladesDescription",
                                "","",(MethodInfo *)0x0);
            pMVar11 = (MethodInfo *)"DurableBlades";
            pUVar12 = pUVar10;
            UI_CharacterEditorEditPerksPopup__CreatePerkButton
                      (__this,(UnityEngine_Transform_o *)pUVar10,__this_01,"DurableBlades",pSVar4,
                       pMVar13);
            if (Il2CppMethodInitialized_07547b94 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/ArrowRightIcon");
              Il2CppMethodInitialized_07547b94 = '\x01';
            }
            UI_ElementFactory__CreateRawImage
                      ((UnityEngine_Transform_o *)pUVar10,pUVar12,"Icons/Navigation/ArrowRightIcon",32.0,32.0,pMVar11);
            pMVar11 = (MethodInfo *)0x0;
            pSVar4 = UI_UIManager__GetLocale
                               ("CharacterEditor","Perks","AdvancedAlloyDescription",
                                "","",(MethodInfo *)0x0);
            UI_CharacterEditorEditPerksPopup__CreatePerkButton
                      (__this,(UnityEngine_Transform_o *)pUVar10,__this_01,"AdvancedAlloy",pSVar4,
                       pMVar11);
            pUVar7 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,20.0,3,method_02);
            if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
              pUVar10 = (UI_ElementStyle_o *)UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
              pMVar13 = (MethodInfo *)0x0;
              pSVar4 = UI_UIManager__GetLocale
                                 ("CharacterEditor","Perks","VerticalDashDescription",
                                  "","",(MethodInfo *)0x0);
              pMVar11 = (MethodInfo *)"VerticalDash";
              pUVar12 = pUVar10;
              UI_CharacterEditorEditPerksPopup__CreatePerkButton
                        (__this,(UnityEngine_Transform_o *)pUVar10,__this_01,"VerticalDash",pSVar4,
                         pMVar13);
              if (Il2CppMethodInitialized_07547b94 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/ArrowRightIcon");
                Il2CppMethodInitialized_07547b94 = '\x01';
              }
              UI_ElementFactory__CreateRawImage
                        ((UnityEngine_Transform_o *)pUVar10,pUVar12,"Icons/Navigation/ArrowRightIcon",32.0,32.0,pMVar11);
              pMVar11 = (MethodInfo *)0x0;
              pSVar4 = UI_UIManager__GetLocale
                                 ("CharacterEditor","Perks","OmniDashDescription",
                                  "","",(MethodInfo *)0x0);
              UI_CharacterEditorEditPerksPopup__CreatePerkButton
                        (__this,(UnityEngine_Transform_o *)pUVar10,__this_01,"OmniDash",pSVar4,
                         pMVar11);
              UI_CharacterEditorEditPerksPopup__OnPerkChanged(__this,"",method_03);
              return;
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
// 0x5cd1fd0

void UI_CharacterEditorEditPerksPopup__CreatePerkButton
               (UI_CharacterEditorEditPerksPopup_o *__this,UnityEngine_Transform_o *group,
               UI_ElementStyle_o *style,System_String_o *name,System_String_o *desc,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *title;
  UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_GameObject_o *value;
  
  if (Il2CppMethodInitialized_07547b93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorEditPerksPopup_c__DisplayClass16_0_CreatePerkButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorEditPerksPopup_c__DisplayClass16_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_07547b93 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_CharacterEditorEditPerksPopup_c__DisplayClass16_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    (__this_00->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).name);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._perkDescriptions;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)(__this_00->fields).name,(Il2CppObject *)desc,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._perkButtons;
      title = (__this_00->fields).name;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (__this_01,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_UI_CharacterEditorEditPerksPopup_c__DisplayClass16_0_CreatePerkButton_b__0,
                 (MethodInfo *)0x0);
      value = UI_ElementFactory__CreatePerkButton(group,style,title,desc,195.0,95.0,120.0,__this_01,method);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,(Il2CppObject *)title,(Il2CppObject *)value,
                   (MethodInfo_4AAD4E0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorEditPerksPopup$$CreateArrow
// il2cpp: void UI_CharacterEditorEditPerksPopup__CreateArrow (UI_CharacterEditorEditPerksPopup_o* __this, UnityEngine_Transform_o* group, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x5cd2140

void UI_CharacterEditorEditPerksPopup__CreateArrow
               (UI_CharacterEditorEditPerksPopup_o *__this,UnityEngine_Transform_o *group,
               UI_ElementStyle_o *style,MethodInfo *method)

{
  UI_ElementStyle_o *style_00;
  
  style_00 = (UI_ElementStyle_o *)group;
  if (Il2CppMethodInitialized_07547b94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/ArrowRightIcon");
    Il2CppMethodInitialized_07547b94 = '\x01';
  }
  UI_ElementFactory__CreateRawImage(group,style_00,"Icons/Navigation/ArrowRightIcon",32.0,32.0,method);
  return;
}


// UI.CharacterEditorEditPerksPopup$$OnButtonClick
// il2cpp: void UI_CharacterEditorEditPerksPopup__OnButtonClick (UI_CharacterEditorEditPerksPopup_o* __this, System_String_o* button, const MethodInfo* method);
// 0x5cd2e40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cd30a8: mov rdi, rbx

void UI_CharacterEditorEditPerksPopup__OnButtonClick
               (UI_CharacterEditorEditPerksPopup_o *__this,System_String_o *button,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  UI_ImportPopup_o *pUVar3;
  UI_BaseMenu_c *pUVar4;
  bool bVar5;
  UI_BaseMenu_o *pUVar6;
  Characters_HumanStats_o *pCVar7;
  System_String_o *pSVar8;
  
  if (Il2CppMethodInitialized_07547b95 == '\0') {
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
    Il2CppMethodInitialized_07547b95 = '\x01';
  }
  bVar5 = System_String__op_Equality(button,"Back",(MethodInfo *)0x0);
  if (bVar5) {
label_05cd307a:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar5 = System_String__op_Equality(button,"Save",(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar2->fields).CustomSets,
     __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
    pUVar6 = (UI_BaseMenu_o *)
             Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_40477A0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    if (pUVar6 != (UI_BaseMenu_o *)0x0) {
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) goto label_05cd30ab;
    }
    pCVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
    Characters_HumanStats___ctor(pCVar7,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if ((pUVar6 != (UI_BaseMenu_o *)0x0) &&
       (pUVar3 = (*(uint64_t *)((char *)pUVar6 + 0x108)), pUVar3 != (UI_ImportPopup_o *)0x0)) {
      pSVar8 = (System_String_o *)(pUVar3->fields).SinglePanel;
      if ((TypeInfo_Characters_HumanStats->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanStats);
      }
      pCVar7 = Characters_HumanStats__Deserialize(pCVar7,pSVar8,(MethodInfo *)0x0);
      if (pCVar7 != (Characters_HumanStats_o *)0x0) {
        pUVar3 = (*(uint64_t *)((char *)pUVar6 + 0x108));
        pSVar8 = Characters_HumanStats__Serialize(pCVar7,(MethodInfo *)0x0);
        if (pUVar3 != (UI_ImportPopup_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pUVar3,(Il2CppObject *)pSVar8,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (pUVar6 != (UI_BaseMenu_o *)0x0) {
            pUVar4 = pUVar6->klass;
            bVar1 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
            if (((pUVar4->_2).typeHierarchyDepth < bVar1) ||
               ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu
               )) {
label_05cd30ab:
              il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
            }
            (*(code *)((Il2CppClass *)pUVar4)->vtable[9].methodPtr)(pUVar6,0,((Il2CppClass *)pUVar4)->vtable[9].method);
            goto label_05cd307a;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorEditPerksPopup$$OnPerkChanged
// il2cpp: void UI_CharacterEditorEditPerksPopup__OnPerkChanged (UI_CharacterEditorEditPerksPopup_o* __this, System_String_o* perkName, const MethodInfo* method);
// 0x5cd2180
// eh: try 0x5cd252a..0x5cd291e -> pad 0x5cd2967 (+33 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cd298f..0x5cd2994 -> pad 0x5cd29b9 cleanup
// eh: try 0x5cd29bc..0x5cd29c6 -> pad 0x5cd29ce catch (...) [compiler noexcept guard]
// asm: 59 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cd251e: nop 
// asm:   0x5cd292b: jmp 0x5cd296d
// asm:   0x5cd292d: jmp 0x5cd296d
// asm:   0x5cd292f: jmp 0x5cd296d
// asm:   0x5cd2931: jmp 0x5cd296d
// asm:   0x5cd2933: jmp 0x5cd296d
// asm:   0x5cd2935: jmp 0x5cd296d
// asm:   0x5cd2937: jmp 0x5cd296d
// asm:   0x5cd2939: jmp 0x5cd296d
// asm:   0x5cd293b: jmp 0x5cd296d
// asm:   0x5cd293d: jmp 0x5cd296d
// asm:   0x5cd293f: jmp 0x5cd296d
// asm:   0x5cd2941: jmp 0x5cd296d
// asm:   0x5cd2943: jmp 0x5cd296d
// asm:   0x5cd2945: jmp 0x5cd296d
// asm:   0x5cd2947: jmp 0x5cd296d
// asm:   0x5cd2949: jmp 0x5cd296d
// asm:   0x5cd294b: jmp 0x5cd296d
// asm:   0x5cd294d: jmp 0x5cd296d
// asm:   0x5cd294f: jmp 0x5cd296d
// asm:   0x5cd2951: jmp 0x5cd296d
// asm:   0x5cd2953: jmp 0x5cd296d
// asm:   0x5cd2955: jmp 0x5cd296d
// asm:   0x5cd2957: jmp 0x5cd296d
// asm:   0x5cd2959: jmp 0x5cd296d
// asm:   0x5cd295b: jmp 0x5cd296d
// asm:   0x5cd295d: jmp 0x5cd296d
// asm:   0x5cd295f: jmp 0x5cd296d
// asm:   0x5cd2961: jmp 0x5cd296d
// asm:   0x5cd2963: jmp 0x5cd296d
// asm:   0x5cd2965: jmp 0x5cd296d
// asm:   0x5cd2967: jmp 0x5cd296d
// asm:   0x5cd2969: jmp 0x5cd296d
// asm:   0x5cd296b: jmp 0x5cd296d
// asm:   0x5cd296d: mov rbp, rax
// asm:   0x5cd2970: mov r12, qword ptr [rsp + 0x10]
// asm:   0x5cd2975: mov r13d, dword ptr [rsp + 0xc]
// asm:   0x5cd297a: cmp edx, 1
// asm:   0x5cd297d: jne 0x5cd29bc
// asm:   0x5cd297f: mov rdi, rbp
// asm:   0x5cd2982: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cd2987: mov rbp, qword ptr [rax]
// asm:   0x5cd298a: mov qword ptr [rsp + 0x28], rbp
// asm:   0x5cd298f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cd2994: lea rax, [rip + 0x15bd5fd]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_Dispose
// asm:   0x5cd299b: mov rsi, qword ptr [rax]
// asm:   0x5cd299e: lea rdi, [rsp + 0x40]
// asm:   0x5cd29a3: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5cd29a8: test rbp, rbp
// asm:   0x5cd29ab: je 0x5cd27a6
// asm:   0x5cd29b1: mov rdi, rbp
// asm:   0x5cd29b4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cd29b9: mov rbp, rax
// asm:   0x5cd29bc: lea rdi, [rsp + 0x28]
// asm:   0x5cd29c1: call 0x2fdb590  ; il2cpp_runtime_helper_02fdb590()
// asm:   0x5cd29c6: mov rdi, rbp
// asm:   0x5cd29c9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cd29ce: mov rdi, rax
// asm:   0x5cd29d1: call 0x2ab61e0  ; __clang_call_terminate()

void UI_CharacterEditorEditPerksPopup__OnPerkChanged
               (UI_CharacterEditorEditPerksPopup_o *__this,System_String_o *perkName,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Settings_HumanCustomSettings_o *pSVar4;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  bool bVar7;
  int32_t iVar8;
  int32_t iVar9;
  Settings_BaseSetSetting_o *pSVar10;
  Characters_HumanStats_o *pCVar11;
  Characters_BasePerk_o *pCVar12;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  System_String_o *pSVar13;
  System_String_array *values;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_UI_Text_o *pUVar15;
  System_String_o *pSVar16;
  Il2CppObject *arg0;
  int32_t iVar17;
  int32_t local_6c;
  UI_CharacterEditorEditPerksPopup_o *local_68;
  undefined1 local_60 [16];
  System_String_o *local_50;
  undefined1 local_48 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_40;
  System_String_o *local_38;
  
  local_68 = __this;
  if (Il2CppMethodInitialized_07547b96 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"<b>");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"</b>\n(");
    il2cpp_codegen_initialize_runtime_metadata(&"</b>");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Stats");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&"PointsLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547b96 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  local_38 = (System_String_o *)0x0;
  local_6c = 0;
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar4 == (Settings_HumanCustomSettings_o *)0x0) ||
     (__this_00 = (pSVar4->fields).CustomSets,
     __this_00 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) goto label_05cd291e;
  pSVar10 = Settings_SetSettingsContainer_object___GetSelectedSet
                      ((Settings_SetSettingsContainer_T__o *)__this_00,
                       (MethodInfo_40477A0 *)
                       MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
  if (pSVar10 != (Settings_BaseSetSetting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
    if (((pSVar10->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar10);
    }
  }
  pCVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
  Characters_HumanStats___ctor(pCVar11,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
  if ((pSVar10 == (Settings_BaseSetSetting_o *)0x0) ||
     (pSVar5 = (*(uint64_t *)((char *)pSVar10 + 0x108)), pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_05cd291e;
  pSVar16 = (pSVar5->fields)._value;
  if ((TypeInfo_Characters_HumanStats->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanStats);
  }
  pCVar11 = Characters_HumanStats__Deserialize(pCVar11,pSVar16,(MethodInfo *)0x0);
  if (pCVar11 == (Characters_HumanStats_o *)0x0) goto label_05cd291e;
  iVar2 = TypeInfo_Characters_HumanStats->static_fields->MaxPerkPoints;
  iVar8 = Characters_HumanStats__GetPerkPoints(pCVar11,(MethodInfo *)0x0);
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar11->fields).Perks;
  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05cd291e;
  bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar6,(Il2CppObject *)perkName,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_ContainsKey);
  if (bVar7) {
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar11->fields).Perks;
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05cd291e;
    pCVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar6,(Il2CppObject *)perkName,
                         (MethodInfo_4AAD450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
    if (pCVar12 == (Characters_BasePerk_o *)0x0) goto label_05cd291e;
    iVar3 = (pCVar12->fields).CurrPoints;
    iVar9 = (*(pCVar12->klass->vtable)._5_get_MaxPoints.methodPtr)
                      (pCVar12,(pCVar12->klass->vtable)._5_get_MaxPoints.method);
    iVar17 = 0;
    if ((iVar3 < iVar9) && (iVar8 < iVar2)) {
      bVar7 = (*(pCVar12->klass->vtable)._7_HasRequirements.methodPtr)
                        (pCVar12,(pCVar11->fields).Perks,(pCVar12->klass->vtable)._7_HasRequirements.method);
      if (!bVar7) goto label_05cd24a9;
      iVar17 = (pCVar12->fields).CurrPoints + 1;
    }
    (pCVar12->fields).CurrPoints = iVar17;
  }
label_05cd24a9:
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(local_68->fields)._perkButtons;
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys
                          (pSVar6,(MethodInfo_4AAD0F0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Keys)
    ;
    if (__this_01 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_60,
                 __this_01,
                 (MethodInfo_511A520 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_GameObject_GetEnumerator
                );
      local_38 = local_50;
      local_48 = (undefined1  [8])local_60._0_8_;
      pSStack_40 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   local_60._8_8_;
      local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_60._8_8_ =
           (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48;
      while( true ) {
        bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           local_48,(MethodInfo_4CE7080 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_MoveNext
                          );
        pSVar16 = local_38;
        if (!bVar7) break;
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar11->fields).Perks;
        if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar6,(Il2CppObject *)local_38,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
        if (pCVar12 == (Characters_BasePerk_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar7 = (*(pCVar12->klass->vtable)._7_HasRequirements.methodPtr)
                          (pCVar12,(pCVar11->fields).Perks,(pCVar12->klass->vtable)._7_HasRequirements.method)
        ;
        if (!bVar7) {
          (pCVar12->fields).CurrPoints = 0;
        }
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        pSVar13 = Utility_Util__PascalToSentence(pSVar16,(MethodInfo *)0x0);
        values = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
        if (values == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((int)values->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        values->m_Items[0] = "<b>";
        Il2CppCodeGenWriteBarrier(values->m_Items);
        if ((values->max_length & 0xfffffffe) == 0) {
          ThrowIndexOutOfRangeException();
        }
        values->m_Items[1] = pSVar13;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1);
        if ((uint)values->max_length < 3) {
          ThrowIndexOutOfRangeException();
        }
        values->m_Items[2] = "</b>\n(";
        Il2CppCodeGenWriteBarrier(values->m_Items + 2);
        pSVar13 = System_Int32__ToString(&(pCVar12->fields).CurrPoints,(MethodInfo *)0x0);
        if ((values->max_length & 0xfffffffc) == 0) {
          ThrowIndexOutOfRangeException();
        }
        values->m_Items[3] = pSVar13;
        Il2CppCodeGenWriteBarrier(values->m_Items + 3);
        if ((uint)values->max_length < 5) {
          ThrowIndexOutOfRangeException();
        }
        values->m_Items[4] = "/";
        Il2CppCodeGenWriteBarrier(values->m_Items + 4);
        local_6c = (*(pCVar12->klass->vtable)._5_get_MaxPoints.methodPtr)
                             (pCVar12,(pCVar12->klass->vtable)._5_get_MaxPoints.method);
        pSVar13 = System_Int32__ToString(&local_6c,(MethodInfo *)0x0);
        if ((uint)values->max_length < 6) {
          ThrowIndexOutOfRangeException();
        }
        values->m_Items[5] = pSVar13;
        Il2CppCodeGenWriteBarrier(values->m_Items + 5);
        if ((uint)values->max_length < 7) {
          ThrowIndexOutOfRangeException();
        }
        values->m_Items[6] = ")";
        Il2CppCodeGenWriteBarrier(values->m_Items + 6);
        pSVar13 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(local_68->fields)._perkButtons;
        if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_02 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar6,(Il2CppObject *)pSVar16,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item);
        if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar14 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
        if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar14 = UnityEngine_Transform__Find(pUVar14,"Text",(MethodInfo *)0x0);
        if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar15 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar14,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        if (pUVar15 == (UnityEngine_UI_Text_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(pUVar15->klass->vtable)._75_set_text.methodPtr)
                  (pUVar15,pSVar13,(pUVar15->klass->vtable)._75_set_text.method);
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,
                 (MethodInfo_4CE7070 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_Dispose
                );
      iVar8 = Characters_HumanStats__GetPerkPoints(pCVar11,(MethodInfo *)0x0);
      pUVar15 = (local_68->fields)._pointsLeftLabel;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar16 = UI_UIManager__GetLocale
                          ("CharacterEditor","Stats","PointsLeft",
                           "","",(MethodInfo *)0x0);
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      iVar8 = System_Math__Max_54bad40(0,iVar2 - iVar8,(MethodInfo *)0x0);
      local_60._0_4_ = iVar8;
      arg0 = il2cpp_vm_Object_Box(g_data_07556710,local_60);
      pSVar16 = System_String__Format(pSVar16,arg0,(MethodInfo *)0x0);
      pSVar16 = System_String__Concat_5301f10
                          ("<b>",pSVar16,"</b>",(MethodInfo *)0x0);
      if (pUVar15 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar15->klass->vtable)._75_set_text.methodPtr)
                  (pUVar15,pSVar16,(pUVar15->klass->vtable)._75_set_text.method);
        pSVar5 = (*(uint64_t *)((char *)pSVar10 + 0x108));
        pSVar16 = Characters_HumanStats__Serialize(pCVar11,(MethodInfo *)0x0);
        if (pSVar5 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)pSVar16,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          return;
        }
      }
    }
  }
label_05cd291e:
  ThrowNullReferenceException();
}


// UI.CharacterEditorEditPerksPopup$$.ctor
// il2cpp: void UI_CharacterEditorEditPerksPopup___ctor (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x5cd30b0

void UI_CharacterEditorEditPerksPopup___ctor(UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GameObject__o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  
  if (Il2CppMethodInitialized_07547b97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    Il2CppMethodInitialized_07547b97 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor);
  (__this->fields)._perkButtons = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._perkButtons);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  (__this->fields)._perkDescriptions = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._perkDescriptions);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup$$<Setup>b__15_0
// il2cpp: void UI_CharacterEditorEditPerksPopup___Setup_b__15_0 (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x5cd3180

void UI_CharacterEditorEditPerksPopup___Setup_b__15_0
               (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547b98 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorEditPerksPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.CharacterEditorEditPerksPopup$$<Setup>b__15_1
// il2cpp: void UI_CharacterEditorEditPerksPopup___Setup_b__15_1 (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x5cd31c0

void UI_CharacterEditorEditPerksPopup___Setup_b__15_1
               (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547b99 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorEditPerksPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


