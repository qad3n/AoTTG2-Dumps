// Type: UI.MapEditorInfoPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorInfoPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorInfoPopup.cs
// --------------------------------

// UI.MapEditorInfoPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorInfoPopup__get_Title (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x4428d30

System_String_o * UI_MapEditorInfoPopup__get_Title(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae66f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Map Info");
    g_data_057ae66f = '\x01';
  }
  return "Map Info";
}


// UI.MapEditorInfoPopup$$get_Width
// il2cpp: float UI_MapEditorInfoPopup__get_Width (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x4428d60

float UI_MapEditorInfoPopup__get_Width(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.MapEditorInfoPopup$$get_Height
// il2cpp: float UI_MapEditorInfoPopup__get_Height (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x4428d70

float UI_MapEditorInfoPopup__get_Height(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  return 400.0;
}


// UI.MapEditorInfoPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorInfoPopup__get_VerticalPadding (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x4428d80

int32_t UI_MapEditorInfoPopup__get_VerticalPadding(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorInfoPopup$$Setup
// il2cpp: void UI_MapEditorInfoPopup__Setup (UI_MapEditorInfoPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4428d90

void UI_MapEditorInfoPopup__Setup(UI_MapEditorInfoPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  UnityEngine_Transform_o *pUVar4;
  System_Collections_Generic_List_BaseSettingElement__o *__this_00;
  UI_BaseSettingElement_array *pUVar5;
  void *pvVar6;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  int32_t fontSize;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  UI_ElementStyle_o *__this_06;
  UnityEngine_Events_UnityAction_o *pUVar9;
  UI_BasePopup_o *__this_07;
  UI_BaseSettingElement_o *item;
  long lVar10;
  long *plVar11;
  UI_BasePopup_o *__this_08;
  undefined1 auVar12 [12];
  System_Collections_Generic_List_T__o *pSVar13;
  Il2CppMethodPointer pIVar14;
  Il2CppObject *pIVar15;
  
  if (g_data_057ae670 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Description");
    g_data_057ae670 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar8 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_06 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_06,fontSize,130.0,20.0,pSVar8,(MethodInfo *)0x0);
  pUVar4 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar4,__this_06,pSVar8,0.0,pUVar9,(MethodInfo *)0x0);
  pUVar4 = (__this->fields).BottomBar;
  pSVar8 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar4,__this_06,pSVar8,0.0,pUVar9,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._inputs;
  __this_08 = (UI_BasePopup_o *)(__this->fields).SinglePanel;
  __this_07 = (UI_BasePopup_o *)
              UI_ElementFactory__CreateInputSetting
                        ((UnityEngine_Transform_o *)__this_08,__this_06,
                         (Settings_BaseSetting_o *)(__this->fields)._description,"Description","",
                         300.0,250.0,1,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if ((__this_07 != (UI_BasePopup_o *)0x0) &&
     (item = (UI_BaseSettingElement_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_07,MethodInfo_InputSettingElement_GetComponent_InputSettingElement),
     lVar10 = MethodInfo_Void_Add, __this_08 = __this_07,
     __this_00 != (System_Collections_Generic_List_BaseSettingElement__o *)0x0)) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (__this_00->fields)._items;
    if (pUVar5 != (UI_BaseSettingElement_array *)0x0) {
      uVar3 = (__this_00->fields)._size;
      if ((uint)pUVar5->max_length <= uVar3) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        return;
      }
      (__this_00->fields)._size = uVar3 + 1;
      pUVar5->m_Items[(int)uVar3] = item;
      il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar3,item);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae671 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSettingElement_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BaseSettingElement_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae671 = '\x01';
  }
  pSVar13 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar14 = (Il2CppMethodPointer)0x0;
  pIVar15 = (Il2CppObject *)0x0;
  UI_BasePopup__Show(__this_08,(MethodInfo *)0x0);
  lVar10 = TypeInfo_MapEditorGameManager;
  plVar11 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar11 == (long *)0x0) {
    __this_08[1].monitor = (void *)0x0;
  }
  else {
    bVar2 = *(byte *)(TypeInfo_MapEditorGameManager + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar11 + 200) + -8 + (ulong)bVar2 * 8) != TypeInfo_MapEditorGameManager)) goto label_0442923f;
    __this_08[1].monitor = plVar11;
    if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar11 + 200) + -8 + (ulong)bVar2 * 8) != lVar10)) goto label_0442923f;
  }
  il2cpp_runtime_helper_022b4080(&__this_08[1].monitor);
  pvVar6 = __this_08[1].monitor;
  if ((((pvVar6 != (void *)0x0) && (lVar10 = *(long *)((long)pvVar6 + 0x28), lVar10 != 0)) &&
      (lVar10 = *(long *)(lVar10 + 0x20), lVar10 != 0)) && (__this_08[1].klass != (UI_BasePopup_c *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_08[1].klass,*(Il2CppObject **)(lVar10 + 0x18),MethodInfo_Void_set_Value
              );
    __this_01 = (System_Collections_Generic_List_object__o *)__this_08[1].fields.m_CachedPtr;
    plVar11 = (long *)0x0;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff80,__this_01,
                 MethodInfo_List_1_T_Enumerator_UI_BaseSettingElement_GetEnumerator);
      while( true ) {
        __this_02.fields._8_8_ = pIVar14;
        __this_02.fields._list = pSVar13;
        __this_02.fields._current = pIVar15;
        plVar11 = MethodInfo_Boolean_MoveNext;
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
        if ((char)bVar7 == '\0') {
          __this_03.fields._8_8_ = pIVar14;
          __this_03.fields._list = pSVar13;
          __this_03.fields._current = pIVar15;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
          return;
        }
        if (pIVar15 == (Il2CppObject *)0x0) break;
        (*pIVar15->klass->vtable[6].methodPtr)(pIVar15,pIVar15->klass->vtable[6].method);
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  lVar10 = il2cpp_runtime_helper_022b2c90();
label_0442923f:
  auVar12 = il2cpp_runtime_helper_022b2fd0(plVar11,lVar10);
  if (auVar12._8_4_ == 1) {
    plVar11 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar10 = *plVar11;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar14;
    __this_04.fields._list = pSVar13;
    __this_04.fields._current = pIVar15;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    if (lVar10 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar10);
  }
  __this_05.fields._8_8_ = pIVar14;
  __this_05.fields._list = pSVar13;
  __this_05.fields._current = pIVar15;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  _Unwind_Resume(auVar12._0_8_);
}


// UI.MapEditorInfoPopup$$Show
// il2cpp: void UI_MapEditorInfoPopup__Show (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x4429060

void UI_MapEditorInfoPopup__Show(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  Map_MapScript_o *pMVar3;
  Map_MapScriptOptions_o *pMVar4;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_BaseSettingElement__o *__this_01;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar6;
  Il2CppClass *pIVar7;
  long *plVar8;
  GameManagers_MapEditorGameManager_o **ppGVar9;
  GameManagers_MapEditorGameManager_o *pGVar10;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_T__o *pSVar12;
  Il2CppMethodPointer pIVar13;
  Il2CppObject *pIVar14;
  
  if (g_data_057ae671 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSettingElement_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BaseSettingElement_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae671 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar13 = (Il2CppMethodPointer)0x0;
  pIVar14 = (Il2CppObject *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pIVar7 = TypeInfo_MapEditorGameManager;
  pGVar10 = *(GameManagers_MapEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar10 == (GameManagers_MapEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if (((pGVar10->klass->_2).naturalAligment < bVar1) ||
       ((pGVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorGameManager)) goto label_0442923f;
    (__this->fields)._gameManager = pGVar10;
    if (((pGVar10->klass->_2).naturalAligment < bVar1) ||
       ((pGVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar7)) goto label_0442923f;
  }
  ppGVar9 = &(__this->fields)._gameManager;
  il2cpp_runtime_helper_022b4080(ppGVar9);
  pGVar2 = *ppGVar9;
  if ((((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar3 = (pGVar2->fields).MapScript, pMVar3 != (Map_MapScript_o *)0x0)) &&
      (pMVar4 = (pMVar3->fields).Options, pMVar4 != (Map_MapScriptOptions_o *)0x0)) &&
     (__this_00 = (__this->fields)._description, __this_00 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pMVar4->fields).Description,
               MethodInfo_Void_set_Value);
    __this_01 = (__this->fields)._inputs;
    pGVar10 = (GameManagers_MapEditorGameManager_o *)0x0;
    if (__this_01 != (System_Collections_Generic_List_BaseSettingElement__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
                 (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T_Enumerator_UI_BaseSettingElement_GetEnumerator);
      while( true ) {
        __this_02.fields._8_8_ = pIVar13;
        __this_02.fields._list = pSVar12;
        __this_02.fields._current = pIVar14;
        pGVar10 = MethodInfo_Boolean_MoveNext;
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffd8);
        if ((char)bVar6 == '\0') {
          __this_03.fields._8_8_ = pIVar13;
          __this_03.fields._list = pSVar12;
          __this_03.fields._current = pIVar14;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
          return;
        }
        if (pIVar14 == (Il2CppObject *)0x0) break;
        (*pIVar14->klass->vtable[6].methodPtr)(pIVar14,pIVar14->klass->vtable[6].method);
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
label_0442923f:
  auVar11 = il2cpp_runtime_helper_022b2fd0(pGVar10,pIVar7);
  if (auVar11._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar5 = *plVar8;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar13;
    __this_04.fields._list = pSVar12;
    __this_04.fields._current = pIVar14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
    if (lVar5 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_05.fields._8_8_ = pIVar13;
  __this_05.fields._list = pSVar12;
  __this_05.fields._current = pIVar14;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
  _Unwind_Resume(auVar11._0_8_);
}


// UI.MapEditorInfoPopup$$OnButtonClick
// il2cpp: void UI_MapEditorInfoPopup__OnButtonClick (UI_MapEditorInfoPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x44292d0

void UI_MapEditorInfoPopup__OnButtonClick
               (UI_MapEditorInfoPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  Map_MapScript_o *pMVar3;
  Settings_StringSetting_o *pSVar4;
  Map_MapScriptOptions_o *pMVar5;
  UI_MapEditorTopPanel_o *__this_00;
  System_String_o *defaultValue;
  bool_conflict bVar6;
  UnityEngine_UI_Text_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  
  if (g_data_057ae672 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae672 = '\x01';
  }
  bVar6 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
label_0442940f:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar6 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pGVar2 = (__this->fields)._gameManager;
  if ((((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar3 = (pGVar2->fields).MapScript, pMVar3 != (Map_MapScript_o *)0x0)) &&
      (pSVar4 = (__this->fields)._description, pSVar4 != (Settings_StringSetting_o *)0x0)) &&
     (pMVar5 = (pMVar3->fields).Options, name = (System_String_o *)0x0,
     pMVar5 != (Map_MapScriptOptions_o *)0x0)) {
    (pMVar5->fields).Description = (pSVar4->fields)._value;
    il2cpp_runtime_helper_022b4080(&(pMVar5->fields).Description);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    name = *(System_String_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if ((UI_TooltipPopup_o *)name != (UI_TooltipPopup_o *)0x0) {
      bVar1 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
      if (((((UI_TooltipPopup_o *)name)->klass->_2).naturalAligment < bVar1) ||
         ((((UI_TooltipPopup_o *)name)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorMenu))
      goto label_04429439;
      __this_00 = (UI_MapEditorTopPanel_o *)(((UI_TooltipPopup_o *)name)->fields)._panel;
      name = (System_String_o *)0x0;
      if (__this_00 != (UI_MapEditorTopPanel_o *)0x0) {
        UI_MapEditorTopPanel__Save(__this_00,(MethodInfo *)TypeInfo_MapEditorMenu);
        goto label_0442940f;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04429439:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae673 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BaseSettingElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseSettingElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae673 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (((UI_TooltipPopup_o *)name)->fields)._label = __this_01;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)name)->fields)._label,__this_01);
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseSettingElement);
  System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_UI_BaseSettingElement);
  (((UI_TooltipPopup_o *)name)->fields).Caller = (UnityEngine_Component_o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)name)->fields).Caller);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)name,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInfoPopup$$.ctor
// il2cpp: void UI_MapEditorInfoPopup___ctor (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x4429440

void UI_MapEditorInfoPopup___ctor(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_BaseSettingElement__o *__this_01;
  
  if (g_data_057ae673 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BaseSettingElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseSettingElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae673 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._description = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._description,__this_00);
  __this_01 = (System_Collections_Generic_List_BaseSettingElement__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseSettingElement);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UI_BaseSettingElement);
  (__this->fields)._inputs = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._inputs);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInfoPopup$$<Setup>b__11_0
// il2cpp: void UI_MapEditorInfoPopup___Setup_b__11_0 (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x4429520

void UI_MapEditorInfoPopup___Setup_b__11_0(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae674 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae674 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorInfoPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.MapEditorInfoPopup$$<Setup>b__11_1
// il2cpp: void UI_MapEditorInfoPopup___Setup_b__11_1 (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x4429560

void UI_MapEditorInfoPopup___Setup_b__11_1(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae675 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae675 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorInfoPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


