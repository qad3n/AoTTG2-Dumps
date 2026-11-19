// Type: UI.MapEditorAddComponentPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorAddComponentPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddComponentPanel.cs
// --------------------------------

// UI.MapEditorAddComponentPanel.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_MapEditorAddComponentPanel___c__DisplayClass21_0___ctor (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x5d5d810

void UI_MapEditorAddComponentPanel___c__DisplayClass21_0___ctor
               (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPanel.<>c__DisplayClass21_0$$<CreateList>b__0
// il2cpp: void UI_MapEditorAddComponentPanel___c__DisplayClass21_0___CreateList_b__0 (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x5d5da00

void UI_MapEditorAddComponentPanel___c__DisplayClass21_0___CreateList_b__0
               (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_MapEditorAddComponentPanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_MapEditorAddComponentPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MapEditorAddComponentPanel__OnItemClick(__this_00,(__this->fields).item,in_RDX);
  return;
}


// UI.MapEditorAddComponentPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorAddComponentPanel__get_ScrollBar (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x5d5c2e0

bool UI_MapEditorAddComponentPanel__get_ScrollBar(UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorAddComponentPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorAddComponentPanel__get_HorizontalPadding (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x5d5c2f0

int32_t UI_MapEditorAddComponentPanel__get_HorizontalPadding
                  (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MapEditorAddComponentPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorAddComponentPanel__get_VerticalPadding (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x5d5c300

int32_t UI_MapEditorAddComponentPanel__get_VerticalPadding
                  (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 5;
}


// UI.MapEditorAddComponentPanel$$get_ItemButtonWidth
// il2cpp: float UI_MapEditorAddComponentPanel__get_ItemButtonWidth (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x5d5c310

float UI_MapEditorAddComponentPanel__get_ItemButtonWidth
                (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 450.0;
}


// UI.MapEditorAddComponentPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorAddComponentPanel__get_VerticalSpacing (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x5d5c320

float UI_MapEditorAddComponentPanel__get_VerticalSpacing
                (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 5.0;
}


// UI.MapEditorAddComponentPanel$$get_ItemFontSize
// il2cpp: int32_t UI_MapEditorAddComponentPanel__get_ItemFontSize (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x5d5c330

int32_t UI_MapEditorAddComponentPanel__get_ItemFontSize
                  (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 0x12;
}


// UI.MapEditorAddComponentPanel$$get_DeleteButtonSize
// il2cpp: float UI_MapEditorAddComponentPanel__get_DeleteButtonSize (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x5d5c340

float UI_MapEditorAddComponentPanel__get_DeleteButtonSize
                (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.MapEditorAddComponentPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_MapEditorAddComponentPanel__get_ThemePanel (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x5d5c350

System_String_o *
UI_MapEditorAddComponentPanel__get_ThemePanel(UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547f58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SelectListPopup");
    Il2CppMethodInitialized_07547f58 = '\x01';
  }
  return "SelectListPopup";
}


// UI.MapEditorAddComponentPanel$$Setup
// il2cpp: void UI_MapEditorAddComponentPanel__Setup (UI_MapEditorAddComponentPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d5c380
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5c607: mov rdi, rbx

void UI_MapEditorAddComponentPanel__Setup
               (UI_MapEditorAddComponentPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UI_MapEditorAddComponentPanel_o *a;
  UnityEngine_Transform_o *parent_00;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar5;
  System_Collections_Generic_List_string__o *original;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  UI_MapEditorAddComponentPanel_o *__this_01;
  
  if (Il2CppMethodInitialized_07547f59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorAddComponentPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"NoItemsFound");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547f59 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorAddComponentPopup->_2).typeHierarchyDepth;
    if (((parent->klass->_2).typeHierarchyDepth < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorAddComponentPopup)) {
label_05d5c60a:
      il2cpp_codegen_raise_invalid_cast_exception(parent);
    }
    pSVar3 = UI_BasePanel__GetCurrentCategoryName(parent,(MethodInfo *)0x0);
    pUVar5 = (*(uint64_t *)((char *)parent + 0xa8));
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      a = (*(uint64_t *)((char *)pUVar5 + 0x20));
      parent_00 = (__this->fields).SinglePanel;
      pSVar4 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar4 = UI_UIManager__GetLocale
                         ("Common","NoItemsFound","",
                          "","",(MethodInfo *)0x0);
      pUVar5 = UI_ElementFactory__CreateDefaultLabel(parent_00,__this_00,pSVar4,0,4,(MethodInfo *)0x0);
      (__this->fields)._noItemsLabel = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._noItemsLabel);
      parent = (UI_BasePanel_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (parent != (UI_BasePanel_o *)0x0) {
        bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
        method_00 = (MethodInfo *)(ulong)bVar1;
        if ((bVar1 <= (((GameManagers_BaseGameManager_c *)parent->klass)->_2).typeHierarchyDepth) &&
           ((((GameManagers_BaseGameManager_c *)parent->klass)->_2).typeHierarchy
            [(long)&method_00[-1].field_0x57] == (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
          if ((parent->fields).DoublePanelRight == (UnityEngine_Transform_o *)0x0) {
            return;
          }
          original = (*(__this->klass->vtable)._38_GetItems.methodPtr)
                               (__this,pSVar3,(__this->klass->vtable)._38_GetItems.method);
          __this_01 = a;
          bVar2 = System_String__op_Inequality
                            ((System_String_o *)a,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                             (MethodInfo *)0x0);
          method_01 = extraout_RDX;
          if (bVar2) {
            original = UI_MapEditorAddComponentPanel__Filter
                                 (__this_01,original,(System_String_o *)a,method_00);
            method_01 = extraout_RDX_00;
          }
          UI_MapEditorAddComponentPanel__CreateList(__this,original,method_01);
          return;
        }
        goto label_05d5c60a;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPanel$$GetItems
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddComponentPanel__GetItems (UI_MapEditorAddComponentPanel_o* __this, System_String_o* category, const MethodInfo* method);
// 0x5d5d0a0
// eh: try 0x5d5d2f2..0x5d5d415 -> pad 0x5d5d422 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d5d44e..0x5d5d453 -> pad 0x5d5d5ad cleanup
// eh: try 0x5d5d4ff..0x5d5d5ad -> pad 0x5d5d5c1 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d5d5b0..0x5d5d5ba -> pad 0x5d5d7ff catch (...) [compiler noexcept guard]
// eh: try 0x5d5d5e5..0x5d5d5ea -> pad 0x5d5d78b cleanup
// eh: try 0x5d5d68c..0x5d5d78b -> pad 0x5d5d79c (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d5d78e..0x5d5d798 -> pad 0x5d5d7ff catch (...) [compiler noexcept guard]
// eh: try 0x5d5d7c2..0x5d5d7c7 -> pad 0x5d5d7ea cleanup
// eh: try 0x5d5d7ed..0x5d5d7f7 -> pad 0x5d5d7ff catch (...) [compiler noexcept guard]
// asm: 85 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5d2dd: jmp 0x5d5d325
// asm:   0x5d5d422: jmp 0x5d5d432
// asm:   0x5d5d424: jmp 0x5d5d432
// asm:   0x5d5d426: jmp 0x5d5d432
// asm:   0x5d5d428: jmp 0x5d5d432
// asm:   0x5d5d42a: jmp 0x5d5d432
// asm:   0x5d5d42c: jmp 0x5d5d432
// asm:   0x5d5d42e: jmp 0x5d5d432
// asm:   0x5d5d430: jmp 0x5d5d432
// asm:   0x5d5d432: mov r12, rax
// asm:   0x5d5d435: cmp edx, 1
// asm:   0x5d5d438: jne 0x5d5d5b0
// asm:   0x5d5d43e: mov rdi, r12
// asm:   0x5d5d441: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d5d446: mov rbx, qword ptr [rax]
// asm:   0x5d5d449: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d5d44e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d5d453: lea rax, [rip + 0x153169e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d5d45a: mov rsi, qword ptr [rax]
// asm:   0x5d5d45d: mov rdi, rsp
// asm:   0x5d5d460: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d5d465: test rbx, rbx
// asm:   0x5d5d468: jne 0x5d5d7e2
// asm:   0x5d5d46e: mov rbp, qword ptr [rsp + 0x40]
// asm:   0x5d5d473: mov rbx, qword ptr [rsp + 0x38]
// asm:   0x5d5d5ad: mov r12, rax
// asm:   0x5d5d5b0: lea rdi, [rsp + 0x20]
// asm:   0x5d5d5b5: call 0x2fdcba0  ; il2cpp_runtime_helper_02fdcba0()
// asm:   0x5d5d5ba: jmp 0x5d5d7f7
// asm:   0x5d5d5bf: jmp 0x5d5d5c9
// asm:   0x5d5d5c1: jmp 0x5d5d5c9
// asm:   0x5d5d5c3: jmp 0x5d5d5c9
// asm:   0x5d5d5c5: jmp 0x5d5d5c9
// asm:   0x5d5d5c7: jmp 0x5d5d5c9
// asm:   0x5d5d5c9: mov r12, rax
// asm:   0x5d5d5cc: cmp edx, 1
// asm:   0x5d5d5cf: jne 0x5d5d78e
// asm:   0x5d5d5d5: mov rdi, r12
// asm:   0x5d5d5d8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d5d5dd: mov rbx, qword ptr [rax]
// asm:   0x5d5d5e0: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d5d5e5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d5d5ea: lea rax, [rip + 0x1531507]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d5d5f1: mov rsi, qword ptr [rax]
// asm:   0x5d5d5f4: mov rdi, rsp
// asm:   0x5d5d5f7: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d5d5fc: test rbx, rbx
// asm:   0x5d5d5ff: jne 0x5d5d7e2
// asm:   0x5d5d605: mov rbp, qword ptr [rsp + 0x40]
// asm:   0x5d5d60a: mov rbx, qword ptr [rsp + 0x38]
// asm:   0x5d5d78b: mov r12, rax
// asm:   0x5d5d78e: lea rdi, [rsp + 0x20]
// asm:   0x5d5d793: call 0x2fdcbd0  ; il2cpp_runtime_helper_02fdcbd0()
// asm:   0x5d5d798: jmp 0x5d5d7f7
// asm:   0x5d5d79a: jmp 0x5d5d7aa
// asm:   0x5d5d79c: jmp 0x5d5d7aa
// asm:   0x5d5d79e: jmp 0x5d5d7aa
// asm:   0x5d5d7a0: jmp 0x5d5d7aa
// asm:   0x5d5d7a2: jmp 0x5d5d7aa
// asm:   0x5d5d7a4: jmp 0x5d5d7aa
// asm:   0x5d5d7a6: jmp 0x5d5d7aa
// asm:   0x5d5d7a8: jmp 0x5d5d7aa
// asm:   0x5d5d7aa: mov r12, rax
// asm:   0x5d5d7ad: cmp edx, 1
// asm:   0x5d5d7b0: jne 0x5d5d7ed
// asm:   0x5d5d7b2: mov rdi, r12
// asm:   0x5d5d7b5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d5d7ba: mov rbx, qword ptr [rax]
// asm:   0x5d5d7bd: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d5d7c2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d5d7c7: lea rax, [rip + 0x153132a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d5d7ce: mov rsi, qword ptr [rax]
// asm:   0x5d5d7d1: mov rdi, rsp
// asm:   0x5d5d7d4: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d5d7d9: test rbx, rbx
// asm:   0x5d5d7dc: je 0x5d5d346
// asm:   0x5d5d7e2: mov rdi, rbx
// asm:   0x5d5d7e5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d5d7ea: mov r12, rax
// asm:   0x5d5d7ed: lea rdi, [rsp + 0x20]
// asm:   0x5d5d7f2: call 0x2fdcc00  ; il2cpp_runtime_helper_02fdcc00()
// asm:   0x5d5d7f7: mov rdi, r12
// asm:   0x5d5d7fa: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d5d7ff: mov rdi, rax
// asm:   0x5d5d802: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_string__o *
UI_MapEditorAddComponentPanel__GetItems
          (UI_MapEditorAddComponentPanel_o *__this,System_String_o *category,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  System_String_array *pSVar6;
  MethodInfo *pMVar7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_List_Enumerator_object__o *pSVar9;
  bool bVar10;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o SStack_78;
  undefined1 auStack_58 [16];
  System_String_o *pSStack_48;
  System_Collections_Generic_List_string__o *pSStack_40;
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_07547f5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Sort);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Internal");
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    Il2CppMethodInitialized_07547f5a = '\x01';
  }
  SStack_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_78.fields._index = 0;
  SStack_78.fields._version = 0;
  SStack_78.fields._current = (Il2CppObject *)0x0;
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (pGVar4 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar2 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar4);
    }
    if (((*(uint64_t *)((char *)pGVar4 + 0x30)) != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
       (__this_01 = CustomLogic_CustomLogicEvaluator__GetComponentNames((*(uint64_t *)((char *)pGVar4 + 0x30)),(MethodInfo *)0x0),
       __this_01 != (System_Collections_Generic_List_string__o *)0x0)) {
      System_Collections_Generic_List_object___Sort
                ((System_Collections_Generic_List_object__o *)__this_01,
                 (MethodInfo_395F360 *)MethodInfo_System_Collections_Generic_List_string_Sort);
      bVar10 = System_String__op_Equality(category,"All",(MethodInfo *)0x0);
      if (bVar10) {
        __this_00 = __this_01;
      }
      else {
        bVar10 = System_String__op_Equality(category,"General",(MethodInfo *)0x0);
        if (bVar10) {
          pSStack_40 = __this_01;
          pSStack_38 = category;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,
                     (System_Collections_Generic_List_object__o *)__this_01,
                     (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
          SStack_78.fields._current = (Il2CppObject *)pSStack_48;
          SStack_78.fields._list = (System_Collections_Generic_List_T__o *)auStack_58._0_8_;
          SStack_78.fields._index = auStack_58._8_4_;
          SStack_78.fields._version = auStack_58._12_4_;
          auStack_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          auStack_58._8_8_ = &SStack_78;
          pSVar9 = &SStack_78;
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
            while (auStack_58._8_8_ = pSVar9,
                  bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (&SStack_78,
                                      (MethodInfo_4C45C50 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
                  pIVar8 = SStack_78.fields._current, bVar10) {
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              pSVar5 = (System_Collections_Generic_HashSet_object__o *)
                       TypeInfo_CustomLogic_CustomLogicManager->static_fields->GeneralComponents;
              if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_05d5d40b:
                ThrowNullReferenceException();
              }
              bVar10 = System_Collections_Generic_HashSet_object___Contains
                                 (pSVar5,pIVar8,
                                  (MethodInfo_4FB3720 *)
                                  MethodInfo_System_Collections_Generic_HashSet_string_Contains);
              pSVar9 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_58._8_8_;
              if (bVar10) {
label_05d5d410:
                ThrowNullReferenceException();
              }
            }
          }
          else {
            while (bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                      (&SStack_78,
                                       (MethodInfo_4C45C50 *)
                                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
                  pIVar8 = SStack_78.fields._current, bVar10) {
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              pSVar5 = (System_Collections_Generic_HashSet_object__o *)
                       TypeInfo_CustomLogic_CustomLogicManager->static_fields->GeneralComponents;
              if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d5d40b;
              bVar10 = System_Collections_Generic_HashSet_object___Contains
                                 (pSVar5,pIVar8,
                                  (MethodInfo_4FB3720 *)
                                  MethodInfo_System_Collections_Generic_HashSet_string_Contains);
              pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
              if (bVar10) {
                piVar1 = &(__this_00->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar6 = (__this_00->fields)._items;
                if (pSVar6 == (System_String_array *)0x0) goto label_05d5d410;
                uVar3 = (__this_00->fields)._size;
                if (uVar3 < (uint)pSVar6->max_length) {
                  (__this_00->fields)._size = uVar3 + 1;
                  pSVar6->m_Items[(int)uVar3] = (System_String_o *)pIVar8;
                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,pIVar8,
                             (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                }
              }
            }
          }
        }
        else {
          bVar10 = System_String__op_Equality(category,"Internal",(MethodInfo *)0x0);
          if (bVar10) {
            pSStack_40 = __this_01;
            pSStack_38 = category;
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,
                       (System_Collections_Generic_List_object__o *)__this_01,
                       (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
            SStack_78.fields._current = (Il2CppObject *)pSStack_48;
            SStack_78.fields._list = (System_Collections_Generic_List_T__o *)auStack_58._0_8_;
            SStack_78.fields._index = auStack_58._8_4_;
            SStack_78.fields._version = auStack_58._12_4_;
            auStack_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
            auStack_58._8_8_ = &SStack_78;
label_05d5d50a:
            bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&SStack_78,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
            pIVar8 = SStack_78.fields._current;
            if (bVar10) {
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              pSVar5 = (System_Collections_Generic_HashSet_object__o *)
                       TypeInfo_CustomLogic_CustomLogicManager->static_fields->InternalComponents;
              if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar10 = System_Collections_Generic_HashSet_object___Contains
                                 (pSVar5,pIVar8,
                                  (MethodInfo_4FB3720 *)
                                  MethodInfo_System_Collections_Generic_HashSet_string_Contains);
              pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
              if (bVar10) {
                if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
                  piVar1 = &(__this_00->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar6 = (__this_00->fields)._items;
                  if (pSVar6 != (System_String_array *)0x0) {
                    uVar3 = (__this_00->fields)._size;
                    if (uVar3 < (uint)pSVar6->max_length) {
                      (__this_00->fields)._size = uVar3 + 1;
                      pSVar6->m_Items[(int)uVar3] = (System_String_o *)pIVar8;
                      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_00,pIVar8,
                                 (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                    }
                    goto label_05d5d50a;
                  }
                }
                ThrowNullReferenceException();
              }
              goto label_05d5d50a;
            }
          }
          else {
            bVar10 = System_String__op_Equality(category,"Custom",(MethodInfo *)0x0);
            if (!bVar10) {
              return __this_00;
            }
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,
                       (System_Collections_Generic_List_object__o *)__this_01,
                       (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
            SStack_78.fields._current = (Il2CppObject *)pSStack_48;
            SStack_78.fields._list = (System_Collections_Generic_List_T__o *)auStack_58._0_8_;
            SStack_78.fields._index = auStack_58._8_4_;
            SStack_78.fields._version = auStack_58._12_4_;
            auStack_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
            auStack_58._8_8_ = &SStack_78;
label_05d5d6a0:
            bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&SStack_78,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
            pIVar8 = SStack_78.fields._current;
            if (bVar10) {
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              pSVar5 = (System_Collections_Generic_HashSet_object__o *)
                       TypeInfo_CustomLogic_CustomLogicManager->static_fields->InternalComponents;
              if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar10 = System_Collections_Generic_HashSet_object___Contains
                                 (pSVar5,pIVar8,
                                  (MethodInfo_4FB3720 *)
                                  MethodInfo_System_Collections_Generic_HashSet_string_Contains);
              if (!bVar10) {
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                pSVar5 = (System_Collections_Generic_HashSet_object__o *)
                         TypeInfo_CustomLogic_CustomLogicManager->static_fields->GeneralComponents;
                if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar10 = System_Collections_Generic_HashSet_object___Contains
                                   (pSVar5,pIVar8,
                                    (MethodInfo_4FB3720 *)
                                    MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
                if (!bVar10) {
                  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
                    piVar1 = &(__this_00->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar6 = (__this_00->fields)._items;
                    if (pSVar6 != (System_String_array *)0x0) {
                      uVar3 = (__this_00->fields)._size;
                      if (uVar3 < (uint)pSVar6->max_length) {
                        (__this_00->fields)._size = uVar3 + 1;
                        pSVar6->m_Items[(int)uVar3] = (System_String_o *)pIVar8;
                        Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this_00,pIVar8,
                                   (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                      }
                      goto label_05d5d6a0;
                    }
                  }
                  ThrowNullReferenceException();
                }
              }
              goto label_05d5d6a0;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (&SStack_78,
                   (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose)
        ;
      }
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPanel$$Filter
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddComponentPanel__Filter (UI_MapEditorAddComponentPanel_o* __this, System_Collections_Generic_List_string__o* original, System_String_o* search, const MethodInfo* method);
// 0x5d5c610
// eh: try 0x5d5c76f..0x5d5c87a -> pad 0x5d5c87f (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d5c8a9..0x5d5c8ae -> pad 0x5d5c8cd cleanup
// eh: try 0x5d5c8d0..0x5d5c8da -> pad 0x5d5c8e2 catch (...) [compiler noexcept guard]
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5c74d: lea r13, [rip + 0x15323ac]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext
// asm:   0x5d5c754: mov r15, rsp
// asm:   0x5d5c757: lea rbp, [rip + 0x153a1fa]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5d5c75e: jmp 0x5d5c77a
// asm:   0x5d5c7f8: lea rbp, [rip + 0x1532301]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext
// asm:   0x5d5c7ff: mov rbx, rsp
// asm:   0x5d5c802: nop word ptr cs:[rax + rax]
// asm:   0x5d5c87f: jmp 0x5d5c891
// asm:   0x5d5c881: jmp 0x5d5c891
// asm:   0x5d5c883: jmp 0x5d5c891
// asm:   0x5d5c885: jmp 0x5d5c891
// asm:   0x5d5c887: jmp 0x5d5c891
// asm:   0x5d5c889: jmp 0x5d5c891
// asm:   0x5d5c88b: jmp 0x5d5c891
// asm:   0x5d5c88d: jmp 0x5d5c891
// asm:   0x5d5c88f: jmp 0x5d5c891
// asm:   0x5d5c891: mov rbx, rax
// asm:   0x5d5c894: cmp edx, 1
// asm:   0x5d5c897: jne 0x5d5c8d0
// asm:   0x5d5c899: mov rdi, rbx
// asm:   0x5d5c89c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d5c8a1: mov rbx, qword ptr [rax]
// asm:   0x5d5c8a4: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d5c8a9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d5c8ae: lea rax, [rip + 0x1532243]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d5c8b5: mov rsi, qword ptr [rax]
// asm:   0x5d5c8b8: mov rdi, rsp
// asm:   0x5d5c8bb: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d5c8c0: test rbx, rbx
// asm:   0x5d5c8c3: je 0x5d5c85e
// asm:   0x5d5c8c5: mov rdi, rbx
// asm:   0x5d5c8c8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d5c8cd: mov rbx, rax
// asm:   0x5d5c8d0: lea rdi, [rsp + 0x20]
// asm:   0x5d5c8d5: call 0x2fdcc30  ; il2cpp_runtime_helper_02fdcc30()
// asm:   0x5d5c8da: mov rdi, rbx
// asm:   0x5d5c8dd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d5c8e2: mov rdi, rax
// asm:   0x5d5c8e5: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_string__o *
UI_MapEditorAddComponentPanel__Filter
          (UI_MapEditorAddComponentPanel_o *__this,System_Collections_Generic_List_string__o *original,
          System_String_o *search,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  Il2CppObject *item;
  System_Collections_Generic_List_Enumerator_object__o *pSVar5;
  bool bVar6;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *value;
  System_String_o *pSVar7;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07547f5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07547f5b = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  bVar6 = System_String__op_Equality
                    (search,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar6) {
    __this_00 = original;
  }
  else {
    if ((search == (System_String_o *)0x0) ||
       (value = System_String__ToLower(search,(MethodInfo *)0x0),
       original == (System_Collections_Generic_List_string__o *)0x0)) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)original,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_68.fields._current = (Il2CppObject *)local_38;
    local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    local_68.fields._index = local_48._8_4_;
    local_68.fields._version = local_48._12_4_;
    local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_48._8_8_ = &local_68;
    pSVar5 = &local_68;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
      do {
        local_48._8_8_ = pSVar5;
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        if (!bVar6) goto label_05d5c84c;
        if ((System_String_o *)local_68.fields._current == (System_String_o *)0x0) goto label_05d5c870;
        pSVar7 = System_String__ToLower((System_String_o *)local_68.fields._current,(MethodInfo *)0x0);
        if (pSVar7 == (System_String_o *)0x0) goto label_05d5c875;
        bVar6 = System_String__Contains(pSVar7,value,(MethodInfo *)0x0);
        pSVar5 = (System_Collections_Generic_List_Enumerator_object__o *)local_48._8_8_;
      } while (!bVar6);
label_05d5c847:
      ThrowNullReferenceException();
    }
    while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_68,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
          item = local_68.fields._current, bVar6) {
      if ((System_String_o *)local_68.fields._current == (System_String_o *)0x0) {
label_05d5c870:
        ThrowNullReferenceException();
      }
      pSVar7 = System_String__ToLower((System_String_o *)local_68.fields._current,(MethodInfo *)0x0);
      if (pSVar7 == (System_String_o *)0x0) {
label_05d5c875:
        ThrowNullReferenceException();
      }
      bVar6 = System_String__Contains(pSVar7,value,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (bVar6) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 == (System_String_array *)0x0) goto label_05d5c847;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (System_String_o *)item;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,item,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
      }
    }
label_05d5c84c:
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&local_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  }
  return __this_00;
}


// UI.MapEditorAddComponentPanel$$CreateList
// il2cpp: void UI_MapEditorAddComponentPanel__CreateList (UI_MapEditorAddComponentPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x5d5c8f0
// eh: try 0x5d5ca9a..0x5d5cfbe -> pad 0x5d5d01b (+51 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d5d04c..0x5d5d051 -> pad 0x5d5d076 cleanup
// eh: try 0x5d5d079..0x5d5d086 -> pad 0x5d5d08e catch (...) [compiler noexcept guard]
// asm: 76 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5cfc3: jmp 0x5d5d02c
// asm:   0x5d5cfc5: jmp 0x5d5d027
// asm:   0x5d5cfc7: jmp 0x5d5d027
// asm:   0x5d5cfc9: jmp 0x5d5d027
// asm:   0x5d5cfcb: jmp 0x5d5d027
// asm:   0x5d5cfcd: jmp 0x5d5d027
// asm:   0x5d5cfcf: jmp 0x5d5d027
// asm:   0x5d5cfd1: jmp 0x5d5d02c
// asm:   0x5d5cfd3: jmp 0x5d5d02c
// asm:   0x5d5cfd5: jmp 0x5d5d02c
// asm:   0x5d5cfd7: jmp 0x5d5d02c
// asm:   0x5d5cfd9: jmp 0x5d5d027
// asm:   0x5d5cfdb: jmp 0x5d5d027
// asm:   0x5d5cfdd: jmp 0x5d5d02c
// asm:   0x5d5cfdf: jmp 0x5d5d02c
// asm:   0x5d5cfe1: jmp 0x5d5d027
// asm:   0x5d5cfe3: jmp 0x5d5d02c
// asm:   0x5d5cfe5: jmp 0x5d5d02c
// asm:   0x5d5cfe7: jmp 0x5d5d02c
// asm:   0x5d5cfe9: jmp 0x5d5d02c
// asm:   0x5d5cfeb: jmp 0x5d5d02c
// asm:   0x5d5cfed: jmp 0x5d5d02c
// asm:   0x5d5cfef: jmp 0x5d5d02c
// asm:   0x5d5cff1: jmp 0x5d5d02c
// asm:   0x5d5cff3: jmp 0x5d5d027
// asm:   0x5d5cff5: jmp 0x5d5d02c
// asm:   0x5d5cff7: jmp 0x5d5d02c
// asm:   0x5d5cff9: jmp 0x5d5d027
// asm:   0x5d5cffb: jmp 0x5d5d027
// asm:   0x5d5cffd: jmp 0x5d5d027
// asm:   0x5d5cfff: jmp 0x5d5d02c
// asm:   0x5d5d001: jmp 0x5d5d02c
// asm:   0x5d5d003: jmp 0x5d5d02c
// asm:   0x5d5d005: jmp 0x5d5d02c
// asm:   0x5d5d007: jmp 0x5d5d02c
// asm:   0x5d5d009: jmp 0x5d5d02c
// asm:   0x5d5d00b: jmp 0x5d5d027
// asm:   0x5d5d00d: jmp 0x5d5d02c
// asm:   0x5d5d00f: jmp 0x5d5d02c
// asm:   0x5d5d011: jmp 0x5d5d02c
// asm:   0x5d5d013: jmp 0x5d5d02c
// asm:   0x5d5d015: jmp 0x5d5d02c
// asm:   0x5d5d017: jmp 0x5d5d02c
// asm:   0x5d5d019: jmp 0x5d5d02c
// asm:   0x5d5d01b: jmp 0x5d5d027
// asm:   0x5d5d01d: jmp 0x5d5d027
// asm:   0x5d5d01f: jmp 0x5d5d027
// asm:   0x5d5d021: jmp 0x5d5d027
// asm:   0x5d5d023: jmp 0x5d5d02c
// asm:   0x5d5d025: jmp 0x5d5d027
// asm:   0x5d5d027: mov rbx, rax
// asm:   0x5d5d02a: jmp 0x5d5d034
// asm:   0x5d5d02c: mov rbx, rax
// asm:   0x5d5d02f: mov r15, qword ptr [rsp + 0x60]
// asm:   0x5d5d034: cmp edx, 1
// asm:   0x5d5d037: jne 0x5d5d079
// asm:   0x5d5d039: mov rdi, rbx
// asm:   0x5d5d03c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d5d041: mov rbx, qword ptr [rax]
// asm:   0x5d5d044: mov qword ptr [rsp + 0xa0], rbx
// asm:   0x5d5d04c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d5d051: lea rax, [rip + 0x1531aa0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d5d058: mov rsi, qword ptr [rax]
// asm:   0x5d5d05b: lea rdi, [rsp + 0x70]
// asm:   0x5d5d060: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d5d065: test rbx, rbx
// asm:   0x5d5d068: je 0x5d5cf24
// asm:   0x5d5d06e: mov rdi, rbx
// asm:   0x5d5d071: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d5d076: mov rbx, rax
// asm:   0x5d5d079: lea rdi, [rsp + 0xa0]
// asm:   0x5d5d081: call 0x2fdcc60  ; il2cpp_runtime_helper_02fdcc60()
// asm:   0x5d5d086: mov rdi, rbx
// asm:   0x5d5d089: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d5d08e: mov rdi, rax
// asm:   0x5d5d091: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorAddComponentPanel__CreateList
               (UI_MapEditorAddComponentPanel_o *__this,System_Collections_Generic_List_string__o *items,
               MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_Button_o *__this_01;
  bool bVar1;
  int32_t value_00;
  UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o *__this_02;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Button_o *__this_03;
  UnityEngine_Events_UnityAction_o *__this_04;
  UnityEngine_UI_Text_o *pUVar4;
  System_String_o *pSVar5;
  UnityEngine_UI_LayoutElement_o *pUVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Color_o UVar9;
  System_Collections_Generic_List_Enumerator_object__o local_128;
  System_Collections_Generic_List_string__o *local_108;
  UnityEngine_UI_Button_o *local_100;
  undefined8 local_f8;
  System_Collections_Generic_List_Enumerator_object__o *local_f0;
  System_Collections_Generic_List_T__o *local_e8;
  int32_t iStack_e0;
  int32_t iStack_dc;
  System_String_o *local_d8;
  float fStack_d0;
  float fStack_cc;
  UnityEngine_Color_Fields local_c8;
  UnityEngine_Color_Fields local_b8;
  UnityEngine_Color_Fields local_a8 [2];
  undefined1 local_88 [32];
  UnityEngine_Color_Fields local_68;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_Fields local_48;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07547f5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorAddComponentPanel_c__DisplayClass21_0_CreateList_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorAddComponentPanel_c__DisplayClass21_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"ItemButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/SelectListButton");
    il2cpp_codegen_initialize_runtime_metadata(&"DeleteButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547f5c = '\x01';
  }
  local_128.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_128.fields._index = 0;
  local_128.fields._version = 0;
  local_128.fields._current = (Il2CppObject *)0x0;
  if (items != (System_Collections_Generic_List_string__o *)0x0) {
    local_108 = items;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_88,
               (System_Collections_Generic_List_object__o *)items,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_128.fields._current = (Il2CppObject *)local_88._16_8_;
    local_128.fields._list = (System_Collections_Generic_List_T__o *)local_88._0_8_;
    local_128.fields._index = local_88._8_4_;
    local_128.fields._version = local_88._12_4_;
    local_f8 = 0;
    local_f0 = &local_128;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_128,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
      if (!bVar1) break;
      __this_02 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UI_MapEditorAddComponentPanel_c__DisplayClass21_0);
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      if (__this_02 == (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      (__this_02->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
      (__this_02->fields).item = (System_String_o *)local_128.fields._current;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).item);
      pUVar2 = UI_ElementFactory__InstantiateAndBind
                         ((__this->fields).SinglePanel,"Prefabs/Misc/SelectListButton",(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"ItemButton",(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_03 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar3,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Button);
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"DeleteButton",(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_100 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar3,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Button);
      if (__this_03 == (UnityEngine_UI_Button_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_03->fields).m_OnClick;
      __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (__this_04,(Il2CppObject *)__this_02,
                 (intptr_t)MethodInfo_UI_MapEditorAddComponentPanel_c__DisplayClass21_0_CreateList_b__0,
                 (MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_04,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Text",(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar4 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar3,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                (pUVar4,(__this_02->fields).item,(pUVar4->klass->vtable)._75_set_text.method);
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Text",(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar4 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar3,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      value_00 = (*(__this->klass->vtable)._36_get_ItemFontSize.methodPtr)
                           (__this,(__this->klass->vtable)._36_get_ItemFontSize.method);
      if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_UI_Text__set_fontSize(pUVar4,value_00,(MethodInfo *)0x0);
      pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      UI_UIManager__GetThemeColorBlock
                ((UnityEngine_UI_ColorBlock_o *)local_88,pSVar5,"ItemButton","",
                 "DefaultPanel",(MethodInfo *)0x0);
      local_a8[1].r = local_38;
      local_a8[1].g = fStack_34;
      local_a8[0].r = local_48.r;
      local_a8[0].g = local_48.g;
      local_a8[0].b = local_48.b;
      local_a8[0].a = local_48.a;
      local_b8.r = local_58.r;
      local_b8.g = local_58.g;
      local_b8.b = local_58.b;
      local_b8.a = local_58.a;
      local_c8.r = local_68.r;
      local_c8.g = local_68.g;
      local_c8.b = local_68.b;
      local_c8.a = local_68.a;
      local_d8 = (System_String_o *)local_88._16_8_;
      fStack_d0 = (float)local_88._24_4_;
      fStack_cc = (float)local_88._28_4_;
      local_e8 = (System_Collections_Generic_List_T__o *)local_88._0_8_;
      iStack_e0 = local_88._8_4_;
      iStack_dc = local_88._12_4_;
      value.fields.m_NormalColor.fields.b = (float)local_88._8_4_;
      value.fields.m_NormalColor.fields.a = (float)local_88._12_4_;
      value.fields.m_NormalColor.fields.r = (float)local_88._0_4_;
      value.fields.m_NormalColor.fields.g = (float)local_88._4_4_;
      value.fields.m_HighlightedColor.fields.r = (float)local_88._16_4_;
      value.fields.m_HighlightedColor.fields.g = (float)local_88._20_4_;
      value.fields.m_HighlightedColor.fields.b = (float)local_88._24_4_;
      value.fields.m_HighlightedColor.fields.a = (float)local_88._28_4_;
      value.fields.m_PressedColor.fields.r = local_68.r;
      value.fields.m_PressedColor.fields.g = local_68.g;
      value.fields.m_PressedColor.fields.b = local_68.b;
      value.fields.m_PressedColor.fields.a = local_68.a;
      value.fields.m_SelectedColor.fields.r = local_58.r;
      value.fields.m_SelectedColor.fields.g = local_58.g;
      value.fields.m_SelectedColor.fields.b = local_58.b;
      value.fields.m_SelectedColor.fields.a = local_58.a;
      value.fields.m_DisabledColor.fields.r = local_48.r;
      value.fields.m_DisabledColor.fields.g = local_48.g;
      value.fields.m_DisabledColor.fields.b = local_48.b;
      value.fields.m_DisabledColor.fields.a = local_48.a;
      value.fields.m_ColorMultiplier = local_38;
      value.fields.m_FadeDuration = fStack_34;
      UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)__this_03,value,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Text",(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar4 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar3,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_01 = local_100;
      UVar9 = UI_UIManager__GetThemeColor
                        (pSVar5,"ItemButton","TextColor","DefaultPanel",
                         (MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                (pUVar4,UVar9,(pUVar4->klass->vtable)._23_set_color.method);
      pUVar6 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this_03,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
      fVar7 = (*(__this->klass->vtable)._35_get_ItemButtonWidth.methodPtr)
                        (__this,(__this->klass->vtable)._35_get_ItemButtonWidth.method);
      fVar8 = (*(__this->klass->vtable)._37_get_DeleteButtonSize.methodPtr)
                        (__this,(__this->klass->vtable)._37_get_DeleteButtonSize.method);
      if (pUVar6 == (UnityEngine_UI_LayoutElement_o *)0x0) {
label_05d5cf5f:
        ThrowNullReferenceException();
      }
      (*(pUVar6->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar6,fVar7 + fVar8 + 10.0,(pUVar6->klass->vtable)._36_set_preferredWidth.method);
      if (__this_01 == (UnityEngine_UI_Button_o *)0x0) goto label_05d5cf5f;
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&local_128,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    pUVar2 = (__this->fields)._noItemsLabel;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar2,(local_108->fields)._size < 1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPanel$$OnItemClick
// il2cpp: void UI_MapEditorAddComponentPanel__OnItemClick (UI_MapEditorAddComponentPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d5d820

void UI_MapEditorAddComponentPanel__OnItemClick
               (UI_MapEditorAddComponentPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_BasePanel_o *pUVar2;
  System_Collections_Generic_Dictionary_string__Type__o *__this_00;
  UnityEngine_UI_RawImage_o *pUVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (Il2CppMethodInitialized_07547f5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorAddComponentPopup);
    Il2CppMethodInitialized_07547f5d = '\x01';
  }
  pUVar2 = (__this->fields).Parent;
  if (pUVar2 != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorAddComponentPopup->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorAddComponentPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
    if (Il2CppMethodInitialized_07547f65 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
      Il2CppMethodInitialized_07547f65 = '\x01';
    }
    __this_00 = (*(uint64_t *)((char *)pUVar2 + 0xb8));
    if (__this_00 != (System_Collections_Generic_Dictionary_string__Type__o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)name,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar3 = (*(uint64_t *)((char *)pUVar2 + 0xc0));
      if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
        uVar4._0_4_ = (pUVar3->fields).m_Color.fields.r;
        uVar4._4_4_ = (pUVar3->fields).m_Color.fields.g;
        uVar5._0_4_ = (pUVar3->fields).m_RaycastPadding.fields.y;
        uVar5._4_4_ = (pUVar3->fields).m_RaycastPadding.fields.z;
        (*(code *)(pUVar3->fields).m_CancellationTokenSource)(uVar5,uVar4);
        (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPanel$$.ctor
// il2cpp: void UI_MapEditorAddComponentPanel___ctor (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x5d5d980

void UI_MapEditorAddComponentPanel___ctor(UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_07547f5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_07547f5e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._itemButtons = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._itemButtons);
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


