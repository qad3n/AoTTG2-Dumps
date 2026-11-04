// Type: UI.MapEditorAddComponentPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorAddComponentPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddComponentPanel.cs
// --------------------------------

// UI.MapEditorAddComponentPanel.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_MapEditorAddComponentPanel___c__DisplayClass21_0___ctor (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorAddComponentPanel___c__DisplayClass21_0___ctor(UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddComponentPanel.<>c__DisplayClass21_0$$<CreateList>b__0
// il2cpp: void UI_MapEditorAddComponentPanel___c__DisplayClass21_0___CreateList_b__0 (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1822b9020

void UI_MapEditorAddComponentPanel___c__DisplayClass21_0___CreateList_b__0
               (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_MapEditorAddComponentPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorAddComponentPanel_o *)0x0) {
    UI_MapEditorAddComponentPanel__OnItemClick(__this_00,(__this->fields).item,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorAddComponentPanel__get_ScrollBar (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MapEditorAddComponentPanel__get_ScrollBar(UI_MapEditorAddComponentPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MapEditorAddComponentPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorAddComponentPanel__get_HorizontalPadding (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
UI_MapEditorAddComponentPanel__get_HorizontalPadding(UI_MapEditorAddComponentPanel_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// UI.MapEditorAddComponentPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorAddComponentPanel__get_VerticalPadding (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x1808680a0

int32_t
UI_MapEditorAddComponentPanel__get_VerticalPadding(UI_MapEditorAddComponentPanel_o* __this, MethodInfo* method)

{
  return 5;
}


// UI.MapEditorAddComponentPanel$$get_ItemButtonWidth
// il2cpp: float UI_MapEditorAddComponentPanel__get_ItemButtonWidth (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x1821c2520

float UI_MapEditorAddComponentPanel__get_ItemButtonWidth
                (UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  return 450.0;
}


// UI.MapEditorAddComponentPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorAddComponentPanel__get_VerticalSpacing (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x1818b56e0

float
UI_MapEditorAddComponentPanel__get_VerticalSpacing(UI_MapEditorAddComponentPanel_o* __this, MethodInfo* method)

{
  return 5.0;
}


// UI.MapEditorAddComponentPanel$$get_ItemFontSize
// il2cpp: int32_t UI_MapEditorAddComponentPanel__get_ItemFontSize (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x18196d5e0

int32_t
UI_MapEditorAddComponentPanel__get_ItemFontSize(UI_MapEditorAddComponentPanel_o* __this, MethodInfo* method)

{
  return 0x12;
}


// UI.MapEditorAddComponentPanel$$get_DeleteButtonSize
// il2cpp: float UI_MapEditorAddComponentPanel__get_DeleteButtonSize (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_MapEditorAddComponentPanel__get_DeleteButtonSize(UI_MapEditorAddComponentPanel_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.MapEditorAddComponentPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_MapEditorAddComponentPanel__get_ThemePanel (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x182290ca0

System_String_o *
UI_MapEditorAddComponentPanel__get_ThemePanel(UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843474a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SelectListPopup");
    Il2CppMethodInitialized_1843474a0 = '\x01';
  }
  return "SelectListPopup";
}


// UI.MapEditorAddComponentPanel$$Setup
// il2cpp: void UI_MapEditorAddComponentPanel__Setup (UI_MapEditorAddComponentPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822909d0

void UI_MapEditorAddComponentPanel__Setup
               (UI_MapEditorAddComponentPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  System_String_o *a;
  UnityEngine_Transform_o *parent_00;
  GameManagers_BaseGameManager_o *pGVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar5;
  System_Collections_Generic_List_string__o *original;
  
  if (Il2CppMethodInitialized_1843474a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorAddComponentPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"No items found.");
    Il2CppMethodInitialized_1843474a1 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorAddComponentPopup->_2).typeHierarchyDepth;
    if (((parent->klass->_2).typeHierarchyDepth < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorAddComponentPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception(parent);
    }
    pSVar4 = UI_BasePanel__GetCurrentCategoryName(parent,(MethodInfo *)0x0);
    pUVar5 = (*(uint64_t *)((char *)parent + 0xa8));
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      a = (*(uint64_t *)((char *)pUVar5 + 0x20));
      parent_00 = (__this->fields).SinglePanel;
      themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
      pUVar5 = UI_ElementFactory__CreateDefaultLabel
                         (parent_00,__this_00,"No items found.",0,4,(MethodInfo *)0x0);
      (__this->fields)._noItemsLabel = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._noItemsLabel,pUVar5);
      pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
        bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
        if ((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
           ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
          if ((*(uint64_t *)((char *)pGVar2 + 0x30)) != (void *)0x0) {
            original = (*(__this->klass->vtable)._38_GetItems.methodPtr)
                                 (__this,pSVar4,(__this->klass->vtable)._38_GetItems.method);
            bVar3 = System_String__op_Inequality
                              (a,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0)
            ;
            if (bVar3) {
              original = UI_MapEditorAddComponentPanel__Filter(__this,original,a,(MethodInfo *)0x0);
            }
            UI_MapEditorAddComponentPanel__CreateList(__this,original,(MethodInfo *)0x0);
          }
          return;
        }
        il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPanel$$GetItems
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddComponentPanel__GetItems (UI_MapEditorAddComponentPanel_o* __this, System_String_o* category, const MethodInfo* method);
// 0x182290370
// eh: try 0x182290583..0x18229092c -> pad 0x183317f60 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 61 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182290617: mov rdx, qword ptr [rip + 0x1e072fa]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x18229061e: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x182290623: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182290628: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18229062d: test rcx, rcx
// asm:   0x182290630: jne 0x182290905
// asm:   0x182290636: mov rsi, qword ptr [rsp + 0x88]
// asm:   0x18229063e: mov rdi, qword ptr [rsp + 0x98]
// asm:   0x182290646: mov rbx, qword ptr [rsp + 0x20]
// asm:   0x182290736: mov rdx, qword ptr [rip + 0x1e071db]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x18229073d: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x182290742: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182290747: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18229074c: test rcx, rcx
// asm:   0x18229074f: jne 0x182290916
// asm:   0x182290755: mov rsi, qword ptr [rsp + 0x88]
// asm:   0x18229075d: mov rdi, qword ptr [rsp + 0x98]
// asm:   0x182290765: mov rbx, qword ptr [rsp + 0x20]
// asm:   0x1822908a6: mov rdx, qword ptr [rip + 0x1e0706b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x1822908ad: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1822908b2: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822908b7: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822908bc: test rcx, rcx
// asm:   0x1822908bf: jne 0x18229092c
// asm:   0x1822908c1: mov rdi, qword ptr [rsp + 0x98]
// asm:   0x182290905: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182290916: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18229092c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f65: push rbp
// asm:   0x183317f66: sub rsp, 0x20
// asm:   0x183317f6a: mov rbp, rdx
// asm:   0x183317f6d: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317f71: mov rcx, qword ptr [rax]
// asm:   0x183317f74: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317f78: movabs rax, 0
// asm:   0x183317f82: add rsp, 0x20
// asm:   0x183317f86: pop rbp
// asm:   0x183317f87: ret 
// asm:   0x183324010: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324015: push rbp
// asm:   0x183324016: sub rsp, 0x20
// asm:   0x18332401a: mov rbp, rdx
// asm:   0x18332401d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183324021: mov rcx, qword ptr [rax]
// asm:   0x183324024: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183324028: movabs rax, 0
// asm:   0x183324032: add rsp, 0x20
// asm:   0x183324036: pop rbp
// asm:   0x183324037: ret 
// asm:   0x183333520: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183333525: push rbp
// asm:   0x183333526: sub rsp, 0x20
// asm:   0x18333352a: mov rbp, rdx
// asm:   0x18333352d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183333531: mov rcx, qword ptr [rax]
// asm:   0x183333534: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183333538: movabs rax, 0
// asm:   0x183333542: add rsp, 0x20
// asm:   0x183333546: pop rbp
// asm:   0x183333547: ret 

System_Collections_Generic_List_string__o *
UI_MapEditorAddComponentPanel__GetItems
          (UI_MapEditorAddComponentPanel_o *__this,System_String_o *category,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  System_Collections_Generic_List_Enumerator_object__o local_20;
  
  if (Il2CppMethodInitialized_1843474a2 == '\0') {
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
    Il2CppMethodInitialized_1843474a2 = '\x01';
  }
  local_20.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_20.fields._index = 0;
  local_20.fields._version = 0;
  local_20.fields._current = (Il2CppObject *)0x0;
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
    }
    if ((*(uint64_t *)((char *)pGVar2 + 0x30)) != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      __this_01 = CustomLogic_CustomLogicEvaluator__GetComponentNames((*(uint64_t *)((char *)pGVar2 + 0x30)),(MethodInfo *)0x0);
      if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___Sort
                  ((System_Collections_Generic_List_object__o *)__this_01,
                   (MethodInfo_948480 *)MethodInfo_System_Collections_Generic_List_string_Sort);
        bVar5 = System_String__op_Equality(category,"All",(MethodInfo *)0x0);
        if (bVar5) {
          return __this_01;
        }
        bVar5 = System_String__op_Equality(category,"General",(MethodInfo *)0x0);
        if (bVar5) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                     (System_Collections_Generic_List_T__o *)__this_01,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
          local_20.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
          local_20.fields._index = local_38._8_4_;
          local_20.fields._version = local_38._12_4_;
          local_20.fields._current = local_28;
          local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_38._8_8_ = &local_20;
          while( true ) {
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (&local_20,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
            pIVar4 = local_20.fields._current;
            if (!bVar5) break;
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                     TypeInfo_CustomLogic_CustomLogicManager->static_fields->GeneralComponents;
            if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar5 = System_Collections_Generic_HashSet_object___Contains
                              (pSVar3,pIVar4,
                               (MethodInfo_1759E40 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
            if (bVar5) {
              if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                ThrowNullReferenceException();
              }
              il2cpp_runtime_helper_180012890(__this_00,pIVar4,MethodInfo_System_Collections_Generic_List_string_Add);
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_20,
                     MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
        }
        else {
          bVar5 = System_String__op_Equality(category,"Internal",(MethodInfo *)0x0);
          if (bVar5) {
            System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                       (System_Collections_Generic_List_T__o *)__this_01,
                       (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
            local_20.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
            local_20.fields._index = local_38._8_4_;
            local_20.fields._version = local_38._12_4_;
            local_20.fields._current = local_28;
            local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
            local_38._8_8_ = &local_20;
            while( true ) {
              bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (&local_20,
                                 (MethodInfo_153A2A0 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
              pIVar4 = local_20.fields._current;
              if (!bVar5) break;
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                       TypeInfo_CustomLogic_CustomLogicManager->static_fields->InternalComponents;
              if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar5 = System_Collections_Generic_HashSet_object___Contains
                                (pSVar3,pIVar4,
                                 (MethodInfo_1759E40 *)
                                 MethodInfo_System_Collections_Generic_HashSet_string_Contains);
              if (bVar5) {
                if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                  ThrowNullReferenceException();
                }
                il2cpp_runtime_helper_180012890(__this_00,pIVar4,MethodInfo_System_Collections_Generic_List_string_Add);
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_20,
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
          }
          else {
            bVar5 = System_String__op_Equality(category,"Custom",(MethodInfo *)0x0);
            if (bVar5) {
              System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                         (System_Collections_Generic_List_T__o *)__this_01,
                         (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator)
              ;
              local_20.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
              local_20.fields._index = local_38._8_4_;
              local_20.fields._version = local_38._12_4_;
              local_20.fields._current = local_28;
              local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
              local_38._8_8_ = &local_20;
              while( true ) {
                bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (&local_20,
                                   (MethodInfo_153A2A0 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
                pIVar4 = local_20.fields._current;
                if (!bVar5) break;
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                }
                pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                         TypeInfo_CustomLogic_CustomLogicManager->static_fields->InternalComponents;
                if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar5 = System_Collections_Generic_HashSet_object___Contains
                                  (pSVar3,pIVar4,
                                   (MethodInfo_1759E40 *)
                                   MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                if (!bVar5) {
                  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                  }
                  pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                           TypeInfo_CustomLogic_CustomLogicManager->static_fields->GeneralComponents;
                  if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar5 = System_Collections_Generic_HashSet_object___Contains
                                    (pSVar3,pIVar4,
                                     (MethodInfo_1759E40 *)
                                     MethodInfo_System_Collections_Generic_HashSet_string_Contains);
                  if (!bVar5) {
                    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    il2cpp_runtime_helper_180012890(__this_00,pIVar4,MethodInfo_System_Collections_Generic_List_string_Add);
                  }
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_20,
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
            }
          }
        }
        return __this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPanel$$Filter
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddComponentPanel__Filter (UI_MapEditorAddComponentPanel_o* __this, System_Collections_Generic_List_string__o* original, System_String_o* search, const MethodInfo* method);
// 0x182290170
// eh: try 0x1822902a0..0x18229035c -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182290299: nop dword ptr [rax]
// asm:   0x18229030e: mov rdx, qword ptr [rip + 0x1e07603]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x182290315: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18229031a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18229031f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182290324: test rcx, rcx
// asm:   0x182290327: jne 0x18229035c
// asm:   0x182290329: mov rsi, qword ptr [rsp + 0xa0]
// asm:   0x18229035c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_Collections_Generic_List_string__o *
UI_MapEditorAddComponentPanel__Filter
          (UI_MapEditorAddComponentPanel_o *__this,System_Collections_Generic_List_string__o *original,
          System_String_o *search,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *value;
  System_String_o *__this_01;
  undefined1 local_60 [16];
  System_String_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_1843474a3 == '\0') {
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
    Il2CppMethodInitialized_1843474a3 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  bVar2 = System_String__op_Equality
                    (search,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (!bVar2) {
    if (search != (System_String_o *)0x0) {
      value = System_String__ToLower(search,(MethodInfo *)0x0);
      if (original != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                   (System_Collections_Generic_List_T__o *)original,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
        local_48.fields._index = local_60._8_4_;
        local_48.fields._version = local_60._12_4_;
        local_48.fields._current = (Il2CppObject *)local_50;
        local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_60._8_8_ = &local_48;
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_48,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
          pIVar1 = local_48.fields._current;
          if (!bVar2) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
            return __this_00;
          }
          if ((System_String_o *)local_48.fields._current == (System_String_o *)0x0) break;
          __this_01 = System_String__ToLower((System_String_o *)local_48.fields._current,(MethodInfo *)0x0);
          if (__this_01 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar2 = System_String__Contains(__this_01,value,(MethodInfo *)0x0);
          if (bVar2) {
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(__this_00,pIVar1);
          }
        }
        ThrowNullReferenceException();
      }
    }
    ThrowNullReferenceException();
  }
  return original;
}


// UI.MapEditorAddComponentPanel$$CreateList
// il2cpp: void UI_MapEditorAddComponentPanel__CreateList (UI_MapEditorAddComponentPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x18228fae0
// eh: try 0x18228fc61..0x18229016a -> pad 0x183338370 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18228fc69: nop dword ptr [rax]
// asm:   0x18229008b: mov rdx, qword ptr [rip + 0x1e07886]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x182290092: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182290097: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18229009c: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822900a1: test rcx, rcx
// asm:   0x1822900a4: jne 0x18229016a
// asm:   0x1822900aa: mov rsi, qword ptr [rsp + 0x1b8]
// asm:   0x1822900fa: xor edx, edx
// asm:   0x1822900fc: jmp 0x1822900ce
// asm:   0x18229016a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183338370: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183338375: push rbp
// asm:   0x183338376: sub rsp, 0x30
// asm:   0x18333837a: mov rbp, rdx
// asm:   0x18333837d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x183338381: mov rcx, qword ptr [rax]
// asm:   0x183338384: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183338388: movabs rax, 0
// asm:   0x183338392: add rsp, 0x30
// asm:   0x183338396: pop rbp
// asm:   0x183338397: ret 

void UI_MapEditorAddComponentPanel__CreateList
               (UI_MapEditorAddComponentPanel_o *__this,System_Collections_Generic_List_string__o *items,
               MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  bool bVar1;
  int32_t value;
  UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o *object;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_UI_Button_o *__this_02;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_UI_Text_o *pUVar4;
  System_String_o *pSVar5;
  UnityEngine_UI_ColorBlock_o *pUVar6;
  UnityEngine_Color_o *pUVar7;
  UnityEngine_UI_LayoutElement_o *pUVar8;
  float fVar9;
  float fVar10;
  System_Collections_Generic_List_Enumerator_object__o local_158;
  System_Collections_Generic_List_Enumerator_T__o local_140;
  UnityEngine_Color_Fields local_118;
  UnityEngine_UI_ColorBlock_o local_108;
  UnityEngine_UI_ColorBlock_o local_a8;
  
  if (Il2CppMethodInitialized_1843474a4 == '\0') {
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
    Il2CppMethodInitialized_1843474a4 = '\x01';
  }
  local_158.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_158.fields._index = 0;
  local_158.fields._version = 0;
  local_158.fields._current = (Il2CppObject *)0x0;
  if (items != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_140,(System_Collections_Generic_List_T__o *)items,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_158.fields._list = local_140.fields._list;
    local_158.fields._index = local_140.fields._index;
    local_158.fields._version = local_140.fields._version;
    local_158.fields._current = local_140.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_158,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext), bVar1) {
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_UI_MapEditorAddComponentPanel_c__DisplayClass21_0);
      UI_MapEditorAddComponentPanel___c__DisplayClass21_0___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
      if (object == (UI_MapEditorAddComponentPanel___c__DisplayClass21_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      (object->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
      (object->fields).item = (System_String_o *)local_158.fields._current;
      Il2CppCodeGenWriteBarrier(&(object->fields).item,local_158.fields._current);
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
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar3,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Button);
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"DeleteButton",(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_02 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar3,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Button);
      if (__this_01 == (UnityEngine_UI_Button_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_01->fields).m_OnClick;
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_03,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MapEditorAddComponentPanel_c__DisplayClass21_0_CreateList_b__0,
                 (MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_03,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Text",(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar4 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar3,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pUVar4->klass->vtable)._75_set_text.methodPtr)
                (pUVar4,(object->fields).item,(pUVar4->klass->vtable)._75_set_text.method);
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Text",(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar4 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar3,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      value = (*(__this->klass->vtable)._36_get_ItemFontSize.methodPtr)
                        (__this,(__this->klass->vtable)._36_get_ItemFontSize.method);
      if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_UI_Text__set_fontSize(pUVar4,value,(MethodInfo *)0x0);
      pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar6 = UI_UIManager__GetThemeColorBlock
                         (&local_a8,pSVar5,"ItemButton","","DefaultPanel",
                          (MethodInfo *)0x0);
      local_108.fields.m_NormalColor.fields.r = (pUVar6->fields).m_NormalColor.fields.r;
      local_108.fields.m_NormalColor.fields.g = (pUVar6->fields).m_NormalColor.fields.g;
      local_108.fields.m_NormalColor.fields.b = (pUVar6->fields).m_NormalColor.fields.b;
      local_108.fields.m_NormalColor.fields.a = (pUVar6->fields).m_NormalColor.fields.a;
      local_108.fields.m_HighlightedColor.fields.r = (pUVar6->fields).m_HighlightedColor.fields.r;
      local_108.fields.m_HighlightedColor.fields.g = (pUVar6->fields).m_HighlightedColor.fields.g;
      local_108.fields.m_HighlightedColor.fields.b = (pUVar6->fields).m_HighlightedColor.fields.b;
      local_108.fields.m_HighlightedColor.fields.a = (pUVar6->fields).m_HighlightedColor.fields.a;
      local_108.fields.m_PressedColor.fields.r = (pUVar6->fields).m_PressedColor.fields.r;
      local_108.fields.m_PressedColor.fields.g = (pUVar6->fields).m_PressedColor.fields.g;
      local_108.fields.m_PressedColor.fields.b = (pUVar6->fields).m_PressedColor.fields.b;
      local_108.fields.m_PressedColor.fields.a = (pUVar6->fields).m_PressedColor.fields.a;
      local_108.fields.m_SelectedColor.fields.r = (pUVar6->fields).m_SelectedColor.fields.r;
      local_108.fields.m_SelectedColor.fields.g = (pUVar6->fields).m_SelectedColor.fields.g;
      local_108.fields.m_SelectedColor.fields.b = (pUVar6->fields).m_SelectedColor.fields.b;
      local_108.fields.m_SelectedColor.fields.a = (pUVar6->fields).m_SelectedColor.fields.a;
      local_108.fields.m_DisabledColor.fields.r = (pUVar6->fields).m_DisabledColor.fields.r;
      local_108.fields.m_DisabledColor.fields.g = (pUVar6->fields).m_DisabledColor.fields.g;
      local_108.fields.m_DisabledColor.fields.b = (pUVar6->fields).m_DisabledColor.fields.b;
      local_108.fields.m_DisabledColor.fields.a = (pUVar6->fields).m_DisabledColor.fields.a;
      local_108.fields.m_ColorMultiplier = (pUVar6->fields).m_ColorMultiplier;
      local_108.fields.m_FadeDuration = (pUVar6->fields).m_FadeDuration;
      UnityEngine_UI_Selectable__set_colors
                ((UnityEngine_UI_Selectable_o *)__this_01,&local_108,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Text",(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar4 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar3,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pUVar7 = UI_UIManager__GetThemeColor
                         ((UnityEngine_Color_o *)&local_140,pSVar5,"ItemButton","TextColor"
                          ,"DefaultPanel",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_118.r = (pUVar7->fields).r;
      local_118.g = (pUVar7->fields).g;
      local_118.b = (pUVar7->fields).b;
      local_118.a = (pUVar7->fields).a;
      (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                (pUVar4,(UnityEngine_Color_o *)&local_118,(pUVar4->klass->vtable)._23_set_color.method);
      pUVar8 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)__this_01,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
      fVar9 = (*(__this->klass->vtable)._35_get_ItemButtonWidth.methodPtr)
                        (__this,(__this->klass->vtable)._35_get_ItemButtonWidth.method);
      fVar10 = (*(__this->klass->vtable)._37_get_DeleteButtonSize.methodPtr)
                         (__this,(__this->klass->vtable)._37_get_DeleteButtonSize.method);
      if (pUVar8 == (UnityEngine_UI_LayoutElement_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pUVar8->klass->vtable)._36_set_preferredWidth.methodPtr)
                (pUVar8,fVar10 + fVar9 + 10.0,(pUVar8->klass->vtable)._36_set_preferredWidth.method);
      if (__this_02 == (UnityEngine_UI_Button_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_158,
               MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    pUVar2 = (__this->fields)._noItemsLabel;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar2,(items->fields)._size < 1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPanel$$OnItemClick
// il2cpp: void UI_MapEditorAddComponentPanel__OnItemClick (UI_MapEditorAddComponentPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182290940

void UI_MapEditorAddComponentPanel__OnItemClick
               (UI_MapEditorAddComponentPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_MapEditorAddComponentPopup_o *__this_00;
  
  if (Il2CppMethodInitialized_1843474a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorAddComponentPopup);
    Il2CppMethodInitialized_1843474a5 = '\x01';
  }
  __this_00 = (UI_MapEditorAddComponentPopup_o *)(__this->fields).Parent;
  if (__this_00 != (UI_MapEditorAddComponentPopup_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorAddComponentPopup->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UI_MapEditorAddComponentPopup)) {
      UI_MapEditorAddComponentPopup__OnSelectItem(__this_00,name,(MethodInfo *)0x0);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_MapEditorAddComponentPopup);
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddComponentPanel$$.ctor
// il2cpp: void UI_MapEditorAddComponentPanel___ctor (UI_MapEditorAddComponentPanel_o* __this, const MethodInfo* method);
// 0x182290c20

void UI_MapEditorAddComponentPanel___ctor(UI_MapEditorAddComponentPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_1843474a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_1843474a6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._itemButtons = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._itemButtons,__this_00);
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


