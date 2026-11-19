// Type: UI.CharacterEditorTitanSkinsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/CharacterEditorTitanSkinsPanel.cs
// Prior real C# source: none
// --------------------------------

// UI.CharacterEditorTitanSkinsPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorTitanSkinsPanel__get_Title (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cde790

System_String_o *
UI_CharacterEditorTitanSkinsPanel__get_Title(UI_CharacterEditorTitanSkinsPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547be3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547be3 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","Top","SkinsButton","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorTitanSkinsPanel$$get_Width
// il2cpp: float UI_CharacterEditorTitanSkinsPanel__get_Width (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cde830

float UI_CharacterEditorTitanSkinsPanel__get_Width
                (UI_CharacterEditorTitanSkinsPanel_o *__this,MethodInfo *method)

{
  return 330.0;
}


// UI.CharacterEditorTitanSkinsPanel$$get_Height
// il2cpp: float UI_CharacterEditorTitanSkinsPanel__get_Height (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cde840

float UI_CharacterEditorTitanSkinsPanel__get_Height
                (UI_CharacterEditorTitanSkinsPanel_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.CharacterEditorTitanSkinsPanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorTitanSkinsPanel__get_VerticalSpacing (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cde850

float UI_CharacterEditorTitanSkinsPanel__get_VerticalSpacing
                (UI_CharacterEditorTitanSkinsPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorTitanSkinsPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorTitanSkinsPanel__get_HorizontalPadding (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cde860

int32_t UI_CharacterEditorTitanSkinsPanel__get_HorizontalPadding
                  (UI_CharacterEditorTitanSkinsPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorTitanSkinsPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorTitanSkinsPanel__get_VerticalPadding (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cde870

int32_t UI_CharacterEditorTitanSkinsPanel__get_VerticalPadding
                  (UI_CharacterEditorTitanSkinsPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorTitanSkinsPanel$$ResetPreview
// il2cpp: void UI_CharacterEditorTitanSkinsPanel__ResetPreview (const MethodInfo* method);
// 0x5cde880

void UI_CharacterEditorTitanSkinsPanel__ResetPreview(MethodInfo *method)

{
  UI_CharacterEditorTitanSkinsPanel_StaticFields *pUVar1;
  
  if (Il2CppMethodInitialized_07547be4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorTitanSkinsPanel);
    Il2CppMethodInitialized_07547be4 = '\x01';
  }
  pUVar1 = TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields;
  pUVar1->_previewSetIndex = 0;
  pUVar1->_previewEnabled = false;
  pUVar1->_hasInitialized = false;
  return;
}


// UI.CharacterEditorTitanSkinsPanel$$EnsureInitialized
// il2cpp: void UI_CharacterEditorTitanSkinsPanel__EnsureInitialized (const MethodInfo* method);
// 0x5cde8c0

void UI_CharacterEditorTitanSkinsPanel__EnsureInitialized(MethodInfo *method)

{
  UI_CharacterEditorTitanSkinsPanel_StaticFields *pUVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  
  if (Il2CppMethodInitialized_07547be5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorTitanSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSelectedSetIndex);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547be5 = '\x01';
  }
  pUVar1 = TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields;
  if (pUVar1->_hasInitialized != false) {
    return;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 != (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)0x0
      )) && (pSVar4 = (pSVar3->fields).SelectedSetIndex, pSVar4 != (Settings_IntSetting_o *)0x0)) {
    pUVar1->_previewSetIndex = (pSVar4->fields)._value;
    pSVar5 = (pSVar3->fields).SkinsEnabled;
    if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
      pUVar1->_previewEnabled = (pSVar5->fields)._value;
      pUVar1->_hasInitialized = true;
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanSkinsPanel$$GetPreviewSkinSet
// il2cpp: Settings_TitanCustomSkinSet_o* UI_CharacterEditorTitanSkinsPanel__GetPreviewSkinSet (const MethodInfo* method);
// 0x5cde980
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cdeacd: nop dword ptr [rax]
// asm:   0x5cdeb57: jmp 0x5cdeb3a

Settings_TitanCustomSkinSet_o * UI_CharacterEditorTitanSkinsPanel__GetPreviewSkinSet(MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_CustomSkinSettings_o *pSVar3;
  Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *pSVar4;
  Settings_ListSetting_T__o *obj;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  int32_t iVar7;
  VirtualInvokeData *pVVar8;
  Settings_TitanCustomSkinSet_o *pSVar9;
  ulong uVar10;
  Settings_TitanCustomSkinSet_c **ppSVar11;
  long lVar12;
  
  if (Il2CppMethodInitialized_07547be6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorTitanSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    ppSVar11 = &TypeInfo_Settings_TitanCustomSkinSet;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSkinSet);
    Il2CppMethodInitialized_07547be6 = '\x01';
    method = (MethodInfo *)ppSVar11;
  }
  UI_CharacterEditorTitanSkinsPanel__EnsureInitialized(method);
  if (TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewEnabled != false) {
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if ((pSVar3 == (Settings_CustomSkinSettings_o *)0x0) ||
       (pSVar4 = (pSVar3->fields).Titan,
       pSVar4 == (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)0x0)) {
label_05cdeb59:
      ThrowNullReferenceException();
    }
    iVar2 = TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewSetIndex;
    if (-1 < iVar2) {
      obj = (pSVar4->fields).Sets;
      if (obj == (Settings_ListSetting_T__o *)0x0) goto label_05cdeb59;
      pIVar5 = (Il2CppClass *)obj->klass;
      uVar10 = (ulong)(pIVar5->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar6 = (pIVar5->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(Settings_IListSetting_c **)((long)&pIVar6->interfaceType + lVar12) ==
              TypeInfo_Settings_IListSetting) {
            pVVar8 = pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar12);
            goto label_05cdea91;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar10 * 0x10 != lVar12);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,0);
label_05cdea91:
      iVar7 = (*pVVar8->methodPtr)((Il2CppObject *)obj,pVVar8->method);
      if (iVar2 < iVar7) {
        iVar7 = TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewSetIndex;
        pIVar5 = (Il2CppClass *)obj->klass;
        uVar10 = (ulong)(pIVar5->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar6 = (pIVar5->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(Settings_IListSetting_c **)((long)&pIVar6->interfaceType + lVar12) ==
                TypeInfo_Settings_IListSetting) {
              pVVar8 = pIVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar12) + 1);
              goto label_05cdeb08;
            }
            lVar12 = lVar12 + 0x10;
          } while (uVar10 * 0x10 != lVar12);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,1);
label_05cdeb08:
        pSVar9 = (Settings_TitanCustomSkinSet_o *)
                 (*pVVar8->methodPtr)((Il2CppObject *)obj,iVar7,pVVar8->method);
        if (pSVar9 != (Settings_TitanCustomSkinSet_o *)0x0) {
          bVar1 = (TypeInfo_Settings_TitanCustomSkinSet->_2).typeHierarchyDepth;
          if (bVar1 <= (((Il2CppClass *)pSVar9->klass)->_2).typeHierarchyDepth) {
            if ((((Il2CppClass *)pSVar9->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSet) {
              return pSVar9;
            }
            return (Settings_TitanCustomSkinSet_o *)0x0;
          }
        }
      }
    }
  }
  return (Settings_TitanCustomSkinSet_o *)0x0;
}


// UI.CharacterEditorTitanSkinsPanel$$Setup
// il2cpp: void UI_CharacterEditorTitanSkinsPanel__Setup (UI_CharacterEditorTitanSkinsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cdeb60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cdecd3: lea rdi, [r12 + 0x80]
// asm:   0x5cdecdb: jmp 0x5cded09

void UI_CharacterEditorTitanSkinsPanel__Setup
               (UI_CharacterEditorTitanSkinsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  bool defaultValue;
  int32_t defaultValue_00;
  UI_CharacterEditorMenu_o *pUVar2;
  Settings_CustomSkinSettings_o *pSVar3;
  Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *__this_00;
  UnityEngine_Transform_o *parent_00;
  Il2CppClass *pIVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_01;
  System_String_array *options;
  UnityEngine_Events_UnityAction_o *pUVar8;
  UnityEngine_GameObject_o *setting;
  MethodInfo *method_00;
  UI_CharacterEditorTitanSkinsPanel_o *__this_02;
  MethodInfo *pMVar9;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_07547be7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorTitanSkinsPanel_Setup_b__21_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorTitanSkinsPanel_Setup_b__21_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorTitanSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547be7 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar2 = (UI_CharacterEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    pIVar4 = (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu;
  }
  else {
    pUVar2 = (UI_CharacterEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    pIVar4 = (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu;
  }
  TypeInfo_UI_CharacterEditorMenu = (UI_CharacterEditorMenu_c *)pIVar4;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    (__this->fields)._menu = (UI_CharacterEditorMenu_o *)0x0;
label_05cded09:
    pMVar9 = (MethodInfo *)&(__this->fields)._menu;
    Il2CppCodeGenWriteBarrier((void **)pMVar9);
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (pSVar3 != (Settings_CustomSkinSettings_o *)0x0) {
      __this_00 = (pSVar3->fields).Titan;
      UI_CharacterEditorTitanSkinsPanel__EnsureInitialized(pMVar9);
      defaultValue_00 = TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewSetIndex;
      pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
      Settings_IntSetting___ctor_5a412e0(pSVar5,defaultValue_00,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
      (__this->fields)._setIndex = pSVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._setIndex);
      defaultValue = TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewEnabled;
      pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
      Settings_BoolSetting___ctor_5a412a0(pSVar6,defaultValue,(MethodInfo *)0x0);
      (__this->fields)._enabled = pSVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._enabled);
      pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(__this_01,0x18,110.0,20.0,pSVar7,(MethodInfo *)0x0);
      parent_00 = (__this->fields).SinglePanel;
      pSVar5 = (__this->fields)._setIndex;
      pSVar7 = UI_UIManager__GetLocale
                         ("SettingsPopup","Skins.Common","Set",
                          "","",(MethodInfo *)0x0);
      if (__this_00 != (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)0x0) {
        options = Settings_SetSettingsContainer_object___GetSetNames
                            ((Settings_SetSettingsContainer_T__o *)__this_00,
                             (MethodInfo_40482D0 *)
                             MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSetNames);
        pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar8,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_CharacterEditorTitanSkinsPanel_Setup_b__21_0,(MethodInfo *)0x0);
        pMVar9 = (MethodInfo *)0x0;
        UI_ElementFactory__CreateDropdownSetting
                  (parent_00,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,options,"",
                   160.0,40.0,180.0,(System_Nullable_float__o)0x0,pUVar8,(System_Int32_array *)0x0,
                   (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
        __this_02 = (UI_CharacterEditorTitanSkinsPanel_o *)(__this->fields).SinglePanel;
        pSVar6 = (__this->fields)._enabled;
        pSVar7 = UI_UIManager__GetLocale
                           ("SettingsPopup","Skins.Common","SkinsEnabled",
                            "","",(MethodInfo *)0x0);
        pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar8,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_CharacterEditorTitanSkinsPanel_Setup_b__21_1,(MethodInfo *)0x0);
        setting = UI_ElementFactory__CreateToggleSetting
                            ((UnityEngine_Transform_o *)__this_02,__this_01,(Settings_BaseSetting_o *)pSVar6,
                             pSVar7,"",30.0,30.0,pUVar8,pMVar9);
        UI_CharacterEditorTitanSkinsPanel__ExpandLabel(__this_02,setting,method_00);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  bVar1 = (pIVar4->_2).typeHierarchyDepth;
  if ((bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) &&
     ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar4)) {
    (__this->fields)._menu = pUVar2;
    if ((bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) &&
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar4)) goto label_05cded09;
  }
  il2cpp_codegen_raise_invalid_cast_exception(pUVar2,pIVar4);
}


// UI.CharacterEditorTitanSkinsPanel$$ExpandLabel
// il2cpp: void UI_CharacterEditorTitanSkinsPanel__ExpandLabel (UI_CharacterEditorTitanSkinsPanel_o* __this, UnityEngine_GameObject_o* setting, const MethodInfo* method);
// 0x5cdefc0

void UI_CharacterEditorTitanSkinsPanel__ExpandLabel
               (UI_CharacterEditorTitanSkinsPanel_o *__this,UnityEngine_GameObject_o *setting,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_UI_LayoutElement_o *x;
  
  if (Il2CppMethodInitialized_07547be8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    Il2CppMethodInitialized_07547be8 = '\x01';
  }
  if ((setting != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__get_transform(setting,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      __this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar2,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (__this_00 == (UnityEngine_UI_Text_o *)0x0) goto label_05cdf131;
        UnityEngine_UI_Text__set_horizontalOverflow(__this_00,1,(MethodInfo *)0x0);
        UnityEngine_UI_Text__set_verticalOverflow(__this_00,1,(MethodInfo *)0x0);
      }
      x = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)pUVar2,
                     (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      if (x != (UnityEngine_UI_LayoutElement_o *)0x0) {
        (*(x->klass->vtable)._36_set_preferredWidth.methodPtr)
                  (x,220.0,(x->klass->vtable)._36_set_preferredWidth.method);
        return;
      }
    }
  }
label_05cdf131:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanSkinsPanel$$OnSkinsChanged
// il2cpp: void UI_CharacterEditorTitanSkinsPanel__OnSkinsChanged (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cdf140

void UI_CharacterEditorTitanSkinsPanel__OnSkinsChanged
               (UI_CharacterEditorTitanSkinsPanel_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  UI_CharacterEditorTitanSkinsPanel_StaticFields *pUVar2;
  Settings_BoolSetting_o *pSVar3;
  UI_CharacterEditorMenu_o *pUVar4;
  
  if (Il2CppMethodInitialized_07547be9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorTitanSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547be9 = '\x01';
  }
  pSVar1 = (__this->fields)._setIndex;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    pUVar2 = TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields;
    pUVar2->_previewSetIndex = (pSVar1->fields)._value;
    pSVar3 = (__this->fields)._enabled;
    if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
      pUVar2->_previewEnabled = (pSVar3->fields)._value;
      pUVar4 = (__this->fields)._menu;
      if (pUVar4 != (UI_CharacterEditorMenu_o *)0x0) {
        (*(pUVar4->klass->vtable)._10_ResetCharacter.methodPtr)
                  (pUVar4,false,(pUVar4->klass->vtable)._10_ResetCharacter.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanSkinsPanel$$.ctor
// il2cpp: void UI_CharacterEditorTitanSkinsPanel___ctor (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cdf1e0

void UI_CharacterEditorTitanSkinsPanel___ctor(UI_CharacterEditorTitanSkinsPanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanSkinsPanel$$<Setup>b__21_0
// il2cpp: void UI_CharacterEditorTitanSkinsPanel___Setup_b__21_0 (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cdf1f0

void UI_CharacterEditorTitanSkinsPanel___Setup_b__21_0
               (UI_CharacterEditorTitanSkinsPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanSkinsPanel__OnSkinsChanged(__this,method);
  return;
}


// UI.CharacterEditorTitanSkinsPanel$$<Setup>b__21_1
// il2cpp: void UI_CharacterEditorTitanSkinsPanel___Setup_b__21_1 (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cdf200

void UI_CharacterEditorTitanSkinsPanel___Setup_b__21_1
               (UI_CharacterEditorTitanSkinsPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanSkinsPanel__OnSkinsChanged(__this,method);
  return;
}


