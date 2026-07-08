// Type: UI.CharacterEditorCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterEditorCategoryPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorCategoryPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$.ctor
// il2cpp: void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18___ctor (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x402e230

void UI_CharacterEditorCategoryPanel_<CategoryChangeCaptureCoroutine>d__18___ctor
               (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_IDisposable_Dispose (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x402e330

void UI_CharacterEditorCategoryPanel_<CategoryChangeCaptureCoroutine>d__18__System_IDisposable_Dispose
               (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$MoveNext
// il2cpp: bool UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__MoveNext (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x402e340

/* WARNING: Type propagation algorithm not settling */

bool_conflict
UI_CharacterEditorCategoryPanel_<CategoryChangeCaptureCoroutine>d__18__MoveNext
          (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,
          MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  Characters_DummyHuman_o *__this_00;
  long lVar3;
  Settings_TypedSetting_bool__o *pSVar4;
  UI_CharacterEditorCategoryPanel_o *pUVar5;
  Settings_StringSetting_o *pSVar6;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  undefined8 unaff_RBX;
  
  if (DAT_0570435e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_DummyHuman);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Human");
    DAT_0570435e = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar8 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar8;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar8);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  case 1:
    pUVar5 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    bVar7 = (__this->fields).isHuman;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview
              ((uint)(byte)bVar7,(MethodInfo *)0x0);
    if ((pUVar5 != (UI_CharacterEditorCategoryPanel_o *)0x0) &&
       (pSVar6 = (pUVar5->fields)._category, pSVar6 != (Settings_StringSetting_o *)0x0)) {
      bVar7 = System_String__op_Equality((pSVar6->fields)._value,"Human",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      **(undefined1 **)(TypeInfo_CharacterEditorGameManager + 0xb8) = (char)bVar7;
      ApplicationManagers_SceneLoader__LoadScene(4,(MethodInfo *)0x0);
      if ((char)(__this->fields).shouldPreserveSkinPreview != '\0') {
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pIVar8 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar8;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar8);
        (__this->fields).__1__state = 2;
        return 1;
      }
      return 0;
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
    plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(TypeInfo_CharacterEditorGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorGameManager + 0x130) * 8) !=
        TypeInfo_CharacterEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    __this_00 = (Characters_DummyHuman_o *)plVar2[7];
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
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
       (pSVar4 = *(Settings_TypedSetting_bool__o **)(lVar3 + 0x60),
       pSVar4 != (Settings_TypedSetting_bool__o *)0x0)) {
      *(undefined1 *)((long)&(__this->fields).shouldPreserveSkinPreview + 1) =
           *(undefined1 *)((long)&(pSVar4->fields).DefaultValue + 1);
      if (*(long *)(lVar3 + 0x58) != 0) {
        *(undefined1 *)((long)&(__this->fields).shouldPreserveSkinPreview + 2) =
             *(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x11);
        if (DAT_05704371 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
          DAT_05704371 = '\x01';
        }
        Settings_TypedSetting<bool>__set_Value
                  (pSVar4,(uint)**(byte **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8),MethodInfo_Void_set_Value);
        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
          pSVar4 = *(Settings_TypedSetting_bool__o **)(lVar3 + 0x58);
          if (DAT_05704372 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
            DAT_05704372 = '\x01';
          }
          if ((pSVar4 != (Settings_TypedSetting_bool__o *)0x0) &&
             (Settings_TypedSetting<bool>__set_Value
                        (pSVar4,(uint)*(byte *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1),MethodInfo_Void_set_Value),
             __this_00 != (Characters_DummyHuman_o *)0x0)) {
            Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pIVar8 = (Il2CppObject *)Utility_Util__WaitForFrames(2,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar8;
            il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar8);
            (__this->fields).__1__state = 3;
            return (bool_conflict)CONCAT71((int7)((ulong)pSVar4 >> 8),1);
          }
        }
      }
    }
    break;
  case 3:
    (__this->fields).__1__state = -1;
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
       (pSVar4 = *(Settings_TypedSetting_bool__o **)(lVar3 + 0x60),
       pSVar4 != (Settings_TypedSetting_bool__o *)0x0)) {
      Settings_TypedSetting<bool>__set_Value
                (pSVar4,(uint)*(byte *)((long)&(__this->fields).shouldPreserveSkinPreview + 1),
                 MethodInfo_Void_set_Value);
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
         (pSVar4 = *(Settings_TypedSetting_bool__o **)(lVar3 + 0x58),
         pSVar4 != (Settings_TypedSetting_bool__o *)0x0)) {
        Settings_TypedSetting<bool>__set_Value
                  (pSVar4,(uint)*(byte *)((long)&(__this->fields).shouldPreserveSkinPreview + 2),
                   MethodInfo_Void_set_Value);
        return 0;
      }
    }
    break;
  default:
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x402e7d0

