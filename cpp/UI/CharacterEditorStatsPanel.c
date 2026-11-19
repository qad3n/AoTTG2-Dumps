// Type: UI.CharacterEditorStatsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/CharacterEditorStatsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorStatsPanel.cs
// --------------------------------

// UI.CharacterEditorStatsPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorStatsPanel__get_Title (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x5cd8990

System_String_o *
UI_CharacterEditorStatsPanel__get_Title(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547bc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Stats");
    Il2CppMethodInitialized_07547bc3 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Stats",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorStatsPanel$$get_Width
// il2cpp: float UI_CharacterEditorStatsPanel__get_Width (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x5cd89f0

float UI_CharacterEditorStatsPanel__get_Width(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 330.0;
}


// UI.CharacterEditorStatsPanel$$get_Height
// il2cpp: float UI_CharacterEditorStatsPanel__get_Height (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x5cd8a00

float UI_CharacterEditorStatsPanel__get_Height(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 360.0;
}


// UI.CharacterEditorStatsPanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorStatsPanel__get_VerticalSpacing (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x5cd8a10

float UI_CharacterEditorStatsPanel__get_VerticalSpacing
                (UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorStatsPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorStatsPanel__get_HorizontalPadding (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x5cd8a20

int32_t UI_CharacterEditorStatsPanel__get_HorizontalPadding
                  (UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorStatsPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorStatsPanel__get_VerticalPadding (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x5cd8a30

int32_t UI_CharacterEditorStatsPanel__get_VerticalPadding
                  (UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorStatsPanel$$Setup
// il2cpp: void UI_CharacterEditorStatsPanel__Setup (UI_CharacterEditorStatsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cd8a40

void UI_CharacterEditorStatsPanel__Setup
               (UI_CharacterEditorStatsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar3;
  System_String_o *subCategory;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_01;
  Settings_BaseSetSetting_o *pSVar5;
  Characters_HumanStats_o *pCVar6;
  UnityEngine_Transform_array *statbars;
  System_String_o *pSVar7;
  UnityEngine_Transform_o *pUVar8;
  Il2CppObject *pIVar9;
  UnityEngine_Events_UnityAction_o *pUVar10;
  MethodInfo *pMVar11;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547bc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorStatsPanel_Setup_b__12_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorStatsPanel_Setup_b__12_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanStats);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform_array);
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
    Il2CppMethodInitialized_07547bc4 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar4 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,130.0,20.0,pSVar4,(MethodInfo *)0x0);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 == (Settings_HumanCustomSettings_o *)0x0) ||
     (__this_00 = (pSVar2->fields).CustomSets,
     __this_00 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
label_05cd8fa8:
    ThrowNullReferenceException();
  }
  pSVar5 = Settings_SetSettingsContainer_object___GetSelectedSet
                     ((Settings_SetSettingsContainer_T__o *)__this_00,
                      (MethodInfo_40477A0 *)
                      MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
  if (pSVar5 != (Settings_BaseSetSetting_o *)0x0) {
    bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
    if (((pSVar5->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_HumanCustomSet
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar5);
    }
  }
  pCVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
  Characters_HumanStats___ctor(pCVar6,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
  if ((pSVar5 == (Settings_BaseSetSetting_o *)0x0) ||
     (pSVar3 = (*(uint64_t *)((char *)pSVar5 + 0x108)), pSVar3 == (Settings_StringSetting_o *)0x0)) goto label_05cd8fa8;
  pSVar4 = (pSVar3->fields)._value;
  if ((TypeInfo_Characters_HumanStats->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanStats);
  }
  pCVar6 = Characters_HumanStats__Deserialize(pCVar6,pSVar4,(MethodInfo *)0x0);
  subCategory = "Stats";
  pSVar4 = "CharacterEditor";
  statbars = (UnityEngine_Transform_array *)SZArrayNew(TypeInfo_UnityEngine_Transform_array,4);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar11 = (MethodInfo *)"";
  pSVar7 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"Acceleration","","",
                      (MethodInfo *)0x0);
  if (pCVar6 == (Characters_HumanStats_o *)0x0) goto label_05cd8fa8;
  pUVar8 = UI_CharacterEditorStatsPanel__CreateStatBar(__this,pSVar7,(pCVar6->fields).Acceleration,pMVar11);
  if (statbars == (UnityEngine_Transform_array *)0x0) goto label_05cd8fa8;
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar8,(((statbars->obj).klass)->_1).element_class);
    if (pIVar9 == (Il2CppObject *)0x0) goto label_05cd8fb2;
  }
  if ((int)statbars->max_length != 0) {
    statbars->m_Items[0] = pUVar8;
    Il2CppCodeGenWriteBarrier(statbars->m_Items);
    pMVar11 = (MethodInfo *)"";
    pSVar7 = UI_UIManager__GetLocale
                       (pSVar4,subCategory,"Speed","","",
                        (MethodInfo *)0x0);
    pUVar8 = UI_CharacterEditorStatsPanel__CreateStatBar(__this,pSVar7,(pCVar6->fields).Speed,pMVar11);
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar8,(((statbars->obj).klass)->_1).element_class);
      if (pIVar9 == (Il2CppObject *)0x0) goto label_05cd8fb2;
    }
    if ((statbars->max_length & 0xfffffffe) == 0) goto label_05cd8fad;
    statbars->m_Items[1] = pUVar8;
    Il2CppCodeGenWriteBarrier(statbars->m_Items + 1);
    pMVar11 = (MethodInfo *)"";
    pSVar7 = UI_UIManager__GetLocale
                       (pSVar4,subCategory,"Gas","","",
                        (MethodInfo *)0x0);
    pUVar8 = UI_CharacterEditorStatsPanel__CreateStatBar(__this,pSVar7,(pCVar6->fields).Gas,pMVar11);
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar8,(((statbars->obj).klass)->_1).element_class);
      if (pIVar9 == (Il2CppObject *)0x0) goto label_05cd8fb2;
    }
    if (2 < (uint)statbars->max_length) {
      statbars->m_Items[2] = pUVar8;
      Il2CppCodeGenWriteBarrier(statbars->m_Items + 2);
      pMVar11 = (MethodInfo *)"";
      pSVar7 = UI_UIManager__GetLocale
                         (pSVar4,subCategory,"Ammunition","",""
                          ,(MethodInfo *)0x0);
      pUVar8 = UI_CharacterEditorStatsPanel__CreateStatBar(__this,pSVar7,(pCVar6->fields).Ammunition,pMVar11);
      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
        pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)pUVar8,(((statbars->obj).klass)->_1).element_class);
        if (pIVar9 == (Il2CppObject *)0x0) {
label_05cd8fb2:
          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
        }
      }
      if ((statbars->max_length & 0xfffffffc) != 0) {
        statbars->m_Items[3] = pUVar8;
        Il2CppCodeGenWriteBarrier(statbars->m_Items + 3);
        UI_CharacterEditorStatsPanel__FitStatBarColumns(__this,statbars,method_00);
        pUVar8 = (__this->fields).BottomBar;
        pMVar11 = (MethodInfo *)"";
        pSVar7 = UI_UIManager__GetLocale
                           (pSVar4,subCategory,"EditStats","",
                            "",(MethodInfo *)0x0);
        pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar10,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_CharacterEditorStatsPanel_Setup_b__12_0,(MethodInfo *)0x0);
        UI_ElementFactory__CreateTextButton(pUVar8,__this_01,pSVar7,0.0,pUVar10,pMVar11);
        pUVar8 = (__this->fields).BottomBar;
        pMVar11 = (MethodInfo *)"";
        pSVar4 = UI_UIManager__GetLocale
                           (pSVar4,subCategory,"EditPerks","",
                            "",(MethodInfo *)0x0);
        pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar10,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_CharacterEditorStatsPanel_Setup_b__12_1,(MethodInfo *)0x0);
        UI_ElementFactory__CreateTextButton(pUVar8,__this_01,pSVar4,0.0,pUVar10,pMVar11);
        return;
      }
    }
  }
