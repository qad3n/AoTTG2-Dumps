// Type: UI.CharacterEditorCategoryPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorCategoryPanel.cs
// --------------------------------

// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$.ctor
// il2cpp: void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18___ctor (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18___ctor(UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_IDisposable_Dispose (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_IDisposable_Dispose(UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, MethodInfo* method)

{
  return;
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$MoveNext
// il2cpp: bool UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__MoveNext (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x1821e7250

bool UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__MoveNext
               (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_CustomSkinSettings_o *pSVar3;
  Settings_HumanCustomSkinSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  GameManagers_BaseGameManager_o *pGVar6;
  Characters_DummyHuman_o *__this_00;
  UI_CharacterEditorCategoryPanel_o *pUVar7;
  Settings_StringSetting_o *pSVar8;
  bool bVar9;
  Il2CppObject *pIVar10;
  
  if (Il2CppMethodInitialized_184346f78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    Il2CppMethodInitialized_184346f78 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pIVar10 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar10);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar2 == 1) {
    pUVar7 = (__this->fields).__4__this;
    bVar9 = (__this->fields).isHuman;
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(bVar9,(MethodInfo *)0x0);
    if ((pUVar7 == (UI_CharacterEditorCategoryPanel_o *)0x0) ||
       (pSVar8 = (pUVar7->fields)._category, pSVar8 == (Settings_StringSetting_o *)0x0)) {
label_1821e7762:
      ThrowNullReferenceException();
    }
    bVar9 = System_String__op_Equality((pSVar8->fields)._value,"Human",(MethodInfo *)0x0);
    if (bVar9) {
      if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
      }
      TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode = true;
    }
    else {
      if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
      }
      TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode = false;
    }
    ApplicationManagers_SceneLoader__LoadScene(4,(MethodInfo *)0x0);
    if ((__this->fields).shouldPreserveSkinPreview != false) {
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pIVar10 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar10;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar10);
      (__this->fields).__1__state = 2;
      return true;
    }
  }
  else if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    pGVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar6 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((pGVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar6);
      }
      __this_00 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar6 + 0x38));
      if (__this_00 != (Characters_DummyHuman_o *)0x0) {
        bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
           ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
          if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
             ((pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0 &&
              (pSVar5 = (pSVar4->fields).GlobalSkinOverridesEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0))
             )) {
            (__this->fields)._originalGlobalEnabled_5__2 = (pSVar5->fields)._value;
            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
            if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
               ((pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0 &&
                (pSVar5 = (pSVar4->fields).SetSpecificSkinsEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)))
               ) {
              (__this->fields)._originalSetEnabled_5__3 = (pSVar5->fields)._value;
              pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
              if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
                 (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
                pSVar5 = (pSVar4->fields).GlobalSkinOverridesEnabled;
                if (Il2CppMethodInitialized_184346ff7 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
                  Il2CppMethodInitialized_184346ff7 = '\x01';
                }
                if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)pSVar5,
                             TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->
                             _persistentGlobalSkinPreview,
                             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
                  if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
                     (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
                    pSVar5 = (pSVar4->fields).SetSpecificSkinsEnabled;
                    if (Il2CppMethodInitialized_184346ff8 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
                      Il2CppMethodInitialized_184346ff8 = '\x01';
                    }
                    if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
                      Settings_TypedSetting_bool___set_Value
                                ((Settings_TypedSetting_bool__o *)pSVar5,
                                 TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->
                                 _persistentCustomSkinPreview,
                                 (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                      Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
                      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                      }
                      pIVar10 = (Il2CppObject *)Utility_Util__WaitForFrames(2,(MethodInfo *)0x0);
                      (__this->fields).__2__current = pIVar10;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar10);
                      (__this->fields).__1__state = 3;
                      return true;
                    }
                  }
                }
              }
            }
          }
          goto label_1821e7762;
        }
      }
    }
  }
  else if (iVar2 == 3) {
    (__this->fields).__1__state = -1;
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
       (pSVar5 = (pSVar4->fields).GlobalSkinOverridesEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar5,(__this->fields)._originalGlobalEnabled_5__2,
                 (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar5 = (pSVar4->fields).SetSpecificSkinsEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar5,(__this->fields)._originalSetEnabled_5__3,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return false;
      }
    }
    goto label_1821e7762;
  }
  return false;
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_IEnumerator_Reset (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x1821e7770

void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_UI_CharacterEditorCategoryPanel_CategoryChangeCaptureCoroutine_d__18_System_Collections_IEnumera
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_IEnumerator_get_Current(UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCategoryPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorCategoryPanel__get_Title (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d1fb0

System_String_o *
UI_CharacterEditorCategoryPanel__get_Title(UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346f72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Editor");
    Il2CppMethodInitialized_184346f72 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Editor",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorCategoryPanel$$get_Width
// il2cpp: float UI_CharacterEditorCategoryPanel__get_Width (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d2010

float
UI_CharacterEditorCategoryPanel__get_Width(UI_CharacterEditorCategoryPanel_o* __this, MethodInfo* method)

{
  return 330.0;
}


// UI.CharacterEditorCategoryPanel$$get_Height
// il2cpp: float UI_CharacterEditorCategoryPanel__get_Height (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821c11b0

float UI_CharacterEditorCategoryPanel__get_Height
                (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 240.0;
}


// UI.CharacterEditorCategoryPanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorCategoryPanel__get_VerticalSpacing (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_CharacterEditorCategoryPanel__get_VerticalSpacing(UI_CharacterEditorCategoryPanel_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.CharacterEditorCategoryPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorCategoryPanel__get_HorizontalPadding (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d1fa0

int32_t
UI_CharacterEditorCategoryPanel__get_HorizontalPadding(UI_CharacterEditorCategoryPanel_o* __this, MethodInfo* method)

{
  return 0x19;
}


// UI.CharacterEditorCategoryPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorCategoryPanel__get_VerticalPadding (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d1fa0

int32_t
UI_CharacterEditorCategoryPanel__get_VerticalPadding(UI_CharacterEditorCategoryPanel_o* __this, MethodInfo* method)

{
  return 0x19;
}


// UI.CharacterEditorCategoryPanel$$Setup
// il2cpp: void UI_CharacterEditorCategoryPanel__Setup (UI_CharacterEditorCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821d1bc0

void UI_CharacterEditorCategoryPanel__Setup
               (UI_CharacterEditorCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Settings_StringSetting_o *pSVar2;
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  System_String_array *options;
  UnityEngine_Events_UnityAction_o *__this_01;
  GameManagers_CharacterEditorGameManager_o *value;
  
  if (Il2CppMethodInitialized_184346f73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorCategoryPanel_Setup_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Category");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346f73 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  value = (GameManagers_CharacterEditorGameManager_o *)
          TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (value == (GameManagers_CharacterEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_CharacterEditorGameManager_o *)0x0;
    value = (GameManagers_CharacterEditorGameManager_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    (__this->fields)._gameManager = value;
    bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager,value);
  pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,95.0,20.0,pSVar3,(MethodInfo *)0x0);
  options = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  pSVar3 = "Human";
  if (options != (System_String_array *)0x0) {
    if ((int)options->max_length != 0) {
      options->m_Items[0] = "Human";
      Il2CppCodeGenWriteBarrier(options->m_Items,pSVar3);
      pSVar3 = "Titan";
      if (1 < (uint)options->max_length) {
        options->m_Items[1] = "Titan";
        Il2CppCodeGenWriteBarrier(options->m_Items + 1,pSVar3);
        pSVar2 = (__this->fields)._category;
        pSVar3 = UI_CharacterEditorCategoryPanel__GetCurrentCategory(__this,(MethodInfo *)0x0);
        if (pSVar2 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar3,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          parent_00 = (__this->fields).SinglePanel;
          pSVar2 = (__this->fields)._category;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar3 = UI_UIManager__GetLocaleCommon("Category",(MethodInfo *)0x0);
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_CharacterEditorCategoryPanel_Setup_b__14_0,(MethodInfo *)0x0);
          UI_ElementFactory__CreateDropdownSetting
                    (parent_00,__this_00,(Settings_BaseSetting_o *)pSVar2,pSVar3,options,""
                     ,160.0,40.0,300.0,(System_Nullable_float__o)0x0,__this_01,(System_Int32_array *)0x0,
                     (MethodInfo *)0x0);
          return;
        }
        goto label_1821d1f0d;
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1821d1f0d:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCategoryPanel$$GetCurrentCategory
// il2cpp: System_String_o* UI_CharacterEditorCategoryPanel__GetCurrentCategory (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d16c0

System_String_o *
UI_CharacterEditorCategoryPanel__GetCurrentCategory
          (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346f74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_184346f74 = '\x01';
  }
  pSVar1 = "Human";
  if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
  }
  if (TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode == false) {
    pSVar1 = "Titan";
  }
  return pSVar1;
}


// UI.CharacterEditorCategoryPanel$$OnCategoryChange
// il2cpp: void UI_CharacterEditorCategoryPanel__OnCategoryChange (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d1740

void UI_CharacterEditorCategoryPanel__OnCategoryChange
               (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *a;
  GameManagers_CharacterEditorGameManager_o *pGVar3;
  Characters_DummyCharacter_o *pCVar4;
  Settings_HumanCustomSettings_o *pSVar5;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Characters_DummyTitan_o *__this_01;
  Settings_TitanCustomSettings_o *pSVar6;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_02;
  bool bVar7;
  char cVar8;
  bool bVar9;
  System_String_o *b;
  Settings_HumanCustomSet_o *customSet;
  UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *routine;
  Settings_TitanCustomSet_o *set;
  
  if (Il2CppMethodInitialized_184346f75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_184346f75 = '\x01';
  }
  pSVar2 = (__this->fields)._category;
  if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_1821d1b50;
  a = (pSVar2->fields)._value;
  b = UI_CharacterEditorCategoryPanel__GetCurrentCategory(__this,(MethodInfo *)0x0);
  bVar7 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
  if (!bVar7) {
    return;
  }
  if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
  }
  bVar7 = TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode;
  if (Il2CppMethodInitialized_184346ff7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_184346ff7 = '\x01';
  }
  if (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview == false) {
    if (Il2CppMethodInitialized_184346ff8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
      Il2CppMethodInitialized_184346ff8 = '\x01';
    }
    cVar8 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview;
  }
  else {
    cVar8 = '\x01';
  }
  pGVar3 = (__this->fields)._gameManager;
  if (bVar7 == false) {
    if ((pGVar3 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
       (__this_01 = (Characters_DummyTitan_o *)(pGVar3->fields).Character,
       __this_01 != (Characters_DummyTitan_o *)0x0)) {
      bVar1 = (TypeInfo_Characters_DummyTitan->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this_01->klass->_2).typeHierarchyDepth) &&
         ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_DummyTitan)) {
        pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
        if ((pSVar6 == (Settings_TitanCustomSettings_o *)0x0) ||
           (__this_02 = (pSVar6->fields).TitanCustomSets,
           __this_02 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) goto label_1821d1b50;
        set = (Settings_TitanCustomSet_o *)
              Settings_SetSettingsContainer_object___GetSelectedSet
                        ((Settings_SetSettingsContainer_T__o *)__this_02,
                         (MethodInfo_C8EAF0 *)
                         MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
        if (set != (Settings_TitanCustomSet_o *)0x0) {
          bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
          if (((set->klass->_2).typeHierarchyDepth < bVar1) ||
             ((set->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
        }
        Characters_DummyTitan__LoadSet(__this_01,set,true,(MethodInfo *)0x0);
      }
    }
  }
  else if ((pGVar3 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
          (pCVar4 = (pGVar3->fields).Character, pCVar4 != (Characters_DummyCharacter_o *)0x0)) {
    bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar4->klass->_2).typeHierarchyDepth) &&
       ((pCVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
      if ((pSVar5 == (Settings_HumanCustomSettings_o *)0x0) ||
         (__this_00 = (pSVar5->fields).CustomSets,
         __this_00 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) goto label_1821d1b50;
      customSet = (Settings_HumanCustomSet_o *)
                  Settings_SetSettingsContainer_object___GetSelectedSet
                            ((Settings_SetSettingsContainer_T__o *)__this_00,
                             (MethodInfo_C8EAF0 *)
                             MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
      if (customSet != (Settings_HumanCustomSet_o *)0x0) {
        bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
        if (((customSet->klass->_2).typeHierarchyDepth < bVar1) ||
           ((customSet->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
          il2cpp_codegen_raise_invalid_cast_exception(customSet);
        }
      }
      if ((*(uint64_t *)((char *)pCVar4 + 0x38)) == (void *)0x0) goto label_1821d1b50;
      Characters_HumanSetup__Load
                ((*(uint64_t *)((char *)pCVar4 + 0x38)),customSet,*(int32_t *)((longlong)(*(uint64_t *)((char *)pCVar4 + 0x38)) + 0x1d0),false,
                 (MethodInfo *)0x0);
    }
  }
  pSVar2 = (__this->fields)._category;
  if (pSVar2 != (Settings_StringSetting_o *)0x0) {
    bVar9 = System_String__op_Equality((pSVar2->fields)._value,"Titan",(MethodInfo *)0x0);
    if (bVar9) {
      if (Il2CppMethodInitialized_184346fb1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
        Il2CppMethodInitialized_184346fb1 = '\x01';
      }
      TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview = false;
      TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview = false;
    }
    pGVar3 = (__this->fields)._gameManager;
    if (Il2CppMethodInitialized_184346f76 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_UI_CharacterEditorCategoryPanel_CategoryChangeCaptureCoroutine_d__18);
      Il2CppMethodInitialized_184346f76 = '\x01';
    }
    routine = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorCategoryPanel_CategoryChangeCaptureCoroutine_d__18);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    (routine->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
    (routine->fields).isHuman = bVar7;
    (routine->fields).shouldPreserveSkinPreview = cVar8 != '\0';
    if (pGVar3 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)pGVar3,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_1821d1b50:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCategoryPanel$$ResetHumanSkinPreviewToggles
// il2cpp: void UI_CharacterEditorCategoryPanel__ResetHumanSkinPreviewToggles (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d1b70

void
UI_CharacterEditorCategoryPanel__ResetHumanSkinPreviewToggles(UI_CharacterEditorCategoryPanel_o* __this, MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346fb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_184346fb1 = '\x01';
  }
  TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview = false;
  TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview = false;
  return;
}


// UI.CharacterEditorCategoryPanel$$CategoryChangeCaptureCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine (UI_CharacterEditorCategoryPanel_o* __this, bool isHuman, bool shouldPreserveSkinPreview, const MethodInfo* method);
// 0x1821d1640

System_Collections_IEnumerator_o *
UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine
          (UI_CharacterEditorCategoryPanel_o *__this,bool isHuman,bool shouldPreserveSkinPreview,
          MethodInfo *method)

{
  UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this_00;
  
  if (Il2CppMethodInitialized_184346f76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorCategoryPanel_CategoryChangeCaptureCoroutine_d__18);
    Il2CppMethodInitialized_184346f76 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorCategoryPanel_CategoryChangeCaptureCoroutine_d__18);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).isHuman = isHuman;
  (__this_00->fields).shouldPreserveSkinPreview = shouldPreserveSkinPreview;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCategoryPanel$$.ctor
// il2cpp: void UI_CharacterEditorCategoryPanel___ctor (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d1f30

void UI_CharacterEditorCategoryPanel___ctor(UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_184346f77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184346f77 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._category = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._category,__this_00);
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCategoryPanel$$<Setup>b__14_0
// il2cpp: void UI_CharacterEditorCategoryPanel___Setup_b__14_0 (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x1821d1f20

void UI_CharacterEditorCategoryPanel___Setup_b__14_0
               (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCategoryPanel__OnCategoryChange(__this,(MethodInfo *)0x0);
  return;
}


