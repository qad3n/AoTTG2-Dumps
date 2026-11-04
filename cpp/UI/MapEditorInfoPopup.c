// Type: UI.MapEditorInfoPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorInfoPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorInfoPopup.cs
// --------------------------------

// UI.MapEditorInfoPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorInfoPopup__get_Title (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x1822ba330

System_String_o * UI_MapEditorInfoPopup__get_Title(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347544 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Map Info");
    Il2CppMethodInitialized_184347544 = '\x01';
  }
  return "Map Info";
}


// UI.MapEditorInfoPopup$$get_Width
// il2cpp: float UI_MapEditorInfoPopup__get_Width (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x18210fb90

float UI_MapEditorInfoPopup__get_Width(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.MapEditorInfoPopup$$get_Height
// il2cpp: float UI_MapEditorInfoPopup__get_Height (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x181da8b00

float
UI_MapEditorInfoPopup__get_Height(UI_MapEditorInfoPopup_o* __this, MethodInfo* method)

{
  return 400.0;
}


// UI.MapEditorInfoPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorInfoPopup__get_VerticalPadding (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_MapEditorInfoPopup__get_VerticalPadding(UI_MapEditorInfoPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.MapEditorInfoPopup$$Setup
// il2cpp: void UI_MapEditorInfoPopup__Setup (UI_MapEditorInfoPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822b9ca0

void UI_MapEditorInfoPopup__Setup(UI_MapEditorInfoPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Collections_Generic_List_BaseSettingElement__o *__this_00;
  UI_BaseSettingElement_array *pUVar4;
  MethodInfo *pMVar5;
  int32_t fontSize;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UnityEngine_GameObject_o *__this_02;
  UI_InputSettingElement_o *item;
  
  if (Il2CppMethodInitialized_184347545 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSettingElement_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInfoPopup_Setup_b__11_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInfoPopup_Setup_b__11_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    Il2CppMethodInitialized_184347545 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,130.0,20.0,pSVar6,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar6 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInfoPopup_Setup_b__11_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar3,__this_01,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BottomBar;
  pSVar6 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorInfoPopup_Setup_b__11_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar3,__this_01,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._inputs;
  __this_02 = UI_ElementFactory__CreateInputSetting
                        ((__this->fields).SinglePanel,__this_01,
                         (Settings_BaseSetting_o *)(__this->fields)._description,"Description",
                         "",300.0,250.0,true,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    item = UnityEngine_GameObject__GetComponent_object_
                     (__this_02,
                      (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement)
    ;
    pMVar5 = MethodInfo_System_Collections_Generic_List_BaseSettingElement_Add;
    if (__this_00 != (System_Collections_Generic_List_BaseSettingElement__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (__this_00->fields)._items;
      if (pUVar4 != (UI_BaseSettingElement_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if ((uint)pUVar4->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          return;
        }
        (__this_00->fields)._size = uVar2 + 1;
        if (uVar2 < (uint)pUVar4->max_length) {
          pUVar4->m_Items[(int)uVar2] = (UI_BaseSettingElement_o *)item;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,item);
          return;
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInfoPopup$$Show
// il2cpp: void UI_MapEditorInfoPopup__Show (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x1822b9f80
// eh: try 0x1822ba140..0x1822ba1a9 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822ba182: mov rdx, qword ptr [rip + 0x1dbc5e7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSettingElement_Dispose
// asm:   0x1822ba189: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822ba18e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822ba193: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822ba198: test rcx, rcx
// asm:   0x1822ba19b: jne 0x1822ba1a9
// asm:   0x1822ba1a9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_MapEditorInfoPopup__Show(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  Map_MapScript_o *pMVar3;
  Map_MapScriptOptions_o *pMVar4;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_BaseSettingElement__o *__this_01;
  bool bVar5;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184347546 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSettingElement_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSettingElement_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSettingElement_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSettingElement_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_184347546 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pGVar2 = (GameManagers_MapEditorGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)pGVar2->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)pGVar2->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
    }
    (__this->fields)._gameManager = pGVar2;
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)pGVar2->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)pGVar2->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager,pGVar2);
  pGVar2 = (__this->fields)._gameManager;
  if ((((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar3 = (pGVar2->fields).MapScript, pMVar3 != (Map_MapScript_o *)0x0)) &&
      (pMVar4 = (pMVar3->fields).Options, pMVar4 != (Map_MapScriptOptions_o *)0x0)) &&
     (__this_00 = (__this->fields)._description, __this_00 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pMVar4->fields).Description,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    __this_01 = (__this->fields)._inputs;
    if (__this_01 != (System_Collections_Generic_List_BaseSettingElement__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_T__o *)__this_01,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_BaseSettingElement_GetEnumerator);
      local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      local_28.fields._index = local_40._8_4_;
      local_28.fields._version = local_40._12_4_;
      local_28.fields._current = local_30;
      local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_40._8_8_ = &local_28;
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_BaseSettingElement_MoveNext);
        if (!bVar5) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_List_Enumerator_BaseSettingElement_Dispose);
          return;
        }
        if (local_28.fields._current == (Il2CppObject *)0x0) break;
        (*(local_28.fields._current)->klass->vtable[6].methodPtr)
                  (local_28.fields._current,(local_28.fields._current)->klass->vtable[6].method);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInfoPopup$$OnButtonClick
// il2cpp: void UI_MapEditorInfoPopup__OnButtonClick (UI_MapEditorInfoPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822b9b20

void UI_MapEditorInfoPopup__OnButtonClick
               (UI_MapEditorInfoPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  Map_MapScript_o *pMVar3;
  Settings_StringSetting_o *pSVar4;
  Map_MapScriptOptions_o *pMVar5;
  System_String_o *value;
  UI_BaseMenu_o *pUVar6;
  UI_MapEditorTopPanel_o *__this_00;
  bool bVar7;
  
  if (Il2CppMethodInitialized_184347547 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184347547 = '\x01';
  }
  bVar7 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (bVar7) {
label_1822b9c68:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar7 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (!bVar7) {
    return;
  }
  pGVar2 = (__this->fields)._gameManager;
  if ((((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar3 = (pGVar2->fields).MapScript, pMVar3 != (Map_MapScript_o *)0x0)) &&
      (pSVar4 = (__this->fields)._description, pSVar4 != (Settings_StringSetting_o *)0x0)) &&
     (pMVar5 = (pMVar3->fields).Options, pMVar5 != (Map_MapScriptOptions_o *)0x0)) {
    value = (pSVar4->fields)._value;
    (pMVar5->fields).Description = value;
    Il2CppCodeGenWriteBarrier(&(pMVar5->fields).Description,value);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar6 != (UI_BaseMenu_o *)0x0) {
      bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
      if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
      }
      __this_00 = (UI_MapEditorTopPanel_o *)(*(uint64_t *)((char *)pUVar6 + 0xb8));
      if (__this_00 != (UI_MapEditorTopPanel_o *)0x0) {
        UI_MapEditorTopPanel__Save(__this_00,(MethodInfo *)0x0);
        goto label_1822b9c68;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInfoPopup$$.ctor
// il2cpp: void UI_MapEditorInfoPopup___ctor (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x1822ba250

void UI_MapEditorInfoPopup___ctor(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_BaseSettingElement__o *__this_01;
  
  if (Il2CppMethodInitialized_184347548 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSettingElement_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184347548 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._description = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._description,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseSettingElement);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BaseSettingElement_ctor);
  (__this->fields)._inputs = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputs,__this_01);
  UI_PromptPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInfoPopup$$<Setup>b__11_0
// il2cpp: void UI_MapEditorInfoPopup___Setup_b__11_0 (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x1822ba1d0

void UI_MapEditorInfoPopup___Setup_b__11_0(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347549 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184347549 = '\x01';
  }
  UI_MapEditorInfoPopup__OnButtonClick(__this,"Save",(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInfoPopup$$<Setup>b__11_1
// il2cpp: void UI_MapEditorInfoPopup___Setup_b__11_1 (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x1822ba210

void UI_MapEditorInfoPopup___Setup_b__11_1(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434754a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_18434754a = '\x01';
  }
  UI_MapEditorInfoPopup__OnButtonClick(__this,"Cancel",(MethodInfo *)0x0);
  return;
}


