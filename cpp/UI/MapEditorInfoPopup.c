// Type: UI.MapEditorInfoPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorInfoPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorInfoPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorInfoPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorInfoPopup__get_Title (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x4114860

System_String_o *
UI_MapEditorInfoPopup__get_Title(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  if (DAT_057048d3 == '\0') {
    il2cpp_init_method_metadata(&"Map Info");
    DAT_057048d3 = '\x01';
  }
  return "Map Info";
}


// UI.MapEditorInfoPopup$$get_Width
// il2cpp: float UI_MapEditorInfoPopup__get_Width (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x4114890

float UI_MapEditorInfoPopup__get_Width(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.MapEditorInfoPopup$$get_Height
// il2cpp: float UI_MapEditorInfoPopup__get_Height (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x41148a0

float UI_MapEditorInfoPopup__get_Height(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  return 400.0;
}


// UI.MapEditorInfoPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorInfoPopup__get_VerticalPadding (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x41148b0

int32_t UI_MapEditorInfoPopup__get_VerticalPadding
                  (UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorInfoPopup$$Setup
// il2cpp: void UI_MapEditorInfoPopup__Setup (UI_MapEditorInfoPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x41148c0

void UI_MapEditorInfoPopup__Setup
               (UI_MapEditorInfoPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Collections_Generic_List_BaseSettingElement__o *__this_00;
  UI_BaseSettingElement_array *pUVar4;
  long lVar5;
  int32_t fontSize;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UnityEngine_GameObject_o *__this_02;
  UI_BaseSettingElement_o *item;
  
  if (DAT_057048d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__11_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__11_1);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Description");
    DAT_057048d4 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar6 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,130.0,20.0,pSVar6,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar3,__this_01,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BottomBar;
  pSVar6 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar3,__this_01,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._inputs;
  __this_02 = UI_ElementFactory__CreateInputSetting
                        ((__this->fields).SinglePanel,__this_01,
                         (Settings_BaseSetting_o *)(__this->fields)._description,"Description",
                         "",300.0,250.0,1,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    item = (UI_BaseSettingElement_o *)
           UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    lVar5 = MethodInfo_Void_Add;
    if (__this_00 != (System_Collections_Generic_List_BaseSettingElement__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (__this_00->fields)._items;
      if (pUVar4 != (UI_BaseSettingElement_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pUVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pUVar4->m_Items[(int)uVar2] = item;
          il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2,item);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInfoPopup$$Show
// il2cpp: void UI_MapEditorInfoPopup__Show (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x4114b90

void UI_MapEditorInfoPopup__Show(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  Map_MapScript_o *pMVar3;
  Map_MapScriptOptions_o *pMVar4;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_BaseSettingElement__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  Il2CppClass *pIVar5;
  bool_conflict bVar6;
  GameManagers_MapEditorGameManager_o **ppGVar7;
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppObject *pIVar10;
  
  if (DAT_057048d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseSettingElement_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_BaseSettingElement__GetE);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057048d5 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pIVar5 = TypeInfo_MapEditorGameManager;
  pGVar2 = *(GameManagers_MapEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
LAB_04114ca7:
    ppGVar7 = &(__this->fields)._gameManager;
    il2cpp_runtime_glue(ppGVar7);
    pGVar2 = *ppGVar7;
    if ((((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
         (pMVar3 = (pGVar2->fields).MapScript, pMVar3 != (Map_MapScript_o *)0x0)) &&
        (pMVar4 = (pMVar3->fields).Options, pMVar4 != (Map_MapScriptOptions_o *)0x0)) &&
       (__this_00 = (__this->fields)._description, __this_00 != (Settings_StringSetting_o *)0x0)) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this_00,
                 (Il2CppObject *)(pMVar4->fields).Description,MethodInfo_Void_set_Value);
      __this_01 = (__this->fields)._inputs;
      if (__this_01 != (System_Collections_Generic_List_BaseSettingElement__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
                   (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T__Enumerator_UI_BaseSettingElement__GetE);
        while( true ) {
          __this_02.fields._8_8_ = pIVar9;
          __this_02.fields._list = pSVar8;
          __this_02.fields._current = pIVar10;
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffd8);
          if ((char)bVar6 == '\0') {
            __this_03.fields._8_8_ = pIVar9;
            __this_03.fields._list = pSVar8;
            __this_03.fields._current = pIVar10;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffd8);
            return;
          }
          if (pIVar10 == (Il2CppObject *)0x0) break;
          (*pIVar10->klass->vtable[6].methodPtr)(pIVar10,pIVar10->klass->vtable[6].method);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
  if ((bVar1 <= (pGVar2->klass->_2).naturalAligment) &&
     ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MapEditorGameManager)) {
    (__this->fields)._gameManager = pGVar2;
    if ((bVar1 <= (pGVar2->klass->_2).naturalAligment) &&
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar5)) goto LAB_04114ca7;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pGVar2,pIVar5);
}


// UI.MapEditorInfoPopup$$OnButtonClick
// il2cpp: void UI_MapEditorInfoPopup__OnButtonClick (UI_MapEditorInfoPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4114e00

void UI_MapEditorInfoPopup__OnButtonClick
               (UI_MapEditorInfoPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Map_MapScript_o *pMVar2;
  Settings_StringSetting_o *pSVar3;
  Map_MapScriptOptions_o *pMVar4;
  long *plVar5;
  bool_conflict bVar6;
  
  if (DAT_057048d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapEditorMenu);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    DAT_057048d6 = '\x01';
  }
  bVar6 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
LAB_04114f3f:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar6 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar2 = (pGVar1->fields).MapScript, pMVar2 != (Map_MapScript_o *)0x0)) &&
      (pSVar3 = (__this->fields)._description, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pMVar4 = (pMVar2->fields).Options, pMVar4 != (Map_MapScriptOptions_o *)0x0)) {
    (pMVar4->fields).Description = (pSVar3->fields)._value;
    il2cpp_runtime_glue(&(pMVar4->fields).Description);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)&TypeInfo_MapEditorMenu[3].return_type) ||
         (*(MethodInfo **)
           (*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)&TypeInfo_MapEditorMenu[3].return_type * 8) !=
          TypeInfo_MapEditorMenu)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      if ((UI_MapEditorTopPanel_o *)plVar5[0x16] != (UI_MapEditorTopPanel_o *)0x0) {
        UI_MapEditorTopPanel__Save((UI_MapEditorTopPanel_o *)plVar5[0x16],TypeInfo_MapEditorMenu);
        goto LAB_04114f3f;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorInfoPopup$$.ctor
// il2cpp: void UI_MapEditorInfoPopup___ctor (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x4114f70

void UI_MapEditorInfoPopup___ctor(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_BaseSettingElement__o *__this_01;
  
  if (DAT_057048d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UI_BaseSettingElement);
    il2cpp_init_method_metadata(&TypeInfo_List_BaseSettingElement);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_057048d7 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._description = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._description,__this_00);
  __this_01 = (System_Collections_Generic_List_BaseSettingElement__o *)
              il2cpp_runtime_glue(TypeInfo_List_BaseSettingElement);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UI_BaseSettingElement);
  (__this->fields)._inputs = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._inputs);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInfoPopup$$<Setup>b__11_0
// il2cpp: void UI_MapEditorInfoPopup___Setup_b__11_0 (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x4115050

void UI_MapEditorInfoPopup__<Setup>b__11_0(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057048d8 == '\0') {
    il2cpp_init_method_metadata(&"Save");
    DAT_057048d8 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorInfoPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.MapEditorInfoPopup$$<Setup>b__11_1
// il2cpp: void UI_MapEditorInfoPopup___Setup_b__11_1 (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x4115090

void UI_MapEditorInfoPopup__<Setup>b__11_1(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057048d9 == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_057048d9 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorInfoPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


