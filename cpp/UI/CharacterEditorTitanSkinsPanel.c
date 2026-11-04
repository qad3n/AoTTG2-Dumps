// Type: UI.CharacterEditorTitanSkinsPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/CharacterEditorTitanSkinsPanel.cs
// Prior real C# source: none
// --------------------------------

// UI.CharacterEditorTitanSkinsPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorTitanSkinsPanel__get_Title (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821e1ac0

System_String_o *
UI_CharacterEditorTitanSkinsPanel__get_Title(UI_CharacterEditorTitanSkinsPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346fe2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346fe2 = '\x01';
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
// 0x1821d2010

float UI_CharacterEditorTitanSkinsPanel__get_Width
                (UI_CharacterEditorTitanSkinsPanel_o *__this,MethodInfo *method)

{
  return 330.0;
}


// UI.CharacterEditorTitanSkinsPanel$$get_Height
// il2cpp: float UI_CharacterEditorTitanSkinsPanel__get_Height (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821c1230

float
UI_CharacterEditorTitanSkinsPanel__get_Height(UI_CharacterEditorTitanSkinsPanel_o* __this, MethodInfo* method)

{
  return 300.0;
}


// UI.CharacterEditorTitanSkinsPanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorTitanSkinsPanel__get_VerticalSpacing (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_CharacterEditorTitanSkinsPanel__get_VerticalSpacing(UI_CharacterEditorTitanSkinsPanel_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.CharacterEditorTitanSkinsPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorTitanSkinsPanel__get_HorizontalPadding (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821d1fa0

int32_t
UI_CharacterEditorTitanSkinsPanel__get_HorizontalPadding(UI_CharacterEditorTitanSkinsPanel_o* __this, MethodInfo* method)

{
  return 0x19;
}


// UI.CharacterEditorTitanSkinsPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorTitanSkinsPanel__get_VerticalPadding (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821d1fa0

int32_t
UI_CharacterEditorTitanSkinsPanel__get_VerticalPadding(UI_CharacterEditorTitanSkinsPanel_o* __this, MethodInfo* method)

{
  return 0x19;
}


// UI.CharacterEditorTitanSkinsPanel$$ResetPreview
// il2cpp: void UI_CharacterEditorTitanSkinsPanel__ResetPreview (const MethodInfo* method);
// 0x1821e1450

void UI_CharacterEditorTitanSkinsPanel__ResetPreview(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346fe3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorTitanSkinsPanel);
    Il2CppMethodInitialized_184346fe3 = '\x01';
  }
  TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewSetIndex = 0;
  TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewEnabled = false;
  TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_hasInitialized = false;
  return;
}


// UI.CharacterEditorTitanSkinsPanel$$EnsureInitialized
// il2cpp: void UI_CharacterEditorTitanSkinsPanel__EnsureInitialized (const MethodInfo* method);
// 0x1821e0f60

void UI_CharacterEditorTitanSkinsPanel__EnsureInitialized(MethodInfo *method)

