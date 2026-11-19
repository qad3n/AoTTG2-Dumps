// Type: UI.MapEditorInfoPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorInfoPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorInfoPopup.cs
// --------------------------------

// UI.MapEditorInfoPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorInfoPopup__get_Title (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x5d7de90

System_String_o * UI_MapEditorInfoPopup__get_Title(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547ffe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"MapInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547ffe = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MapEditor","Top","MapInfo","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorInfoPopup$$get_Width
// il2cpp: float UI_MapEditorInfoPopup__get_Width (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x5d7df30

float UI_MapEditorInfoPopup__get_Width(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.MapEditorInfoPopup$$get_Height
// il2cpp: float UI_MapEditorInfoPopup__get_Height (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x5d7df40

float UI_MapEditorInfoPopup__get_Height(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  return 400.0;
}


// UI.MapEditorInfoPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorInfoPopup__get_VerticalPadding (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x5d7df50

int32_t UI_MapEditorInfoPopup__get_VerticalPadding(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorInfoPopup$$Setup
// il2cpp: void UI_MapEditorInfoPopup__Setup (UI_MapEditorInfoPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d7df60

void UI_MapEditorInfoPopup__Setup(UI_MapEditorInfoPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Collections_Generic_List_BaseSettingElement__o *__this_00;
  Settings_StringSetting_o *setting;
  UI_BaseSettingElement_array *pUVar4;
  MethodInfo *pMVar5;
  int32_t fontSize;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UnityEngine_GameObject_o *__this_02;
  UI_InputSettingElement_o *item;
  
  if (Il2CppMethodInitialized_07547fff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSettingElement_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInfoPopup_Setup_b__11_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorInfoPopup_Setup_b__11_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MapInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    Il2CppMethodInitialized_07547fff = '\x01';
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
            (pUVar7,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInfoPopup_Setup_b__11_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar3,__this_01,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BottomBar;
  pSVar6 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar7,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorInfoPopup_Setup_b__11_1,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar3,__this_01,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._inputs;
  pUVar3 = (__this->fields).SinglePanel;
  setting = (__this->fields)._description;
  pSVar6 = UI_UIManager__GetLocale
                     ("MapEditor","MapInfo","Description","",
                      "",(MethodInfo *)0x0);
  __this_02 = UI_ElementFactory__CreateInputSetting
                        (pUVar3,__this_01,(Settings_BaseSetting_o *)setting,pSVar6,"",300.0
                         ,250.0,true,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    item = UnityEngine_GameObject__GetComponent_object_
                     (__this_02,
                      (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                     );
    pMVar5 = MethodInfo_System_Collections_Generic_List_BaseSettingElement_Add;
    if (__this_00 != (System_Collections_Generic_List_BaseSettingElement__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (__this_00->fields)._items;
      if (pUVar4 != (UI_BaseSettingElement_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pUVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pUVar4->m_Items[(int)uVar2] = (UI_BaseSettingElement_o *)item;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInfoPopup$$Show
// il2cpp: void UI_MapEditorInfoPopup__Show (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x5d7e270
// eh: try 0x5d7e413..0x5d7e45a -> pad 0x5d7e46e (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d7e486..0x5d7e48b -> pad 0x5d7e4aa cleanup
// eh: try 0x5d7e4ad..0x5d7e4b7 -> pad 0x5d7e4bf catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d7e36c: lea rbx, [r14 + 0xb0]
// asm:   0x5d7e373: jmp 0x5d7e387
// asm:   0x5d7e40e: nop 
// asm:   0x5d7e46a: jmp 0x5d7e46e
// asm:   0x5d7e46c: jmp 0x5d7e46e
// asm:   0x5d7e46e: mov rbx, rax
// asm:   0x5d7e471: cmp edx, 1
// asm:   0x5d7e474: jne 0x5d7e4ad
// asm:   0x5d7e476: mov rdi, rbx
// asm:   0x5d7e479: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d7e47e: mov rbx, qword ptr [rax]
// asm:   0x5d7e481: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d7e486: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d7e48b: lea rax, [rip + 0x150f32e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSettingElement_Dispose
// asm:   0x5d7e492: mov rsi, qword ptr [rax]
// asm:   0x5d7e495: mov rdi, rsp
// asm:   0x5d7e498: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d7e49d: test rbx, rbx
// asm:   0x5d7e4a0: je 0x5d7e44d
// asm:   0x5d7e4a2: mov rdi, rbx
// asm:   0x5d7e4a5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d7e4aa: mov rbx, rax
// asm:   0x5d7e4ad: lea rdi, [rsp + 0x18]
// asm:   0x5d7e4b2: call 0x2fdd4f0  ; il2cpp_runtime_helper_02fdd4f0()
// asm:   0x5d7e4b7: mov rdi, rbx
// asm:   0x5d7e4ba: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d7e4bf: mov rdi, rax
// asm:   0x5d7e4c2: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorInfoPopup__Show(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  Map_MapScript_o *pMVar3;
  Map_MapScriptOptions_o *pMVar4;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_BaseSettingElement__o *__this_01;
  GameManagers_MapEditorGameManager_c *pGVar5;
  bool bVar6;
  GameManagers_MapEditorGameManager_o **targetAddress;
  System_Collections_Generic_List_Enumerator_T__o SStack_38;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  if (Il2CppMethodInitialized_07548000 == '\0') {
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
    Il2CppMethodInitialized_07548000 = '\x01';
  }
  SStack_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_38.fields._index = 0;
  SStack_38.fields._version = 0;
  SStack_38.fields._current = (Il2CppObject *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pGVar5 = TypeInfo_GameManagers_MapEditorGameManager;
  pGVar2 = (GameManagers_MapEditorGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if ((bVar1 <= (((GameManagers_BaseGameManager_c *)pGVar2->klass)->_2).typeHierarchyDepth) &&
       ((((GameManagers_BaseGameManager_c *)pGVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      (__this->fields)._gameManager = pGVar2;
      if ((bVar1 <= (((GameManagers_BaseGameManager_c *)pGVar2->klass)->_2).typeHierarchyDepth) &&
         ((((GameManagers_BaseGameManager_c *)pGVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)pGVar5)) goto label_05d7e387;
    }
    il2cpp_codegen_raise_invalid_cast_exception(pGVar2,pGVar5);
  }
  (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
label_05d7e387:
  targetAddress = &(__this->fields)._gameManager;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pGVar2 = *targetAddress;
  if ((((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar3 = (pGVar2->fields).MapScript, pMVar3 != (Map_MapScript_o *)0x0)) &&
      (pMVar4 = (pMVar3->fields).Options, pMVar4 != (Map_MapScriptOptions_o *)0x0)) &&
     (__this_00 = (__this->fields)._description, __this_00 != (Settings_StringSetting_o *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pMVar4->fields).Description,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    puStack_18 = (undefined1 *)&SStack_38;
    __this_01 = (__this->fields)._inputs;
    if (__this_01 != (System_Collections_Generic_List_BaseSettingElement__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_38,(System_Collections_Generic_List_object__o *)__this_01,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_BaseSettingElement_GetEnumerator);
      uStack_20 = 0;
      while( true ) {
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_38,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_BaseSettingElement_MoveNext);
        if (!bVar6) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_38,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_BaseSettingElement_Dispose);
          return;
        }
        if (SStack_38.fields._current == (Il2CppObject *)0x0) break;
        (*(SStack_38.fields._current)->klass->vtable[6].methodPtr)
                  (SStack_38.fields._current,(SStack_38.fields._current)->klass->vtable[6].method);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInfoPopup$$OnButtonClick
// il2cpp: void UI_MapEditorInfoPopup__OnButtonClick (UI_MapEditorInfoPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d7e4d0

void UI_MapEditorInfoPopup__OnButtonClick
               (UI_MapEditorInfoPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  Map_MapScript_o *pMVar3;
  Settings_StringSetting_o *pSVar4;
  Map_MapScriptOptions_o *pMVar5;
  UI_BaseMenu_o *pUVar6;
  UI_MapEditorTopPanel_o *__this_00;
  bool bVar7;
  
  if (Il2CppMethodInitialized_07548001 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07548001 = '\x01';
  }
  bVar7 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (bVar7) {
label_05d7e611:
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
    (pMVar5->fields).Description = (pSVar4->fields)._value;
    Il2CppCodeGenWriteBarrier(&(pMVar5->fields).Description);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar6 != (UI_BaseMenu_o *)0x0) {
      bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
      if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      __this_00 = (UI_MapEditorTopPanel_o *)(*(uint64_t *)((char *)pUVar6 + 0xb8));
      if (__this_00 != (UI_MapEditorTopPanel_o *)0x0) {
        UI_MapEditorTopPanel__Save(__this_00,(MethodInfo *)0x0);
        goto label_05d7e611;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorInfoPopup$$.ctor
// il2cpp: void UI_MapEditorInfoPopup___ctor (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x5d7e640

void UI_MapEditorInfoPopup___ctor(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_BaseSettingElement__o *__this_01;
  
  if (Il2CppMethodInitialized_07548002 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSettingElement_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_07548002 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._description = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._description);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseSettingElement);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_BaseSettingElement_ctor);
  (__this->fields)._inputs = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputs);
  UI_PromptPopup___ctor((UI_PromptPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorInfoPopup$$<Setup>b__11_0
// il2cpp: void UI_MapEditorInfoPopup___Setup_b__11_0 (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x5d7e720

void UI_MapEditorInfoPopup___Setup_b__11_0(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07548003 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07548003 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorInfoPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.MapEditorInfoPopup$$<Setup>b__11_1
// il2cpp: void UI_MapEditorInfoPopup___Setup_b__11_1 (UI_MapEditorInfoPopup_o* __this, const MethodInfo* method);
// 0x5d7e760

void UI_MapEditorInfoPopup___Setup_b__11_1(UI_MapEditorInfoPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07548004 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_07548004 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorInfoPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