Il2CppObject *
UI_CharacterEditorCategoryPanel_<CategoryChangeCaptureCoroutine>d__18__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_IEnumerator_Reset (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x402e7e0

void UI_CharacterEditorCategoryPanel_<CategoryChangeCaptureCoroutine>d__18__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o* __this, const MethodInfo* method);
// 0x402e820

Il2CppObject *
UI_CharacterEditorCategoryPanel_<CategoryChangeCaptureCoroutine>d__18__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine_d__18_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCategoryPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorCategoryPanel__get_Title (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x402d7f0

System_String_o *
UI_CharacterEditorCategoryPanel__get_Title
          (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704358 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Editor");
    DAT_05704358 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Editor",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorCategoryPanel$$get_Width
// il2cpp: float UI_CharacterEditorCategoryPanel__get_Width (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x402d850

float UI_CharacterEditorCategoryPanel__get_Width
                (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 330.0;
}


// UI.CharacterEditorCategoryPanel$$get_Height
// il2cpp: float UI_CharacterEditorCategoryPanel__get_Height (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x402d860

float UI_CharacterEditorCategoryPanel__get_Height
                (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 240.0;
}


// UI.CharacterEditorCategoryPanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorCategoryPanel__get_VerticalSpacing (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x402d870

float UI_CharacterEditorCategoryPanel__get_VerticalSpacing
                (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorCategoryPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorCategoryPanel__get_HorizontalPadding (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x402d880

int32_t UI_CharacterEditorCategoryPanel__get_HorizontalPadding
                  (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorCategoryPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorCategoryPanel__get_VerticalPadding (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x402d890

int32_t UI_CharacterEditorCategoryPanel__get_VerticalPadding
                  (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorCategoryPanel$$Setup
// il2cpp: void UI_CharacterEditorCategoryPanel__Setup (UI_CharacterEditorCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x402d8a0

void UI_CharacterEditorCategoryPanel__Setup
               (UI_CharacterEditorCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_CharacterEditorGameManager_o *pGVar3;
  Settings_StringSetting_o *pSVar4;
  UnityEngine_Transform_o *parent_00;
  Il2CppClass *pIVar5;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_00;
  System_String_array *options;
  UnityEngine_Events_UnityAction_o *onDropdownOptionSelect;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704359 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"Category");
    il2cpp_init_method_metadata(&"");
    DAT_05704359 = '\x01';
    method = extraout_RDX;
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,method);
  pIVar5 = TypeInfo_CharacterEditorGameManager;
  pGVar3 = *(GameManagers_CharacterEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_CharacterEditorGameManager_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if (((pGVar3->klass->_2).naturalAligment < bVar1) ||
       ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) {
LAB_0402dc05:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pGVar3,pIVar5);
    }
    (__this->fields)._gameManager = pGVar3;
    if (((pGVar3->klass->_2).naturalAligment < bVar1) ||
       ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar5)) goto LAB_0402dc05;
  }
  il2cpp_runtime_glue(&(__this->fields)._gameManager);
  pSVar6 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,95.0,20.0,pSVar6,(MethodInfo *)0x0);
  options = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
  if (options == (System_String_array *)0x0) {
LAB_0402dc00:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)options->max_length != 0) {
    options->m_Items[0] = "Human";
    il2cpp_runtime_glue(options->m_Items);
    if (1 < (uint)options->max_length) {
      options->m_Items[1] = "Titan";
      il2cpp_runtime_glue(options->m_Items + 1);
      pSVar4 = (__this->fields)._category;
      if (DAT_0570435a == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
        il2cpp_init_method_metadata(&"Human");
        il2cpp_init_method_metadata(&"Titan");
        DAT_0570435a = '\x01';
        iVar2 = *(int *)&(TypeInfo_CharacterEditorGameManager->_2).field_0x1c;
        pSVar6 = "Human";
      }
      else {
        iVar2 = *(int *)&(TypeInfo_CharacterEditorGameManager->_2).field_0x1c;
        pSVar6 = "Human";
      }
      "Human" = pSVar6;
      if (iVar2 == 0) {
        il2cpp_init_class();
      }
      if (pSVar4 != (Settings_StringSetting_o *)0x0) {
        if (*(char *)TypeInfo_CharacterEditorGameManager->static_fields == '\0') {
          pSVar6 = "Titan";
        }
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar6,MethodInfo_Void_set_Value);
        parent_00 = (__this->fields).SinglePanel;
        pSVar4 = (__this->fields)._category;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar6 = UI_UIManager__GetLocaleCommon("Category",(MethodInfo *)0x0);
        onDropdownOptionSelect =
             (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDropdownSetting
                  (parent_00,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar6,options,"",
                   160.0,40.0,300.0,(System_Nullable_float__o)0x0,onDropdownOptionSelect,
                   (MethodInfo *)0x0);
        return;
      }
      goto LAB_0402dc00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCategoryPanel$$GetCurrentCategory
// il2cpp: System_String_o* UI_CharacterEditorCategoryPanel__GetCurrentCategory (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x402dc20

System_String_o *
UI_CharacterEditorCategoryPanel__GetCurrentCategory
          (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  System_String_o *pSVar2;
  
  if (DAT_0570435a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"Titan");
    DAT_0570435a = '\x01';
  }
  pSVar2 = "Human";
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_init_class();
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
// 0x402dcb0

void UI_CharacterEditorCategoryPanel__OnCategoryChange
               (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  byte bVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *a;
  Characters_DummyCharacter_o *pCVar4;
  long lVar5;
  Settings_SetSettingsContainer_T__o *pSVar6;
  Characters_HumanSetup_o *__this_00;
  bool_conflict bVar7;
  GameManagers_CharacterEditorGameManager_o *pGVar8;
  Settings_HumanCustomSet_o *customSet;
  Il2CppObject *__this_01;
  System_String_o *b;
  char cVar9;
  
  if (DAT_0570435b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_DummyHuman);
    il2cpp_init_method_metadata(&TypeInfo_DummyTitan);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Titan");
    DAT_0570435b = '\x01';
  }
  pSVar3 = (__this->fields)._category;
  if (pSVar3 == (Settings_StringSetting_o *)0x0) goto LAB_0402e166;
  a = (pSVar3->fields)._value;
  if (DAT_0570435a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"Titan");
    DAT_0570435a = '\x01';
  }
  b = "Human";
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_init_class();
    cVar1 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  else {
    cVar1 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  if (cVar1 == '\0') {
    b = "Titan";
  }
  bVar7 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_init_class();
    cVar1 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  else {
    cVar1 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  cVar9 = '\x01';
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar9 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
      pGVar8 = (__this->fields)._gameManager;
      goto joined_r0x0402e15b;
    }
    cVar9 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    pGVar8 = (__this->fields)._gameManager;
    if (cVar1 == '\0') goto LAB_0402dfae;
LAB_0402de33:
    if ((pGVar8 == (GameManagers_CharacterEditorGameManager_o *)0x0) ||
       (pCVar4 = (pGVar8->fields).Character, pCVar4 == (Characters_DummyCharacter_o *)0x0))
    goto LAB_0402e07e;
    bVar2 = (TypeInfo_DummyHuman->_2).naturalAligment;
    if (((pCVar4->klass->_2).naturalAligment < bVar2) ||
       ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_DummyHuman)) goto LAB_0402e07e;
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    if ((lVar5 == 0) ||
       (pSVar6 = *(Settings_SetSettingsContainer_T__o **)(lVar5 + 0x20),
       pSVar6 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_0402e166;
    customSet = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer<object>__GetSelectedSet(pSVar6,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (customSet != (Settings_HumanCustomSet_o *)0x0) {
      bVar2 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((customSet->klass->_2).naturalAligment < bVar2) ||
         ((customSet->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_HumanCustomSet)) {
LAB_0402e16b:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(customSet);
      }
    }
    __this_00 = pCVar4[1].monitor;
    if (__this_00 == (Characters_HumanSetup_o *)0x0) goto LAB_0402e166;
    Characters_HumanSetup__Load(__this_00,customSet,(__this_00->fields).Weapon,0,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._category;
  }
  else {
    pGVar8 = (__this->fields)._gameManager;
joined_r0x0402e15b:
    if (cVar1 != '\0') goto LAB_0402de33;
LAB_0402dfae:
    if ((pGVar8 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
       (pCVar4 = (pGVar8->fields).Character, pCVar4 != (Characters_DummyCharacter_o *)0x0)) {
      bVar2 = (TypeInfo_DummyTitan->_2).naturalAligment;
      if ((bVar2 <= (pCVar4->klass->_2).naturalAligment) &&
         ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_DummyTitan)) {
        lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
        if ((lVar5 == 0) ||
           (pSVar6 = *(Settings_SetSettingsContainer_T__o **)(lVar5 + 0x20),
           pSVar6 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_0402e166;
        customSet = (Settings_HumanCustomSet_o *)
                    Settings_SetSettingsContainer<object>__GetSelectedSet(pSVar6,MethodInfo_BaseSetSetting_GetSelectedSet);
        if (customSet != (Settings_HumanCustomSet_o *)0x0) {
          bVar2 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
          if (((customSet->klass->_2).naturalAligment < bVar2) ||
             ((customSet->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TitanCustomSet))
          goto LAB_0402e16b;
        }
        if (pCVar4[1].klass == (Characters_DummyCharacter_c *)0x0) goto LAB_0402e166;
        Characters_BasicTitanSetup__Load
                  ((Characters_BasicTitanSetup_o *)pCVar4[1].klass,
                   (Settings_TitanCustomSet_o *)customSet,(MethodInfo *)0x0);
      }
    }
LAB_0402e07e:
    pSVar3 = (__this->fields)._category;
  }
  if (pSVar3 != (Settings_StringSetting_o *)0x0) {
    bVar7 = System_String__op_Equality((pSVar3->fields)._value,"Titan",(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles((MethodInfo *)0x0);
    }
    pGVar8 = (__this->fields)._gameManager;
    if (DAT_0570435c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CategoryChangeCaptureCoroutine_d__18);
      DAT_0570435c = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_CategoryChangeCaptureCoroutine_d__18);
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = 0;
    if (__this_01 != (Il2CppObject *)0x0) {
      __this_01[2].monitor = __this;
      il2cpp_runtime_glue(&__this_01[2].monitor,__this);
      *(char *)&__this_01[2].klass = cVar1;
      *(bool *)&__this_01[3].klass = cVar9 != '\0';
      if (pGVar8 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)pGVar8,
                   (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0402e166:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCategoryPanel$$ResetHumanSkinPreviewToggles
// il2cpp: void UI_CharacterEditorCategoryPanel__ResetHumanSkinPreviewToggles (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x402e210

void UI_CharacterEditorCategoryPanel__ResetHumanSkinPreviewToggles
               (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles((MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCategoryPanel$$CategoryChangeCaptureCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine (UI_CharacterEditorCategoryPanel_o* __this, bool isHuman, bool shouldPreserveSkinPreview, const MethodInfo* method);
// 0x402e180

System_Collections_IEnumerator_o *
UI_CharacterEditorCategoryPanel__CategoryChangeCaptureCoroutine
          (UI_CharacterEditorCategoryPanel_o *__this,bool_conflict isHuman,
          bool_conflict shouldPreserveSkinPreview,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570435c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CategoryChangeCaptureCoroutine_d__18);
    DAT_0570435c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_CategoryChangeCaptureCoroutine_d__18);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    *(char *)&__this_00[2].klass = (char)isHuman;
    *(char *)&__this_00[3].klass = (char)shouldPreserveSkinPreview;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCategoryPanel$$.ctor
// il2cpp: void UI_CharacterEditorCategoryPanel___ctor (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x402e250

void UI_CharacterEditorCategoryPanel___ctor
               (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  
  if (DAT_0570435d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_0570435d = '\x01';
  }
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._category = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._category,__this_00);
  if (DAT_057042ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Button);
    DAT_057042ff = '\x01';
  }
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__Button);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_01,MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
  (__this->fields)._topButtons =
       (System_Collections_Generic_Dictionary_string__Button__o *)__this_01;
  il2cpp_runtime_glue(&(__this->fields)._topButtons);
  UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCategoryPanel$$<Setup>b__14_0
// il2cpp: void UI_CharacterEditorCategoryPanel___Setup_b__14_0 (UI_CharacterEditorCategoryPanel_o* __this, const MethodInfo* method);
// 0x402e320

void UI_CharacterEditorCategoryPanel__<Setup>b__14_0
               (UI_CharacterEditorCategoryPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCategoryPanel__OnCategoryChange(__this,method);
  return;
}


