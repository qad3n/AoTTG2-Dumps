// Type: UI.CharacterEditorCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorCategoryPanel.cs
// --------------------------------

// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$.ctor
// il2cpp: void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18___ctor (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cca140

void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18___ctor
               (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_IDisposable_Dispose (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x5cca230

void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_IDisposable_Dispose
               (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$MoveNext
// il2cpp: bool UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__MoveNext (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x5cca240

bool UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__MoveNext
               (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,
               MethodInfo *method)

{
  byte bVar1;
  UI_CharacterEditorCategoryPanel_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  Characters_DummyHuman_o *__this_00;
  Settings_BoolSetting_o *pSVar5;
  Settings_CustomSkinSettings_o *pSVar6;
  Settings_HumanCustomSkinSettings_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  bool bVar9;
  Il2CppObject *pIVar10;
  
  if (Il2CppMethodInitialized_07547b74 == '\0') {
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
    Il2CppMethodInitialized_07547b74 = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pIVar10 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  case 1:
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    bVar9 = (__this->fields).isHuman;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(bVar9,(MethodInfo *)0x0);
    if ((pUVar2 != (UI_CharacterEditorCategoryPanel_o *)0x0) &&
       (pSVar3 = (pUVar2->fields)._category, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      bVar9 = System_String__op_Equality((pSVar3->fields)._value,"Human",(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
      }
      TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode = bVar9;
      ApplicationManagers_SceneLoader__LoadScene(4,(MethodInfo *)0x0);
      if ((__this->fields).shouldPreserveSkinPreview == false) {
        return false;
      }
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pIVar10 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar10;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 2;
      return true;
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
    pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) {
      return false;
    }
    bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_00 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar4 + 0x38));
    if (__this_00 == (Characters_DummyHuman_o *)0x0) {
      return false;
    }
    bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
    if ((__this_00->klass->_2).typeHierarchyDepth < bVar1) {
      return false;
    }
    if ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_DummyHuman) {
      return false;
    }
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar6 != (Settings_CustomSkinSettings_o *)0x0) &&
        (pSVar7 = (pSVar6->fields).Human, pSVar7 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
       (pSVar8 = (pSVar7->fields).GlobalSkinOverridesEnabled, pSVar8 != (Settings_BoolSetting_o *)0x0)) {
      (__this->fields)._originalGlobalEnabled_5__2 =
           ((Settings_TypedSetting_bool__Fields *)&pSVar8->fields)->_value;
      pSVar5 = (pSVar7->fields).SetSpecificSkinsEnabled;
      if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
        (__this->fields)._originalSetEnabled_5__3 = (pSVar5->fields)._value;
        if (Il2CppMethodInitialized_07547b84 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
          Il2CppMethodInitialized_07547b84 = '\x01';
        }
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar8,
                   TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
        if ((pSVar6 != (Settings_CustomSkinSettings_o *)0x0) &&
           (pSVar7 = (pSVar6->fields).Human, pSVar7 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
          pSVar8 = (pSVar7->fields).SetSpecificSkinsEnabled;
          if (Il2CppMethodInitialized_07547b85 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
            Il2CppMethodInitialized_07547b85 = '\x01';
          }
          if (pSVar8 != (Settings_BoolSetting_o *)0x0) {
            Settings_TypedSetting_bool___set_Value
                      ((Settings_TypedSetting_bool__o *)pSVar8,
                       TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview,
                       (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
            Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
            }
            pIVar10 = (Il2CppObject *)Utility_Util__WaitForFrames(2,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar10;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
            (__this->fields).__1__state = 3;
            return true;
          }
        }
      }
    }
    break;
  case 3:
    (__this->fields).__1__state = -1;
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar6 != (Settings_CustomSkinSettings_o *)0x0) &&
        (pSVar7 = (pSVar6->fields).Human, pSVar7 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
       (pSVar8 = (pSVar7->fields).GlobalSkinOverridesEnabled, pSVar8 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar8,(__this->fields)._originalGlobalEnabled_5__2,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar6 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar7 = (pSVar6->fields).Human, pSVar7 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar8 = (pSVar7->fields).SetSpecificSkinsEnabled, pSVar8 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar8,(__this->fields)._originalSetEnabled_5__3,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return false;
      }
    }
    break;
  default:
    return false;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x5cca6b0

Il2CppObject *
UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_IEnumerator_Reset (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x5cca6c0

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
// 0x5cca700

Il2CppObject *
UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCategoryPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorCategoryPanel__get_Title (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cc9700

System_String_o *
UI_CharacterEditorCategoryPanel__get_Title(UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547b6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Editor");
    Il2CppMethodInitialized_07547b6e = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Editor",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorCategoryPanel$$get_Width
// il2cpp: float UI_CharacterEditorCategoryPanel__get_Width (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cc9760

float UI_CharacterEditorCategoryPanel__get_Width(UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 330.0;
}


// UI.CharacterEditorCategoryPanel$$get_Height
// il2cpp: float UI_CharacterEditorCategoryPanel__get_Height (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cc9770

float UI_CharacterEditorCategoryPanel__get_Height
                (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 240.0;
}


// UI.CharacterEditorCategoryPanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorCategoryPanel__get_VerticalSpacing (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cc9780

float UI_CharacterEditorCategoryPanel__get_VerticalSpacing
                (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorCategoryPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorCategoryPanel__get_HorizontalPadding (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cc9790

int32_t UI_CharacterEditorCategoryPanel__get_HorizontalPadding
                  (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorCategoryPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorCategoryPanel__get_VerticalPadding (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cc97a0

int32_t UI_CharacterEditorCategoryPanel__get_VerticalPadding
                  (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorCategoryPanel$$Setup
// il2cpp: void UI_CharacterEditorCategoryPanel__Setup (UI_CharacterEditorCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cc97b0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc98ff: lea rdi, [r15 + 0x88]
// asm:   0x5cc9906: jmp 0x5cc991a
// asm:   0x5cc9a00: test r12, r12
// asm:   0x5cc9a03: je 0x5cc9b61

void UI_CharacterEditorCategoryPanel__Setup
               (UI_CharacterEditorCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  GameManagers_CharacterEditorGameManager_o *pGVar3;
  Settings_StringSetting_o *pSVar4;
  UnityEngine_Transform_o *parent_00;
  GameManagers_CharacterEditorGameManager_c *pGVar5;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_00;
  System_String_array *options;
  System_Func_string__string__o *__this_01;
  UnityEngine_Events_UnityAction_o *__this_02;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorCategoryPanel_Setup_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_UIManager_GetLocaleCommon);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Category");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547b6f = '\x01';
    method = extraout_RDX;
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,method);
  pGVar5 = TypeInfo_GameManagers_CharacterEditorGameManager;
  pGVar3 = (GameManagers_CharacterEditorGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_CharacterEditorGameManager_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
    if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
label_05cc9b66:
      il2cpp_codegen_raise_invalid_cast_exception(pGVar3,pGVar5);
    }
    (__this->fields)._gameManager = pGVar3;
    if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pGVar5)) goto label_05cc9b66;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager);
  pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,95.0,20.0,pSVar6,(MethodInfo *)0x0);
  options = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if (options == (System_String_array *)0x0) {
label_05cc9b61:
    ThrowNullReferenceException();
  }
  if ((int)options->max_length != 0) {
    options->m_Items[0] = "Human";
    Il2CppCodeGenWriteBarrier(options->m_Items);
    if ((options->max_length & 0xfffffffe) != 0) {
      options->m_Items[1] = "Titan";
      Il2CppCodeGenWriteBarrier(options->m_Items + 1);
      pSVar4 = (__this->fields)._category;
      if (Il2CppMethodInitialized_07547b70 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
        il2cpp_codegen_initialize_runtime_metadata(&"Human");
        il2cpp_codegen_initialize_runtime_metadata(&"Titan");
        Il2CppMethodInitialized_07547b70 = '\x01';
        uVar2 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor;
        pSVar6 = "Human";
      }
      else {
        uVar2 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor;
        pSVar6 = "Human";
      }
      "Human" = pSVar6;
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
      }
      if (pSVar4 != (Settings_StringSetting_o *)0x0) {
        if (*(char *)((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)->static_fields == '\0')
        {
          pSVar6 = "Titan";
        }
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar6,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        parent_00 = (__this->fields).SinglePanel;
        pSVar4 = (__this->fields)._category;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar6 = UI_UIManager__GetLocaleCommon("Category",(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
        System_Func_object__object____ctor
                  ((System_Func_object__object__o *)__this_01,(Il2CppObject *)0x0,
                   (intptr_t)MethodInfo_UI_UIManager_GetLocaleCommon,(MethodInfo_4F19B50 *)0x0);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (__this_02,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_CharacterEditorCategoryPanel_Setup_b__14_0,(MethodInfo *)0x0);
        UI_ElementFactory__CreateDropdownSetting
                  (parent_00,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar6,options,"",
                   160.0,40.0,300.0,(System_Nullable_float__o)0x0,__this_02,(System_Int32_array *)0x0,
                   __this_01,(MethodInfo *)0x0);
        return;
      }
      goto label_05cc9b61;
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.CharacterEditorCategoryPanel$$GetCurrentCategory
// il2cpp: System_String_o* UI_CharacterEditorCategoryPanel__GetCurrentCategory (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cc9b80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc9c0a: jmp 0x5cc9beb

System_String_o *
UI_CharacterEditorCategoryPanel__GetCurrentCategory
          (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547b70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_07547b70 = '\x01';
  }
  pSVar2 = "Human";
  if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
    cVar1 = TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode;
  }
  else {
    cVar1 = TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode;
  }
  if (cVar1 == '\0') {
    pSVar2 = "Titan";
  }
  return pSVar2;
}


// UI.CharacterEditorCategoryPanel$$OnCategoryChange
// il2cpp: void UI_CharacterEditorCategoryPanel__OnCategoryChange (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cc9c10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc9ea1: jmp 0x5cc9d27

void UI_CharacterEditorCategoryPanel__OnCategoryChange
               (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *a;
  Characters_DummyCharacter_o *pCVar3;
  Settings_HumanCustomSettings_o *pSVar4;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Characters_HumanSetup_o *__this_01;
  Characters_DummyTitan_o *__this_02;
  Settings_TitanCustomSettings_o *pSVar5;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_03;
  bool bVar6;
  bool bVar7;
  Settings_HumanCustomSet_o *customSet;
  UI_CharacterEditorSkinsPanel_StaticFields *pUVar8;
  GameManagers_CharacterEditorGameManager_o *pGVar9;
  UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this_04;
  System_String_o *b;
  char cVar10;
  
  if (Il2CppMethodInitialized_07547b71 == '\0') {
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
    Il2CppMethodInitialized_07547b71 = '\x01';
  }
  pSVar2 = (__this->fields)._category;
  if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_05cca08b;
  a = (pSVar2->fields)._value;
  if (Il2CppMethodInitialized_07547b70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_07547b70 = '\x01';
  }
  b = "Human";
  if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
    cVar10 = TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode;
  }
  else {
    cVar10 = TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode;
  }
  if (cVar10 == '\0') {
    b = "Titan";
  }
  bVar6 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
  if (!bVar6) {
    return;
  }
  if ((TypeInfo_GameManagers_CharacterEditorGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager);
    bVar6 = TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode;
  }
  else {
    bVar6 = TypeInfo_GameManagers_CharacterEditorGameManager->static_fields->HumanMode;
  }
  if (Il2CppMethodInitialized_07547b84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_07547b84 = '\x01';
  }
  pUVar8 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields;
  cVar10 = '\x01';
  if (pUVar8->_persistentGlobalSkinPreview == false) {
    if (Il2CppMethodInitialized_07547b85 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
      Il2CppMethodInitialized_07547b85 = '\x01';
      pUVar8 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields;
    }
    cVar10 = pUVar8->_persistentCustomSkinPreview;
    pGVar9 = (__this->fields)._gameManager;
    if (bVar6 != false) goto label_05cc9d94;
label_05cc9f15:
    if ((pGVar9 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
       (__this_02 = (Characters_DummyTitan_o *)(pGVar9->fields).Character,
       __this_02 != (Characters_DummyTitan_o *)0x0)) {
      bVar1 = (TypeInfo_Characters_DummyTitan->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this_02->klass->_2).typeHierarchyDepth) &&
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_DummyTitan)) {
        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
        if ((pSVar5 == (Settings_TitanCustomSettings_o *)0x0) ||
           (__this_03 = (pSVar5->fields).TitanCustomSets,
           __this_03 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) goto label_05cca08b;
        customSet = (Settings_HumanCustomSet_o *)
                    Settings_SetSettingsContainer_object___GetSelectedSet
                              ((Settings_SetSettingsContainer_T__o *)__this_03,
                               (MethodInfo_40477A0 *)
                               MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
        if (customSet != (Settings_HumanCustomSet_o *)0x0) {
          bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
          if (((customSet->klass->_2).typeHierarchyDepth < bVar1) ||
             ((customSet->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
label_05cca090:
            il2cpp_codegen_raise_invalid_cast_exception(customSet);
          }
        }
        Characters_DummyTitan__LoadSet
                  (__this_02,(Settings_TitanCustomSet_o *)customSet,true,(MethodInfo *)0x0);
      }
    }
  }
  else {
    pGVar9 = (__this->fields)._gameManager;
    if (bVar6 == false) goto label_05cc9f15;
label_05cc9d94:
    if ((pGVar9 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
       (pCVar3 = (pGVar9->fields).Character, pCVar3 != (Characters_DummyCharacter_o *)0x0)) {
      bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
         ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_DummyHuman
         )) {
        pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
        if ((pSVar4 == (Settings_HumanCustomSettings_o *)0x0) ||
           (__this_00 = (pSVar4->fields).CustomSets,
           __this_00 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) goto label_05cca08b;
        customSet = (Settings_HumanCustomSet_o *)
                    Settings_SetSettingsContainer_object___GetSelectedSet
                              ((Settings_SetSettingsContainer_T__o *)__this_00,
                               (MethodInfo_40477A0 *)
                               MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
        if (customSet != (Settings_HumanCustomSet_o *)0x0) {
          bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
          if (((customSet->klass->_2).typeHierarchyDepth < bVar1) ||
             ((customSet->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) goto label_05cca090;
        }
        __this_01 = (*(uint64_t *)((char *)pCVar3 + 0x38));
        if (__this_01 == (Characters_HumanSetup_o *)0x0) goto label_05cca08b;
        Characters_HumanSetup__Load(__this_01,customSet,(__this_01->fields).Weapon,false,(MethodInfo *)0x0);
      }
    }
  }
  pSVar2 = (__this->fields)._category;
  if (pSVar2 != (Settings_StringSetting_o *)0x0) {
    bVar7 = System_String__op_Equality((pSVar2->fields)._value,"Titan",(MethodInfo *)0x0);
    if (bVar7) {
      UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles((MethodInfo *)0x0);
    }
    pGVar9 = (__this->fields)._gameManager;
    if (Il2CppMethodInitialized_07547b72 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_UI_CharacterEditorCategoryPanel_CategoryChangeCaptureCoroutine_d__18);
      Il2CppMethodInitialized_07547b72 = '\x01';
    }
    __this_04 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_UI_CharacterEditorCategoryPanel_CategoryChangeCaptureCoroutine_d__18);
    System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
    (__this_04->fields).__1__state = 0;
    (__this_04->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_04->fields).__4__this);
    (__this_04->fields).isHuman = bVar6;
    (__this_04->fields).shouldPreserveSkinPreview = cVar10 != '\0';
    if (pGVar9 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)pGVar9,(System_Collections_IEnumerator_o *)__this_04,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_05cca08b:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCategoryPanel$$ResetHumanSkinPreviewToggles
// il2cpp: void UI_CharacterEditorCategoryPanel__ResetHumanSkinPreviewToggles (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cca120

void UI_CharacterEditorCategoryPanel__ResetHumanSkinPreviewToggles
               (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles((MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCategoryPanel$$CategoryChangeCaptureCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine (UI_CharacterEditorCategoryPanel_o* __this, bool isHuman, bool shouldPreserveSkinPreview, const MethodInfo* method);
// 0x5cca0a0

System_Collections_IEnumerator_o *
UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine
          (UI_CharacterEditorCategoryPanel_o *__this,bool isHuman,bool shouldPreserveSkinPreview,
          MethodInfo *method)

{
  UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this_00;
  
  if (Il2CppMethodInitialized_07547b72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorCategoryPanel_CategoryChangeCaptureCoroutine_d__18);
    Il2CppMethodInitialized_07547b72 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorCategoryPanel_CategoryChangeCaptureCoroutine_d__18);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).isHuman = isHuman;
  (__this_00->fields).shouldPreserveSkinPreview = shouldPreserveSkinPreview;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCategoryPanel$$.ctor
// il2cpp: void UI_CharacterEditorCategoryPanel___ctor (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cca160

void UI_CharacterEditorCategoryPanel___ctor(UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547b73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_07547b73 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._category = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._category);
  if (Il2CppMethodInitialized_07547b0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Button);
    Il2CppMethodInitialized_07547b0b = '\x01';
  }
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Button);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)method_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Button_ctor);
  (__this->fields)._topButtons = (System_Collections_Generic_Dictionary_string__Button__o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._topButtons);
  UI_BasePanel___ctor((UI_SimplePanel_o *)__this,method_00);
  return;
}


// UI.CharacterEditorCategoryPanel$$<Setup>b__14_0
// il2cpp: void UI_CharacterEditorCategoryPanel___Setup_b__14_0 (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cca220

void UI_CharacterEditorCategoryPanel___Setup_b__14_0
               (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCategoryPanel__OnCategoryChange(__this,method);
  return;
}


