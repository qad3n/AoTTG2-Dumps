// Type: UI.CharacterEditorCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorCategoryPanel.cs
// --------------------------------

// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$.ctor
// il2cpp: void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18___ctor (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4357a10

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
// 0x4357b10

void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_IDisposable_Dispose
               (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$MoveNext
// il2cpp: bool UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__MoveNext (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x4357b20

bool_conflict
UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__MoveNext
          (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_DummyHuman_o *__this_00;
  long lVar2;
  Settings_TypedSetting_bool__o *__this_01;
  UI_CharacterEditorCategoryPanel_o *pUVar3;
  Settings_StringSetting_o *pSVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  undefined8 unaff_RBX;
  UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this_02;
  UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *pUVar7;
  
  __this_02 = __this;
  if (g_data_057ae174 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    __this_02 = (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *)&"Human";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae174 = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar6 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar6);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  case 1:
    pUVar3 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    bVar1 = (byte)(__this->fields).isHuman;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *)(ulong)bVar1;
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview((uint)bVar1,(MethodInfo *)0x0);
    if ((pUVar3 != (UI_CharacterEditorCategoryPanel_o *)0x0) &&
       (pSVar4 = (pUVar3->fields)._category, pSVar4 != (Settings_StringSetting_o *)0x0)) {
      bVar5 = System_String__op_Equality((pSVar4->fields)._value,"Human",(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo_CharacterEditorGameManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      *(char *)TypeInfo_CharacterEditorGameManager->static_fields = (char)bVar5;
      ApplicationManagers_SceneLoader__LoadScene(4,(MethodInfo *)0x0);
      if ((char)(__this->fields).shouldPreserveSkinPreview != '\0') {
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar6 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar6;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar6);
        (__this->fields).__1__state = 2;
        return 1;
      }
      return 0;
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
    __this_02 = *(UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o **)
                 (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_02 == (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *)0x0) {
      return 0;
    }
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if (((((Settings_TypedSetting_bool__c *)__this_02->klass)->_2).naturalAligment < bVar1) ||
       ((((Settings_TypedSetting_bool__c *)__this_02->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        TypeInfo_CharacterEditorGameManager)) goto label_04357fa4;
    __this_00 = *(Characters_DummyHuman_o **)&(__this_02->fields)._originalSetEnabled_5__3;
    if (__this_00 == (Characters_DummyHuman_o *)0x0) {
      return 0;
    }
    bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
    if ((__this_00->klass->_2).naturalAligment < bVar1) {
      return 0;
    }
    if ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DummyHuman) {
      return 0;
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
       (pUVar7 = *(UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o **)(lVar2 + 0x60),
       pUVar7 != (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *)0x0)) {
      *(undefined1 *)((long)&(__this->fields).shouldPreserveSkinPreview + 1) =
           *(undefined1 *)((long)&(pUVar7->fields).__1__state + 1);
      if (*(long *)(lVar2 + 0x58) != 0) {
        *(undefined1 *)((long)&(__this->fields).shouldPreserveSkinPreview + 2) =
             *(undefined1 *)(*(long *)(lVar2 + 0x58) + 0x11);
        if (g_data_057ae187 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
          g_data_057ae187 = '\x01';
        }
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pUVar7,(uint)**(byte **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8),MethodInfo_Void_set_Value
                  );
        lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        __this_02 = pUVar7;
        if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
          pUVar7 = *(UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o **)(lVar2 + 0x58)
          ;
          if (g_data_057ae188 == '\0') {
            __this_02 = (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *)
                        &TypeInfo_CharacterEditorSkinsPanel;
            il2cpp_runtime_helper_023445d0();
            g_data_057ae188 = '\x01';
          }
          if ((pUVar7 != (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *)0x0) &&
             (__this_02 = pUVar7,
             Settings_TypedSetting_bool___set_Value
                       ((Settings_TypedSetting_bool__o *)pUVar7,
                        (uint)*(byte *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1),MethodInfo_Void_set_Value),
             __this_00 != (Characters_DummyHuman_o *)0x0)) {
            Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar6 = (Il2CppObject *)Utility_Util__WaitForFrames(2,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar6;
            il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar6);
            (__this->fields).__1__state = 3;
            return (bool_conflict)CONCAT71((int7)((ulong)pUVar7 >> 8),1);
          }
        }
      }
    }
    break;
  case 3:
    (__this->fields).__1__state = -1;
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
       (__this_02 = *(UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o **)
                     (lVar2 + 0x60),
       __this_02 != (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_02,
                 (uint)*(byte *)((long)&(__this->fields).shouldPreserveSkinPreview + 1),MethodInfo_Void_set_Value);
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
        __this_01 = *(Settings_TypedSetting_bool__o **)(lVar2 + 0x58);
        __this_02 = (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *)0x0;
        if (__this_01 != (Settings_TypedSetting_bool__o *)0x0) {
          Settings_TypedSetting_bool___set_Value
                    (__this_01,(uint)*(byte *)((long)&(__this->fields).shouldPreserveSkinPreview + 2),
                     MethodInfo_Void_set_Value);
          return 0;
        }
      }
    }
    break;
  default:
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
label_04357fa4:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)(__this_02->fields).__2__current;
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x4357fb0