label_05cd8fad:
  ThrowIndexOutOfRangeException();
}


// UI.CharacterEditorStatsPanel$$FitStatBarColumns
// il2cpp: void UI_CharacterEditorStatsPanel__FitStatBarColumns (UI_CharacterEditorStatsPanel_o* __this, UnityEngine_Transform_array* statbars, const MethodInfo* method);
// 0x5cd9440

void UI_CharacterEditorStatsPanel__FitStatBarColumns
               (UI_CharacterEditorStatsPanel_o *__this,UnityEngine_Transform_array *statbars,
               MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float local_38;
  
  if (Il2CppMethodInitialized_07547bc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"ProgressBar");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"Value");
    Il2CppMethodInitialized_07547bc5 = '\x01';
  }
  if (statbars != (UnityEngine_Transform_array *)0x0) {
    if ((int)statbars->max_length == 0) {
label_05cd9724:
      ThrowIndexOutOfRangeException();
    }
    if (statbars->m_Items[0] != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__Find(statbars->m_Items[0],"Value",(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar3,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement)
        ;
        if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          fVar8 = (*(pUVar4->klass->vtable)._35_get_preferredWidth.methodPtr)
                            (pUVar4,(pUVar4->klass->vtable)._35_get_preferredWidth.method);
          fVar9 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                            (__this,(__this->klass->vtable)._5_get_Width.method);
          iVar2 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                            (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
          uVar1 = (uint)statbars->max_length;
          uVar6 = (ulong)uVar1;
          if (0 < (int)uVar1) {
            fVar8 = ((fVar9 - ((float)iVar2 + (float)iVar2)) + -24.0) - fVar8;
            local_38 = 0.0;
            lVar7 = 0;
            do {
              if ((uint)uVar6 <= (uint)lVar7) goto label_05cd9724;
              if (statbars->m_Items[lVar7] == (UnityEngine_Transform_o *)0x0) goto label_05cd971f;
              pUVar3 = UnityEngine_Transform__Find
                                 (statbars->m_Items[lVar7],"Label",(MethodInfo *)0x0);
              if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05cd971f;
              pUVar5 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar3,
                                  (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
              if (pUVar5 == (UnityEngine_UI_Text_o *)0x0) goto label_05cd971f;
              fVar9 = (*(pUVar5->klass->vtable)._79_get_preferredWidth.methodPtr)
                                (pUVar5,(pUVar5->klass->vtable)._79_get_preferredWidth.method);
              if (local_38 <= fVar9) {
                local_38 = fVar9;
              }
              uVar6 = statbars->max_length;
              lVar7 = lVar7 + 1;
            } while ((int)lVar7 < (int)uVar6);
            if (0 < (int)uVar6) {
              fVar9 = fVar8 * 0.7;
              if (fVar9 <= local_38) {
                local_38 = fVar9;
              }
              lVar7 = 0;
              do {
                if ((uint)uVar6 <= (uint)lVar7) goto label_05cd9724;
                pUVar3 = statbars->m_Items[lVar7];
                if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05cd971f;
                __this_00 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar3,
                                       (MethodInfo_34B0830 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_HorizontalLayoutGroup);
                if (__this_00 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_05cd971f;
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,12.0,
                           (MethodInfo *)0x0);
                __this_01 = UnityEngine_Transform__Find(pUVar3,"Label",(MethodInfo *)0x0);
                if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_05cd971f;
                pUVar4 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)__this_01,
                                    (MethodInfo_34B0830 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cd971f;
                (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
                          (pUVar4,local_38,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
                pUVar3 = UnityEngine_Transform__Find(pUVar3,"ProgressBar",(MethodInfo *)0x0);
                if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_05cd971f;
                pUVar4 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar3,
                                    (MethodInfo_34B0830 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cd971f;
                (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
                          (pUVar4,fVar8 - local_38,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
                uVar1 = (uint)statbars->max_length;
                uVar6 = (ulong)uVar1;
                lVar7 = lVar7 + 1;
              } while ((int)lVar7 < (int)uVar1);
            }
          }
          return;
        }
      }
    }
  }
label_05cd971f:
  ThrowNullReferenceException();
}


// UI.CharacterEditorStatsPanel$$CreateStatBar
// il2cpp: UnityEngine_Transform_o* UI_CharacterEditorStatsPanel__CreateStatBar (UI_CharacterEditorStatsPanel_o* __this, System_String_o* title, int32_t value, const MethodInfo* method);
// 0x5cd8fd0

UnityEngine_Transform_o *
UI_CharacterEditorStatsPanel__CreateStatBar
          (UI_CharacterEditorStatsPanel_o *__this,System_String_o *title,int32_t value,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  System_String_o *pSVar3;
  UnityEngine_UI_Slider_o *pUVar4;
  UnityEngine_UI_Image_o *pUVar5;
  undefined4 in_register_00000014;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  float fVar6;
  float fVar7;
  UnityEngine_Color_o UVar8;
  int32_t local_34;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000014,value);
  if (Il2CppMethodInitialized_07547bc6 == '\0') {
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
    Il2CppMethodInitialized_07547bc6 = '\x01';
    method_00 = extraout_RDX;
  }
  __this_00 = UI_ElementFactory__InstantiateAndBind
                        ((__this->fields).SinglePanel,"Prefabs/Misc/StatBar",method_00);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar1 = UnityEngine_Transform__Find(__this_01,"Label",(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar1,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                    (pUVar2,title,(pUVar2->klass->vtable)._75_set_text.method);
          pUVar1 = UnityEngine_Transform__Find(__this_01,"Label",(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar2 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar1,
                                (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
            pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            UVar8 = UI_UIManager__GetThemeColor
                              (pSVar3,"DefaultLabel","TextColor","DefaultPanel",
                               (MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                        (pUVar2,UVar8,(pUVar2->klass->vtable)._23_set_color.method);
              pUVar1 = UnityEngine_Transform__Find(__this_01,"ProgressBar",(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                pUVar4 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar1,
                                    (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Slider
                                   );
                if (pUVar4 != (UnityEngine_UI_Slider_o *)0x0) {
                  fVar6 = ((float)value + -50.0) / 50.0;
                  fVar7 = 1.0;
                  if (fVar6 <= 1.0) {
                    fVar7 = fVar6;
                  }
                  (*(pUVar4->klass->vtable)._47_set_value.methodPtr)
                            (pUVar4,(float)(-(uint)(0.0 <= fVar6) & (uint)fVar7),
                             (pUVar4->klass->vtable)._47_set_value.method);
                  pUVar1 = UnityEngine_Transform__Find(__this_01,"ProgressBar/Background",(MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    pUVar5 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar1,
                                        (MethodInfo_34B0830 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_Image);
                    UVar8 = UI_UIManager__GetThemeColor
                                      ("QuestPopup","QuestItem","ProgressBarBackgroundColor",
                                       "DefaultPanel",(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
                      (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                                (pUVar5,UVar8,(pUVar5->klass->vtable)._23_set_color.method);
                      pUVar1 = UnityEngine_Transform__Find(__this_01,"ProgressBar/Fill Area/Fill",(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                        pUVar5 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar1,
                                            (MethodInfo_34B0830 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_Image);
                        UVar8 = UI_UIManager__GetThemeColor
                                          ("QuestPopup","QuestItem","ProgressBarFillColor",
                                           "DefaultPanel",(MethodInfo *)0x0);
                        if (pUVar5 != (UnityEngine_UI_Image_o *)0x0) {
                          (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                                    (pUVar5,UVar8,(pUVar5->klass->vtable)._23_set_color.method);
                          pUVar1 = UnityEngine_Transform__Find
                                             (__this_01,"Value",(MethodInfo *)0x0);
                          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                            pUVar2 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar1,
                                                (MethodInfo_34B0830 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_Text);
                            pSVar3 = System_Int32__ToString(&local_34,(MethodInfo *)0x0);
                            if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                              (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                                        (pUVar2,pSVar3,(pUVar2->klass->vtable)._75_set_text.method);
                              pUVar1 = UnityEngine_Transform__Find
                                                 (__this_01,"Value",(MethodInfo *)0x0);
                              if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                                pUVar2 = UnityEngine_Component__GetComponent_object_
                                                   ((UnityEngine_Component_o *)pUVar1,
                                                    (MethodInfo_34B0830 *)
                                                    MethodInfo_UnityEngine_Component_GetComponent_Text);
                                pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                   (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                                UVar8 = UI_UIManager__GetThemeColor
                                                  (pSVar3,"DefaultLabel","TextColor",
                                                   "DefaultPanel",(MethodInfo *)0x0);
                                if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                                  (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                                            (pUVar2,UVar8,(pUVar2->klass->vtable)._23_set_color.method);
                                  return __this_01;
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
// 0x5cd9880
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cd998d: mov rsi, qword ptr [r14]
// asm:   0x5cd99c8: jmp 0x5cd9c7c
// asm:   0x5cd9a93: mov rsi, qword ptr [r14]
// asm:   0x5cd9b13: mov rsi, qword ptr [r14]
// asm:   0x5cd9bb0: jmp 0x5cd9c7c
// asm:   0x5cd9bd8: mov rsi, qword ptr [r14]

void UI_CharacterEditorStatsPanel__OnButtonClick
               (UI_CharacterEditorStatsPanel_o *__this,System_String_o *button,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_MessagePopup_o *pUVar3;
  bool bVar4;
  UI_TooltipPopup_o *pUVar5;
  UI_BaseMenu_o *pUVar6;
  
  if (Il2CppMethodInitialized_07547bc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"EditPerks");
    il2cpp_codegen_initialize_runtime_metadata(&"EditStats");
    Il2CppMethodInitialized_07547bc7 = '\x01';
  }
  bVar4 = System_String__op_Equality(button,"EditStats",(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_05cd9c7c;
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) goto label_05cd9c77;
    pUVar5 = (*(uint64_t *)((char *)pUVar6 + 0xc0));
    if (pUVar5 == (UI_TooltipPopup_o *)0x0) goto label_05cd9c7c;
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    if ((pUVar5->fields).IsActive != false) {
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_05cd9c7c;
      }
      bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
      if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) goto label_05cd9c77;
      pUVar5 = (*(uint64_t *)((char *)pUVar6 + 0xc0));
      if (pUVar5 != (UI_TooltipPopup_o *)0x0) goto label_05cd9ace;
      goto label_05cd9c7c;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_05cd9c7c;
    }
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) goto label_05cd9c77;
    pUVar3 = (*(uint64_t *)((char *)pUVar6 + 0xc8));
    if (pUVar3 == (UI_MessagePopup_o *)0x0) goto label_05cd9c7c;
    (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
    pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_05cd9c7c;
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) goto label_05cd9c77;
    pUVar5 = (*(uint64_t *)((char *)pUVar6 + 0xc0));
  }
  else {
    bVar4 = System_String__op_Equality(button,"EditPerks",(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_05cd9c7c;
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) goto label_05cd9c77;
    pUVar3 = (*(uint64_t *)((char *)pUVar6 + 0xc8));
    if (pUVar3 == (UI_MessagePopup_o *)0x0) goto label_05cd9c7c;
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    if ((pUVar3->fields).IsActive != false) {
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_05cd9c7c;
      }
      bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
      if ((bVar1 <= (pUVar6->klass->_2).typeHierarchyDepth) &&
         ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
        pUVar5 = (UI_TooltipPopup_o *)(*(uint64_t *)((char *)pUVar6 + 0xc8));
        if (pUVar5 == (UI_TooltipPopup_o *)0x0) goto label_05cd9c7c;
label_05cd9ace:
        (*(pUVar5->klass->vtable)._22_Hide.methodPtr)(pUVar5,(pUVar5->klass->vtable)._22_Hide.method);
        return;
      }
label_05cd9c77:
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_05cd9c7c;
    }
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) goto label_05cd9c77;
    pUVar5 = (*(uint64_t *)((char *)pUVar6 + 0xc0));
    if (pUVar5 == (UI_TooltipPopup_o *)0x0) goto label_05cd9c7c;
    (*(pUVar5->klass->vtable)._22_Hide.methodPtr)(pUVar5,(pUVar5->klass->vtable)._22_Hide.method);
    pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_05cd9c7c;
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) goto label_05cd9c77;
    pUVar5 = (UI_TooltipPopup_o *)(*(uint64_t *)((char *)pUVar6 + 0xc8));
  }
  if (pUVar5 != (UI_TooltipPopup_o *)0x0) {
    (*(pUVar5->klass->vtable)._21_Show.methodPtr)(pUVar5,(pUVar5->klass->vtable)._21_Show.method);
    return;
  }
label_05cd9c7c:
  ThrowNullReferenceException();
}


// UI.CharacterEditorStatsPanel$$.ctor
// il2cpp: void UI_CharacterEditorStatsPanel___ctor (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x5cd9c90

void UI_CharacterEditorStatsPanel___ctor(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorStatsPanel$$<Setup>b__12_0
// il2cpp: void UI_CharacterEditorStatsPanel___Setup_b__12_0 (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x5cd9ca0

void UI_CharacterEditorStatsPanel___Setup_b__12_0(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  System_String_o **ppSVar1;
  
  if (g_data_07547bc8 == '\0') {
    ppSVar1 = &"EditStats";
    il2cpp_codegen_initialize_runtime_metadata(&"EditStats");
    g_data_07547bc8 = '\x01';
    in_RDX = extraout_RDX;
    __this = (UI_CharacterEditorStatsPanel_o *)ppSVar1;
  }
  UI_CharacterEditorStatsPanel__OnButtonClick(__this,"EditStats",in_RDX);
  return;
}


// UI.CharacterEditorStatsPanel$$<Setup>b__12_1
// il2cpp: void UI_CharacterEditorStatsPanel___Setup_b__12_1 (UI_CharacterEditorStatsPanel_o* __this, const MethodInfo* method);
// 0x5cd9cd0

void UI_CharacterEditorStatsPanel___Setup_b__12_1(UI_CharacterEditorStatsPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  System_String_o **ppSVar1;
  
  if (g_data_07547bc9 == '\0') {
    ppSVar1 = &"EditPerks";
    il2cpp_codegen_initialize_runtime_metadata(&"EditPerks");
    g_data_07547bc9 = '\x01';
    in_RDX = extraout_RDX;
    __this = (UI_CharacterEditorStatsPanel_o *)ppSVar1;
  }
  UI_CharacterEditorStatsPanel__OnButtonClick(__this,"EditPerks",in_RDX);
  return;
}