{
  Settings_CustomSkinSettings_o *pSVar1;
  Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_184346fe4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorTitanSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSelectedSetIndex);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346fe4 = '\x01';
  }
  if (TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_hasInitialized != false) {
    return;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (((pSVar1 != (Settings_CustomSkinSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Titan, pSVar2 != (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)0x0
      )) && (pSVar3 = (pSVar2->fields).SelectedSetIndex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewSetIndex = (pSVar3->fields)._value;
    pSVar4 = (pSVar2->fields).SkinsEnabled;
    if (pSVar4 != (Settings_BoolSetting_o *)0x0) {
      TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewEnabled = (pSVar4->fields)._value;
      TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_hasInitialized = true;
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanSkinsPanel$$GetPreviewSkinSet
// il2cpp: Settings_TitanCustomSkinSet_o* UI_CharacterEditorTitanSkinsPanel__GetPreviewSkinSet (const MethodInfo* method);
// 0x1821e11c0

Settings_TitanCustomSkinSet_o * UI_CharacterEditorTitanSkinsPanel__GetPreviewSkinSet(MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int32_t iVar4;
  Settings_CustomSkinSettings_o *pSVar5;
  Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *pSVar6;
  Settings_ListSetting_T__o *obj;
  Il2CppClass *pIVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  bool bVar9;
  void *pvVar10;
  VirtualInvokeData *pVVar11;
  Settings_TitanCustomSkinSet_o *pSVar12;
  Settings_TitanCustomSkinSet_o *pSVar13;
  ushort uVar14;
  
  if (Il2CppMethodInitialized_184346fe5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorTitanSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSkinSet);
    Il2CppMethodInitialized_184346fe5 = '\x01';
  }
  UI_CharacterEditorTitanSkinsPanel__EnsureInitialized((MethodInfo *)0x0);
  if (TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewEnabled != false) {
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if ((pSVar5 == (Settings_CustomSkinSettings_o *)0x0) ||
       (pSVar6 = (pSVar5->fields).Titan,
       pSVar6 == (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)0x0)) {
label_1821e138d:
      ThrowNullReferenceException();
    }
    if (-1 < TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewSetIndex) {
      obj = (pSVar6->fields).Sets;
      if (obj == (Settings_ListSetting_T__o *)0x0) goto label_1821e138d;
      iVar3 = TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewSetIndex;
      pvVar10 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_Settings_IListSetting,(Il2CppObject *)obj);
      if (iVar3 < (int)pvVar10) {
        bVar9 = true;
        pIVar7 = (Il2CppClass *)obj->klass;
        uVar2 = (pIVar7->_2).interface_offsets_count;
        iVar4 = TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewSetIndex;
        if (uVar2 != 0) {
          pIVar8 = (pIVar7->_1).interfaceOffsets;
          uVar14 = 0;
          do {
            if (pIVar8[uVar14].interfaceType == (Il2CppClass *)TypeInfo_Settings_IListSetting) {
              pVVar11 = pIVar7->vtable + (pIVar8[uVar14].offset + 1);
              goto label_1821e1302;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar2);
        }
        pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                            ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,1);
label_1821e1302:
        pSVar12 = (Settings_TitanCustomSkinSet_o *)
                  (*pVVar11->methodPtr)((Il2CppObject *)obj,iVar4,pVVar11->method);
        if (pSVar12 != (Settings_TitanCustomSkinSet_o *)0x0) {
          bVar1 = (TypeInfo_Settings_TitanCustomSkinSet->_2).typeHierarchyDepth;
          if (((((Il2CppClass *)pSVar12->klass)->_2).typeHierarchyDepth < bVar1) ||
             ((((Il2CppClass *)pSVar12->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSet)) {
            bVar9 = false;
          }
          pSVar13 = (Settings_TitanCustomSkinSet_o *)0x0;
          if (bVar9) {
            pSVar13 = pSVar12;
          }
          return pSVar13;
        }
      }
    }
  }
  return (Settings_TitanCustomSkinSet_o *)0x0;
}


// UI.CharacterEditorTitanSkinsPanel$$Setup
// il2cpp: void UI_CharacterEditorTitanSkinsPanel__Setup (UI_CharacterEditorTitanSkinsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821e14b0

void UI_CharacterEditorTitanSkinsPanel__Setup
               (UI_CharacterEditorTitanSkinsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  int32_t defaultValue;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *__this_00;
  bool bVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_01;
  System_String_array *options;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_UI_Text_o *__this_03;
  UnityEngine_UI_LayoutElement_o *x;
  UI_CharacterEditorMenu_o *value;
  
  if (Il2CppMethodInitialized_184346fe6 == '\0') {
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
    Il2CppMethodInitialized_184346fe6 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  value = (UI_CharacterEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (value == (UI_CharacterEditorMenu_o *)0x0) {
    (__this->fields)._menu = (UI_CharacterEditorMenu_o *)0x0;
    value = (UI_CharacterEditorMenu_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    (__this->fields)._menu = value;
    bVar1 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,value);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (pSVar2 != (Settings_CustomSkinSettings_o *)0x0) {
    __this_00 = (pSVar2->fields).Titan;
    UI_CharacterEditorTitanSkinsPanel__EnsureInitialized((MethodInfo *)0x0);
    defaultValue = TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewSetIndex;
    pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
    Settings_IntSetting___ctor_1f1de00(pSVar4,defaultValue,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    (__this->fields)._setIndex = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._setIndex,pSVar4);
    bVar3 = TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewEnabled;
    pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
    Settings_BoolSetting___ctor_1f11be0(pSVar5,bVar3,(MethodInfo *)0x0);
    (__this->fields)._enabled = pSVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._enabled,pSVar5);
    pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_01,0x18,110.0,20.0,pSVar6,(MethodInfo *)0x0);
    pUVar8 = (__this->fields).SinglePanel;
    pSVar4 = (__this->fields)._setIndex;
    pSVar6 = UI_UIManager__GetLocale
                       ("SettingsPopup","Skins.Common","Set",
                        "","",(MethodInfo *)0x0);
    if (__this_00 != (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)0x0) {
      options = Settings_SetSettingsContainer_object___GetSetNames
                          ((Settings_SetSettingsContainer_T__o *)__this_00,
                           (MethodInfo_C8EC20 *)
                           MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSetNames);
      pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_CharacterEditorTitanSkinsPanel_Setup_b__21_0,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar8,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,options,"",160.0,
                 40.0,180.0,(System_Nullable_float__o)0x0,pUVar7,(System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar8 = (__this->fields).SinglePanel;
      pSVar5 = (__this->fields)._enabled;
      pSVar6 = UI_UIManager__GetLocale
                         ("SettingsPopup","Skins.Common","SkinsEnabled",
                          "","",(MethodInfo *)0x0);
      pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_CharacterEditorTitanSkinsPanel_Setup_b__21_1,(MethodInfo *)0x0);
      __this_02 = UI_ElementFactory__CreateToggleSetting
                            (pUVar8,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar6,"",
                             30.0,30.0,pUVar7,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184346fe7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&"Label");
        Il2CppMethodInitialized_184346fe7 = '\x01';
      }
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        pUVar8 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          pUVar8 = UnityEngine_Transform__Find(pUVar8,"Label",(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar3) {
            if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_1821e1a97;
            __this_03 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar8,
                                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if (bVar3) {
              if (__this_03 == (UnityEngine_UI_Text_o *)0x0) goto label_1821e1a97;
              UnityEngine_UI_Text__set_horizontalOverflow(__this_03,1,(MethodInfo *)0x0);
              UnityEngine_UI_Text__set_verticalOverflow(__this_03,1,(MethodInfo *)0x0);
            }
            x = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar8,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar3) {
              if (x == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1821e1a97;
              (*(x->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (x,220.0,(x->klass->vtable)._36_set_preferredWidth.method);
            }
          }
          return;
        }
      }
    }
  }
label_1821e1a97:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanSkinsPanel$$ExpandLabel
// il2cpp: void UI_CharacterEditorTitanSkinsPanel__ExpandLabel (UI_CharacterEditorTitanSkinsPanel_o* __this, UnityEngine_GameObject_o* setting, const MethodInfo* method);
// 0x1821e1040

void UI_CharacterEditorTitanSkinsPanel__ExpandLabel
               (UI_CharacterEditorTitanSkinsPanel_o *__this,UnityEngine_GameObject_o *setting,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_UI_LayoutElement_o *x;
  
  if (Il2CppMethodInitialized_184346fe7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    Il2CppMethodInitialized_184346fe7 = '\x01';
  }
  if (setting != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(setting,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1821e11b6;
        __this_00 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar2,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if (__this_00 == (UnityEngine_UI_Text_o *)0x0) goto label_1821e11b6;
          UnityEngine_UI_Text__set_horizontalOverflow(__this_00,1,(MethodInfo *)0x0);
          UnityEngine_UI_Text__set_verticalOverflow(__this_00,1,(MethodInfo *)0x0);
        }
        x = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar2,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if (x == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1821e11b6;
          (*(x->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (x,220.0,(x->klass->vtable)._36_set_preferredWidth.method);
        }
      }
      return;
    }
  }
label_1821e11b6:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanSkinsPanel$$OnSkinsChanged
// il2cpp: void UI_CharacterEditorTitanSkinsPanel__OnSkinsChanged (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821e13a0

void UI_CharacterEditorTitanSkinsPanel__OnSkinsChanged
               (UI_CharacterEditorTitanSkinsPanel_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  UI_CharacterEditorMenu_o *pUVar3;
  
  if (Il2CppMethodInitialized_184346fe8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorTitanSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346fe8 = '\x01';
  }
  pSVar1 = (__this->fields)._setIndex;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewSetIndex = (pSVar1->fields)._value;
    pSVar2 = (__this->fields)._enabled;
    if (pSVar2 != (Settings_BoolSetting_o *)0x0) {
      TypeInfo_UI_CharacterEditorTitanSkinsPanel->static_fields->_previewEnabled = (pSVar2->fields)._value;
      pUVar3 = (__this->fields)._menu;
      if (pUVar3 != (UI_CharacterEditorMenu_o *)0x0) {
        (*(pUVar3->klass->vtable)._9_ResetCharacter.methodPtr)
                  (pUVar3,(System_Type_o *)0x0,(pUVar3->klass->vtable)._9_ResetCharacter.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanSkinsPanel$$.ctor
// il2cpp: void UI_CharacterEditorTitanSkinsPanel___ctor (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821d6e20

void
UI_CharacterEditorTitanSkinsPanel___ctor(UI_CharacterEditorTitanSkinsPanel_o* __this, MethodInfo* method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanSkinsPanel$$<Setup>b__21_0
// il2cpp: void UI_CharacterEditorTitanSkinsPanel___Setup_b__21_0 (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821e1ab0

void
UI_CharacterEditorTitanSkinsPanel___Setup_b__21_0(UI_CharacterEditorTitanSkinsPanel_o* __this, MethodInfo* method)

{
  UI_CharacterEditorTitanSkinsPanel__OnSkinsChanged(__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanSkinsPanel$$<Setup>b__21_1
// il2cpp: void UI_CharacterEditorTitanSkinsPanel___Setup_b__21_1 (UI_CharacterEditorTitanSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821e1ab0

void UI_CharacterEditorTitanSkinsPanel___Setup_b__21_1
               (UI_CharacterEditorTitanSkinsPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanSkinsPanel__OnSkinsChanged(__this,(MethodInfo *)0x0);
  return;
}