Il2CppObject *
UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_IEnumerator_Reset (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x4357fc0

void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x4358000

Il2CppObject *
UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCategoryPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorCategoryPanel__get_Title (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x4356fd0

System_String_o *
UI_CharacterEditorCategoryPanel__get_Title(UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae16e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Editor");
    g_data_057ae16e = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Editor",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorCategoryPanel$$get_Width
// il2cpp: float UI_CharacterEditorCategoryPanel__get_Width (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x4357030

float UI_CharacterEditorCategoryPanel__get_Width(UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 330.0;
}


// UI.CharacterEditorCategoryPanel$$get_Height
// il2cpp: float UI_CharacterEditorCategoryPanel__get_Height (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x4357040

float UI_CharacterEditorCategoryPanel__get_Height
                (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 240.0;
}


// UI.CharacterEditorCategoryPanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorCategoryPanel__get_VerticalSpacing (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x4357050

float UI_CharacterEditorCategoryPanel__get_VerticalSpacing
                (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorCategoryPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorCategoryPanel__get_HorizontalPadding (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x4357060

int32_t UI_CharacterEditorCategoryPanel__get_HorizontalPadding
                  (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorCategoryPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorCategoryPanel__get_VerticalPadding (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x4357070

int32_t UI_CharacterEditorCategoryPanel__get_VerticalPadding
                  (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorCategoryPanel$$Setup
// il2cpp: void UI_CharacterEditorCategoryPanel__Setup (UI_CharacterEditorCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4357080

void UI_CharacterEditorCategoryPanel__Setup
               (UI_CharacterEditorCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_StringSetting_o *pSVar3;
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  System_String_array *options;
  UnityEngine_Events_UnityAction_o *onDropdownOptionSelect;
  Il2CppClass *pIVar5;
  MethodInfo *extraout_RDX;
  GameManagers_CharacterEditorGameManager_o *pGVar6;
  GameManagers_CharacterEditorGameManager_o *value;
  
  if (g_data_057ae16f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"Category");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae16f = '\x01';
    method = extraout_RDX;
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,method);
  pIVar5 = TypeInfo_CharacterEditorGameManager;
  pGVar6 = *(GameManagers_CharacterEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar6 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_CharacterEditorGameManager_o *)0x0;
label_043571cf:
    il2cpp_runtime_helper_022b4080(&(__this->fields)._gameManager);
    pSVar4 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x18,95.0,20.0,pSVar4,(MethodInfo *)0x0);
    pGVar6 = (GameManagers_CharacterEditorGameManager_o *)0x2;
    options = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
    if (options != (System_String_array *)0x0) {
      if ((int)options->max_length == 0) goto label_043573f0;
      options->m_Items[0] = (System_String_o *)"Human";
      il2cpp_runtime_helper_022b4080(options->m_Items);
      pGVar6 = "Titan";
      if ((uint)options->max_length < 2) goto label_043573f0;
      options->m_Items[1] = (System_String_o *)"Titan";
      il2cpp_runtime_helper_022b4080(options->m_Items + 1);
      pSVar3 = (__this->fields)._category;
      if (g_data_057ae170 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
        il2cpp_runtime_helper_023445d0(&"Human");
        il2cpp_runtime_helper_023445d0(&"Titan");
        g_data_057ae170 = '\x01';
        iVar2 = *(int *)&(TypeInfo_CharacterEditorGameManager->_2).field_0x1c;
        value = "Human";
      }
      else {
        iVar2 = *(int *)&(TypeInfo_CharacterEditorGameManager->_2).field_0x1c;
        value = "Human";
      }
      "Human" = value;
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        if (*(char *)TypeInfo_CharacterEditorGameManager->static_fields == '\0') {
          value = "Titan";
        }
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)value,MethodInfo_Void_set_Value);
        parent_00 = (__this->fields).SinglePanel;
        pSVar3 = (__this->fields)._category;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar4 = UI_UIManager__GetLocaleCommon("Category",(MethodInfo *)0x0);
        onDropdownOptionSelect = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDropdownSetting
                  (parent_00,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar4,options,"",160.0,40.0
                   ,300.0,(System_Nullable_float__o)0x0,onDropdownOptionSelect,(MethodInfo *)0x0);
        return;
      }
    }
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if ((bVar1 <= (pGVar6->klass->_2).naturalAligment) &&
       ((pGVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorGameManager)) {
      (__this->fields)._gameManager = pGVar6;
      if ((bVar1 <= (pGVar6->klass->_2).naturalAligment) &&
         ((pGVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar5)) goto label_043571cf;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pGVar6,pIVar5);
label_043573f0:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae170 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    g_data_057ae170 = '\x01';
  }
  if (*(int *)&(TypeInfo_CharacterEditorGameManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  return;
}


// UI.CharacterEditorCategoryPanel$$GetCurrentCategory
// il2cpp: System_String_o* UI_CharacterEditorCategoryPanel__GetCurrentCategory (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x4357400

System_String_o *
UI_CharacterEditorCategoryPanel__GetCurrentCategory
          (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  System_String_o *pSVar2;
  
  if (g_data_057ae170 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    g_data_057ae170 = '\x01';
  }
  pSVar2 = "Human";
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  else {
    cVar1 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  if (cVar1 == '\0') {
    pSVar2 = "Titan";
  }
  return pSVar2;
}


// UI.CharacterEditorCategoryPanel$$OnCategoryChange
// il2cpp: void UI_CharacterEditorCategoryPanel__OnCategoryChange (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x4357490

void UI_CharacterEditorCategoryPanel__OnCategoryChange
               (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  System_String_o *a;
  Characters_DummyCharacter_o *pCVar3;
  long lVar4;
  Settings_SetSettingsContainer_T__o *pSVar5;
  void *pvVar6;
  Characters_HumanSetup_o *__this_00;
  Settings_HumanCustomSet_c *pSVar7;
  bool_conflict bVar8;
  GameManagers_CharacterEditorGameManager_o *pGVar9;
  Il2CppClass *customSet;
  Settings_StringSetting_o *pSVar10;
  Il2CppObject *pIVar11;
  undefined1 extraout_DL;
  char cVar12;
  undefined1 uVar13;
  
  if (g_data_057ae171 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Titan");
    g_data_057ae171 = '\x01';
  }
  pSVar10 = (__this->fields)._category;
  if (pSVar10 == (Settings_StringSetting_o *)0x0) goto label_04357946;
  a = (pSVar10->fields)._value;
  if (g_data_057ae170 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    g_data_057ae170 = '\x01';
  }
  customSet = "Human";
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  else {
    cVar1 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  if (cVar1 == '\0') {
    customSet = "Titan";
  }
  bVar8 = System_String__op_Inequality(a,(System_String_o *)customSet,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  else {
    cVar1 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  cVar12 = '\x01';
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar12 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
      pGVar9 = (__this->fields)._gameManager;
      goto joined_r0x0435793b;
    }
    cVar12 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    pGVar9 = (__this->fields)._gameManager;
    if (cVar1 == '\0') goto label_0435778e;
label_04357613:
    if ((pGVar9 == (GameManagers_CharacterEditorGameManager_o *)0x0) ||
       (pCVar3 = (pGVar9->fields).Character, pCVar3 == (Characters_DummyCharacter_o *)0x0)) goto label_0435785e;
    bVar2 = (TypeInfo_DummyHuman->_2).naturalAligment;
    if (((pCVar3->klass->_2).naturalAligment < bVar2) ||
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_DummyHuman)) goto label_0435785e;
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    method = (MethodInfo *)customSet;
    if ((lVar4 != 0) &&
       (pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
       pSVar5 != (Settings_SetSettingsContainer_T__o *)0x0)) {
      method = (MethodInfo *)MethodInfo_BaseSetSetting_GetSelectedSet;
      customSet = (Il2CppClass *)
                  Settings_SetSettingsContainer_object___GetSelectedSet
                            (pSVar5,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
      if (customSet != (Il2CppClass *)0x0) {
        pvVar6 = (customSet->_1).image;
        bVar2 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
        method = (MethodInfo *)TypeInfo_HumanCustomSet;
        if ((*(byte *)((long)pvVar6 + 0x130) < bVar2) ||
           (*(Il2CppClass **)(*(long *)((long)pvVar6 + 200) + -8 + (ulong)bVar2 * 8) != TypeInfo_HumanCustomSet))
        goto label_0435794b;
      }
      __this_00 = pCVar3[1].monitor;
      if (__this_00 == (Characters_HumanSetup_o *)0x0) goto label_04357946;
      Characters_HumanSetup__Load
                (__this_00,(Settings_HumanCustomSet_o *)customSet,(__this_00->fields).Weapon,0,
                 (MethodInfo *)0x0);
      pSVar10 = (__this->fields)._category;
      method = (MethodInfo *)customSet;
      if (pSVar10 == (Settings_StringSetting_o *)0x0) goto label_04357946;
      goto label_0435786e;
    }
  }
  else {
    pGVar9 = (__this->fields)._gameManager;
joined_r0x0435793b:
    if (cVar1 != '\0') goto label_04357613;
label_0435778e:
    if ((pGVar9 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
       (pCVar3 = (pGVar9->fields).Character, pCVar3 != (Characters_DummyCharacter_o *)0x0)) {
      bVar2 = (TypeInfo_DummyTitan->_2).naturalAligment;
      if (((pCVar3->klass->_2).naturalAligment < bVar2) ||
         ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_DummyTitan)) goto label_0435785e;
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
      method = (MethodInfo *)customSet;
      if ((lVar4 != 0) &&
         (pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
         pSVar5 != (Settings_SetSettingsContainer_T__o *)0x0)) {
        method = (MethodInfo *)MethodInfo_BaseSetSetting_GetSelectedSet;
        customSet = (Il2CppClass *)
                    Settings_SetSettingsContainer_object___GetSelectedSet
                              (pSVar5,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
        if (customSet != (Il2CppClass *)0x0) {
          pSVar7 = (customSet->_1).image;
          bVar2 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
          method = (MethodInfo *)TypeInfo_TitanCustomSet;
          if (((pSVar7->_2).naturalAligment < bVar2) ||
             ((pSVar7->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TitanCustomSet)) goto label_0435794b;
        }
        if (pCVar3[1].klass != (Characters_DummyCharacter_c *)0x0) {
          Characters_BasicTitanSetup__Load
                    ((Characters_BasicTitanSetup_o *)pCVar3[1].klass,(Settings_TitanCustomSet_o *)customSet,
                     (MethodInfo *)0x0);
          goto label_0435785e;
        }
      }
      goto label_04357946;
    }
label_0435785e:
    pSVar10 = (__this->fields)._category;
    method = (MethodInfo *)customSet;
    if (pSVar10 != (Settings_StringSetting_o *)0x0) {
label_0435786e:
      bVar8 = System_String__op_Equality
                        ((pSVar10->fields)._value,(System_String_o *)"Titan",(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles((MethodInfo *)0x0);
      }
      pGVar9 = (__this->fields)._gameManager;
      if (g_data_057ae172 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CategoryChangeCaptureCoroutine_d__18);
        g_data_057ae172 = '\x01';
      }
      pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CategoryChangeCaptureCoroutine_d__18);
      method = (MethodInfo *)0x0;
      System_Object___ctor(pIVar11,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar11[1].klass = 0;
      if (pIVar11 != (Il2CppObject *)0x0) {
        pIVar11[2].monitor = __this;
        il2cpp_runtime_helper_022b4080(&pIVar11[2].monitor);
        *(char *)&pIVar11[2].klass = cVar1;
        *(bool *)&pIVar11[3].klass = cVar12 != '\0';
        method = (MethodInfo *)__this;
        if (pGVar9 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)pGVar9,(System_Collections_IEnumerator_o *)pIVar11,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_04357946:
  customSet = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
label_0435794b:
  uVar13 = SUB81(method,0);
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae172 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CategoryChangeCaptureCoroutine_d__18);
    g_data_057ae172 = '\x01';
  }
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CategoryChangeCaptureCoroutine_d__18);
  System_Object___ctor(pIVar11,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar11[1].klass = 0;
  if (pIVar11 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles((MethodInfo *)0x0);
    return;
  }
  pIVar11[2].monitor = customSet;
  il2cpp_runtime_helper_022b4080(&pIVar11[2].monitor,customSet);
  *(undefined1 *)&pIVar11[2].klass = uVar13;
  *(undefined1 *)&pIVar11[3].klass = extraout_DL;
  return;
}


// UI.CharacterEditorCategoryPanel$$ResetHumanSkinPreviewToggles
// il2cpp: void UI_CharacterEditorCategoryPanel__ResetHumanSkinPreviewToggles (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x43579f0

void UI_CharacterEditorCategoryPanel__ResetHumanSkinPreviewToggles
               (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles((MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCategoryPanel$$CategoryChangeCaptureCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine (UI_CharacterEditorCategoryPanel_o* __this, bool isHuman, bool shouldPreserveSkinPreview, const MethodInfo* method);
// 0x4357960

System_Collections_IEnumerator_o *
UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine
          (UI_CharacterEditorCategoryPanel_o *__this,bool_conflict isHuman,
          bool_conflict shouldPreserveSkinPreview,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  
  if (g_data_057ae172 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CategoryChangeCaptureCoroutine_d__18);
    g_data_057ae172 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CategoryChangeCaptureCoroutine_d__18);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,__this);
    *(char *)&__this_00[2].klass = (char)isHuman;
    *(char *)&__this_00[3].klass = (char)shouldPreserveSkinPreview;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles((MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.CharacterEditorCategoryPanel$$.ctor
// il2cpp: void UI_CharacterEditorCategoryPanel___ctor (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x4357a30

void UI_CharacterEditorCategoryPanel___ctor(UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  
  if (g_data_057ae173 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae173 = '\x01';
  }
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._category = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._category,pSVar1);
  if (g_data_057ae115 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Button);
    g_data_057ae115 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Button);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
  (__this->fields)._topButtons = (System_Collections_Generic_Dictionary_string__Button__o *)pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._topButtons,pSVar2);
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar1,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentCategoryPanelName = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentCategoryPanelName,pSVar1);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_System_Type);
  (__this->fields)._categoryPanelTypes = (System_Collections_Generic_Dictionary_string__Type__o *)pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCategoryPanel$$<Setup>b__14_0
// il2cpp: void UI_CharacterEditorCategoryPanel___Setup_b__14_0 (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x4357b00

void UI_CharacterEditorCategoryPanel___Setup_b__14_0
               (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  System_String_o *a;
  Characters_DummyCharacter_o *pCVar3;
  long lVar4;
  Settings_SetSettingsContainer_T__o *pSVar5;
  void *pvVar6;
  Characters_HumanSetup_o *__this_00;
  Settings_HumanCustomSet_c *pSVar7;
  bool_conflict bVar8;
  GameManagers_CharacterEditorGameManager_o *pGVar9;
  Il2CppClass *customSet;
  Settings_StringSetting_o *pSVar10;
  Il2CppObject *pIVar11;
  undefined1 extraout_DL;
  char cVar12;
  undefined1 uVar13;
  
  if (g_data_057ae171 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Titan");
    g_data_057ae171 = '\x01';
  }
  pSVar10 = (__this->fields)._category;
  if (pSVar10 == (Settings_StringSetting_o *)0x0) goto label_04357946;
  a = (pSVar10->fields)._value;
  if (g_data_057ae170 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    g_data_057ae170 = '\x01';
  }
  customSet = "Human";
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  else {
    cVar1 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  if (cVar1 == '\0') {
    customSet = "Titan";
  }
  bVar8 = System_String__op_Inequality(a,(System_String_o *)customSet,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  else {
    cVar1 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  if (g_data_057ae187 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae187 = '\x01';
  }
  cVar12 = '\x01';
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (g_data_057ae188 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
      g_data_057ae188 = '\x01';
      cVar12 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
      pGVar9 = (__this->fields)._gameManager;
      goto joined_r0x0435793b;
    }
    cVar12 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    pGVar9 = (__this->fields)._gameManager;
    if (cVar1 == '\0') goto label_0435778e;
label_04357613:
    if ((pGVar9 == (GameManagers_CharacterEditorGameManager_o *)0x0) ||
       (pCVar3 = (pGVar9->fields).Character, pCVar3 == (Characters_DummyCharacter_o *)0x0)) goto label_0435785e;
    bVar2 = (TypeInfo_DummyHuman->_2).naturalAligment;
    if (((pCVar3->klass->_2).naturalAligment < bVar2) ||
       ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_DummyHuman)) goto label_0435785e;
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    method = (MethodInfo *)customSet;
    if ((lVar4 != 0) &&
       (pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
       pSVar5 != (Settings_SetSettingsContainer_T__o *)0x0)) {
      method = (MethodInfo *)MethodInfo_BaseSetSetting_GetSelectedSet;
      customSet = (Il2CppClass *)
                  Settings_SetSettingsContainer_object___GetSelectedSet
                            (pSVar5,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
      if (customSet != (Il2CppClass *)0x0) {
        pvVar6 = (customSet->_1).image;
        bVar2 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
        method = (MethodInfo *)TypeInfo_HumanCustomSet;
        if ((*(byte *)((long)pvVar6 + 0x130) < bVar2) ||
           (*(Il2CppClass **)(*(long *)((long)pvVar6 + 200) + -8 + (ulong)bVar2 * 8) != TypeInfo_HumanCustomSet))
        goto label_0435794b;
      }
      __this_00 = pCVar3[1].monitor;
      if (__this_00 == (Characters_HumanSetup_o *)0x0) goto label_04357946;
      Characters_HumanSetup__Load
                (__this_00,(Settings_HumanCustomSet_o *)customSet,(__this_00->fields).Weapon,0,
                 (MethodInfo *)0x0);
      pSVar10 = (__this->fields)._category;
      method = (MethodInfo *)customSet;
      if (pSVar10 == (Settings_StringSetting_o *)0x0) goto label_04357946;
      goto label_0435786e;
    }
  }
  else {
    pGVar9 = (__this->fields)._gameManager;
joined_r0x0435793b:
    if (cVar1 != '\0') goto label_04357613;
label_0435778e:
    if ((pGVar9 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
       (pCVar3 = (pGVar9->fields).Character, pCVar3 != (Characters_DummyCharacter_o *)0x0)) {
      bVar2 = (TypeInfo_DummyTitan->_2).naturalAligment;
      if (((pCVar3->klass->_2).naturalAligment < bVar2) ||
         ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_DummyTitan)) goto label_0435785e;
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
      method = (MethodInfo *)customSet;
      if ((lVar4 != 0) &&
         (pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
         pSVar5 != (Settings_SetSettingsContainer_T__o *)0x0)) {
        method = (MethodInfo *)MethodInfo_BaseSetSetting_GetSelectedSet;
        customSet = (Il2CppClass *)
                    Settings_SetSettingsContainer_object___GetSelectedSet
                              (pSVar5,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
        if (customSet != (Il2CppClass *)0x0) {
          pSVar7 = (customSet->_1).image;
          bVar2 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
          method = (MethodInfo *)TypeInfo_TitanCustomSet;
          if (((pSVar7->_2).naturalAligment < bVar2) ||
             ((pSVar7->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TitanCustomSet)) goto label_0435794b;
        }
        if (pCVar3[1].klass != (Characters_DummyCharacter_c *)0x0) {
          Characters_BasicTitanSetup__Load
                    ((Characters_BasicTitanSetup_o *)pCVar3[1].klass,(Settings_TitanCustomSet_o *)customSet,
                     (MethodInfo *)0x0);
          goto label_0435785e;
        }
      }
      goto label_04357946;
    }
label_0435785e:
    pSVar10 = (__this->fields)._category;
    method = (MethodInfo *)customSet;
    if (pSVar10 != (Settings_StringSetting_o *)0x0) {
label_0435786e:
      bVar8 = System_String__op_Equality
                        ((pSVar10->fields)._value,(System_String_o *)"Titan",(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles((MethodInfo *)0x0);
      }
      pGVar9 = (__this->fields)._gameManager;
      if (g_data_057ae172 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CategoryChangeCaptureCoroutine_d__18);
        g_data_057ae172 = '\x01';
      }
      pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CategoryChangeCaptureCoroutine_d__18);
      method = (MethodInfo *)0x0;
      System_Object___ctor(pIVar11,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar11[1].klass = 0;
      if (pIVar11 != (Il2CppObject *)0x0) {
        pIVar11[2].monitor = __this;
        il2cpp_runtime_helper_022b4080(&pIVar11[2].monitor);
        *(char *)&pIVar11[2].klass = cVar1;
        *(bool *)&pIVar11[3].klass = cVar12 != '\0';
        method = (MethodInfo *)__this;
        if (pGVar9 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)pGVar9,(System_Collections_IEnumerator_o *)pIVar11,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_04357946:
  customSet = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
label_0435794b:
  uVar13 = SUB81(method,0);
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae172 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CategoryChangeCaptureCoroutine_d__18);
    g_data_057ae172 = '\x01';
  }
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_CategoryChangeCaptureCoroutine_d__18);
  System_Object___ctor(pIVar11,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar11[1].klass = 0;
  if (pIVar11 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles((MethodInfo *)0x0);
    return;
  }
  pIVar11[2].monitor = customSet;
  il2cpp_runtime_helper_022b4080(&pIVar11[2].monitor,customSet);
  *(undefined1 *)&pIVar11[2].klass = uVar13;
  *(undefined1 *)&pIVar11[3].klass = extraout_DL;
  return;
}


