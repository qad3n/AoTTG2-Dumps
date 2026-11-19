// Type: UI.MapEditorAddVariantPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/MapEditorAddVariantPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddVariantPopup.cs
// --------------------------------

// UI.MapEditorAddVariantPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_MapEditorAddVariantPopup___c__DisplayClass21_0___ctor (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x5d61fd0

void UI_MapEditorAddVariantPopup___c__DisplayClass21_0___ctor
               (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddVariantPopup.<>c__DisplayClass21_0$$<CreateRow>b__0
// il2cpp: void UI_MapEditorAddVariantPopup___c__DisplayClass21_0___CreateRow_b__0 (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x5d62310

void UI_MapEditorAddVariantPopup___c__DisplayClass21_0___CreateRow_b__0
               (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_MapEditorAddVariantPopup_o *pUVar1;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (UI_MapEditorAddVariantPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._63_OnSelectObject.methodPtr)
            (pUVar1,(__this->fields).item,(pUVar1->klass->vtable)._63_OnSelectObject.method);
  return;
}


// UI.MapEditorAddVariantPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorAddVariantPopup__get_Title (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x5d61550

System_String_o *
UI_MapEditorAddVariantPopup__get_Title(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547f79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"AddVariant");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547f79 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MapEditor","AddVariant","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorAddVariantPopup$$get_Width
// il2cpp: float UI_MapEditorAddVariantPopup__get_Width (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x5d615f0

float UI_MapEditorAddVariantPopup__get_Width(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 1155.0;
}


// UI.MapEditorAddVariantPopup$$get_Height
// il2cpp: float UI_MapEditorAddVariantPopup__get_Height (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x5d61600

float UI_MapEditorAddVariantPopup__get_Height(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 865.0;
}


// UI.MapEditorAddVariantPopup$$get_TopBarHeight
// il2cpp: float UI_MapEditorAddVariantPopup__get_TopBarHeight (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x5d61610

float UI_MapEditorAddVariantPopup__get_TopBarHeight(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.MapEditorAddVariantPopup$$get_ScrollBar
// il2cpp: bool UI_MapEditorAddVariantPopup__get_ScrollBar (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x5d61620

bool UI_MapEditorAddVariantPopup__get_ScrollBar(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorAddVariantPopup$$get_VerticalSpacing
// il2cpp: float UI_MapEditorAddVariantPopup__get_VerticalSpacing (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x5d61630

float UI_MapEditorAddVariantPopup__get_VerticalSpacing
                (UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 12.0;
}


// UI.MapEditorAddVariantPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorAddVariantPopup__get_HorizontalPadding (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x5d61640

int32_t UI_MapEditorAddVariantPopup__get_HorizontalPadding
                  (UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.MapEditorAddVariantPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorAddVariantPopup__get_VerticalPadding (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x5d61650

int32_t UI_MapEditorAddVariantPopup__get_VerticalPadding
                  (UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.MapEditorAddVariantPopup$$Setup
// il2cpp: void UI_MapEditorAddVariantPopup__Setup (UI_MapEditorAddVariantPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d61660

void UI_MapEditorAddVariantPopup__Setup
               (UI_MapEditorAddVariantPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_07547f7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorAddVariantPopup_Setup_b__18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547f7a = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,70.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_01,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorAddVariantPopup_Setup_b__18_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddVariantPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapEditorAddVariantPopup__OnBottomBarButtonClick (UI_MapEditorAddVariantPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d61790

void UI_MapEditorAddVariantPopup__OnBottomBarButtonClick
               (UI_MapEditorAddVariantPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  UI_TooltipPopup_o *pUVar3;
  
  if (Il2CppMethodInitialized_07547f7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547f7b = '\x01';
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar2 != (UI_BaseMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar3 = (*(uint64_t *)((char *)pUVar2 + 0xc0));
    if (pUVar3 != (UI_TooltipPopup_o *)0x0) {
      (*(pUVar3->klass->vtable)._21_Show.methodPtr)(pUVar3,(pUVar3->klass->vtable)._21_Show.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddVariantPopup$$Show
// il2cpp: void UI_MapEditorAddVariantPopup__Show (UI_MapEditorAddVariantPopup_o* __this, System_String_o* prefab, const MethodInfo* method);
// 0x5d5fb10
// eh: try 0x5d5fca0..0x5d5fecd -> pad 0x5d5ff4c (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d5ff1d..0x5d5ff22 -> pad 0x5d5ff3d cleanup
// eh: try 0x5d5ff40..0x5d5ff4a -> pad 0x5d5ffa3 catch (...) [compiler noexcept guard]
// eh: try 0x5d5ff64..0x5d5ff69 -> pad 0x5d5ff8e cleanup
// eh: try 0x5d5ff91..0x5d5ff9b -> pad 0x5d5ffa3 catch (...) [compiler noexcept guard]
// asm: 46 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5fd96: jmp 0x5d5fdc5
// asm:   0x5d5fead: nop dword ptr [rax]
// asm:   0x5d5ff01: jmp 0x5d5ff05
// asm:   0x5d5ff03: jmp 0x5d5ff4c
// asm:   0x5d5ff05: mov r15, rax
// asm:   0x5d5ff08: cmp edx, 1
// asm:   0x5d5ff0b: jne 0x5d5ff40
// asm:   0x5d5ff0d: mov rdi, r15
// asm:   0x5d5ff10: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d5ff15: mov rbx, qword ptr [rax]
// asm:   0x5d5ff18: mov qword ptr [rsp + 8], rbx
// asm:   0x5d5ff1d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d5ff22: lea rax, [rip + 0x152d507]  ; MethodInfo_System_Collections_Generic_List_Enumerator_List_string_Dispose
// asm:   0x5d5ff29: mov rsi, qword ptr [rax]
// asm:   0x5d5ff2c: lea rdi, [rsp + 0x40]
// asm:   0x5d5ff31: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d5ff36: test rbx, rbx
// asm:   0x5d5ff39: je 0x5d5fee3
// asm:   0x5d5ff3b: jmp 0x5d5ff86
// asm:   0x5d5ff3d: mov r15, rax
// asm:   0x5d5ff40: lea rdi, [rsp + 8]
// asm:   0x5d5ff45: call 0x2fdce40  ; il2cpp_runtime_helper_02fdce40()
// asm:   0x5d5ff4a: jmp 0x5d5ff9b
// asm:   0x5d5ff4c: mov r15, rax
// asm:   0x5d5ff4f: cmp edx, 1
// asm:   0x5d5ff52: jne 0x5d5ff91
// asm:   0x5d5ff54: mov rdi, r15
// asm:   0x5d5ff57: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d5ff5c: mov rbx, qword ptr [rax]
// asm:   0x5d5ff5f: mov qword ptr [rsp + 8], rbx
// asm:   0x5d5ff64: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d5ff69: lea rax, [rip + 0x152de08]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5d5ff70: mov rsi, qword ptr [rax]
// asm:   0x5d5ff73: lea rdi, [rsp + 0x20]
// asm:   0x5d5ff78: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d5ff7d: test rbx, rbx
// asm:   0x5d5ff80: je 0x5d5fce7
// asm:   0x5d5ff86: mov rdi, rbx
// asm:   0x5d5ff89: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d5ff8e: mov r15, rax
// asm:   0x5d5ff91: lea rdi, [rsp + 8]
// asm:   0x5d5ff96: call 0x2fdce10  ; il2cpp_runtime_helper_02fdce10()
// asm:   0x5d5ff9b: mov rdi, r15
// asm:   0x5d5ff9e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d5ffa3: mov rdi, rax
// asm:   0x5d5ffa6: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorAddVariantPopup__Show
               (UI_MapEditorAddVariantPopup_o *__this,System_String_o *prefab,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  uint32_t uVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  System_String_array *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  MethodInfo *pMVar7;
  UnityEngine_Object_o *obj;
  bool bVar8;
  System_Collections_Generic_List_string__o *__this_00;
  Il2CppObject *collection;
  System_Collections_Generic_List_List_T___o *__this_01;
  MethodInfo *method_00;
  undefined1 local_80 [16];
  UnityEngine_Object_o *local_70;
  undefined1 local_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  UnityEngine_Object_o *local_58;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_07547f7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_List_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_List_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_List_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_GroupItems_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547f7c = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_58 = (UnityEngine_Object_o *)0x0;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields)._rows;
  if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
               (System_Collections_Generic_List_object__o *)pSVar4,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_58 = local_70;
    local_68 = (undefined1  [8])local_80._0_8_;
    pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_80._8_8_;
    local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
    while (bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
          obj = local_58, bVar8) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose)
    ;
    pSVar4 = (__this->fields)._rows;
    if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_00->fields)._items;
        if (pSVar5 != (System_String_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = prefab;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
            uVar3 = (TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)prefab,
                       (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
            uVar3 = (TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor;
          }
          if (uVar3 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
          }
          pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants;
          if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                              (pSVar6,(Il2CppObject *)prefab,
                               (MethodInfo_4AAD6F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey
                              );
            if (bVar8) {
              if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
              }
              pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants;
              if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d5fefc;
              collection = System_Collections_Generic_Dictionary_object__object___get_Item
                                     (pSVar6,(Il2CppObject *)prefab,
                                      (MethodInfo_4AAD450 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_List_string_get_Item
                                     );
              System_Collections_Generic_List_object___AddRange
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (System_Collections_Generic_IEnumerable_T__o *)collection,
                         (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
            }
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
            }
            __this_01 = Utility_Util__GroupItems_object_
                                  ((System_Collections_Generic_List_T__o *)__this_00,8,
                                   (MethodInfo_377D5D0 *)MethodInfo_Utility_Util_GroupItems_string);
            if (__this_01 != (System_Collections_Generic_List_List_T___o *)0x0) {
              System_Collections_Generic_List_object___GetEnumerator
                        (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
                         (MethodInfo_395E050 *)
                         MethodInfo_System_Collections_Generic_List_List_string_GetEnumerator);
              local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
              local_80._8_8_ = &local_48;
              while (bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                       ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                                        (MethodInfo_4C45C50 *)
                                        MethodInfo_System_Collections_Generic_List_Enumerator_List_string_MoveNext
                                       ), bVar8) {
                UI_MapEditorAddVariantPopup__CreateRow
                          (__this,(System_Collections_Generic_List_string__o *)local_48.fields._current,
                           method_00);
              }
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                         (MethodInfo_4C45C40 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_List_string_Dispose);
              UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_05d5fefc:
  ThrowNullReferenceException();
}


// UI.MapEditorAddVariantPopup$$CreateRow
// il2cpp: void UI_MapEditorAddVariantPopup__CreateRow (UI_MapEditorAddVariantPopup_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x5d61850
// eh: try 0x5d61a2a..0x5d61f07 -> pad 0x5d61f61 (+51 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d61f83..0x5d61f88 -> pad 0x5d61fad cleanup
// eh: try 0x5d61fb0..0x5d61fba -> pad 0x5d61fc2 catch (...) [compiler noexcept guard]
// asm: 74 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d61a1d: nop dword ptr [rax]
// asm:   0x5d61f07: jmp 0x5d61f6b
// asm:   0x5d61f09: jmp 0x5d61f6b
// asm:   0x5d61f0b: jmp 0x5d61f6b
// asm:   0x5d61f0d: jmp 0x5d61f6b
// asm:   0x5d61f0f: jmp 0x5d61f6b
// asm:   0x5d61f11: jmp 0x5d61f6b
// asm:   0x5d61f13: jmp 0x5d61f6b
// asm:   0x5d61f15: jmp 0x5d61f6b
// asm:   0x5d61f17: jmp 0x5d61f6b
// asm:   0x5d61f19: jmp 0x5d61f6b
// asm:   0x5d61f1b: jmp 0x5d61f6b
// asm:   0x5d61f1d: jmp 0x5d61f6b
// asm:   0x5d61f1f: jmp 0x5d61f6b
// asm:   0x5d61f21: jmp 0x5d61f6b
// asm:   0x5d61f23: jmp 0x5d61f6b
// asm:   0x5d61f25: jmp 0x5d61f6b
// asm:   0x5d61f27: jmp 0x5d61f6b
// asm:   0x5d61f29: jmp 0x5d61f6b
// asm:   0x5d61f2b: jmp 0x5d61f6b
// asm:   0x5d61f2d: jmp 0x5d61f6b
// asm:   0x5d61f2f: jmp 0x5d61f6b
// asm:   0x5d61f31: jmp 0x5d61f6b
// asm:   0x5d61f33: jmp 0x5d61f6b
// asm:   0x5d61f35: jmp 0x5d61f6b
// asm:   0x5d61f37: jmp 0x5d61f6b
// asm:   0x5d61f39: jmp 0x5d61f6b
// asm:   0x5d61f3b: jmp 0x5d61f6b
// asm:   0x5d61f3d: jmp 0x5d61f6b
// asm:   0x5d61f3f: jmp 0x5d61f6b
// asm:   0x5d61f41: jmp 0x5d61f6b
// asm:   0x5d61f43: jmp 0x5d61f6b
// asm:   0x5d61f45: jmp 0x5d61f6b
// asm:   0x5d61f47: jmp 0x5d61f6b
// asm:   0x5d61f49: jmp 0x5d61f6b
// asm:   0x5d61f4b: jmp 0x5d61f6b
// asm:   0x5d61f4d: jmp 0x5d61f6b
// asm:   0x5d61f4f: jmp 0x5d61f6b
// asm:   0x5d61f51: jmp 0x5d61f6b
// asm:   0x5d61f53: jmp 0x5d61f6b
// asm:   0x5d61f55: jmp 0x5d61f6b
// asm:   0x5d61f57: jmp 0x5d61f6b
// asm:   0x5d61f59: jmp 0x5d61f6b
// asm:   0x5d61f5b: jmp 0x5d61f6b
// asm:   0x5d61f5d: jmp 0x5d61f6b
// asm:   0x5d61f5f: jmp 0x5d61f6b
// asm:   0x5d61f61: jmp 0x5d61f6b
// asm:   0x5d61f63: jmp 0x5d61f6b
// asm:   0x5d61f65: jmp 0x5d61f6b
// asm:   0x5d61f67: jmp 0x5d61f6b
// asm:   0x5d61f69: jmp 0x5d61f6b
// asm:   0x5d61f6b: mov rbx, rax
// asm:   0x5d61f6e: cmp edx, 1
// asm:   0x5d61f71: jne 0x5d61fb0
// asm:   0x5d61f73: mov rdi, rbx
// asm:   0x5d61f76: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d61f7b: mov rbx, qword ptr [rax]
// asm:   0x5d61f7e: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5d61f83: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d61f88: lea rax, [rip + 0x152cb69]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d61f8f: mov rsi, qword ptr [rax]
// asm:   0x5d61f92: lea rdi, [rsp + 0x10]
// asm:   0x5d61f97: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d61f9c: test rbx, rbx
// asm:   0x5d61f9f: je 0x5d61de4
// asm:   0x5d61fa5: mov rdi, rbx
// asm:   0x5d61fa8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d61fad: mov rbx, rax
// asm:   0x5d61fb0: lea rdi, [rsp + 0x30]
// asm:   0x5d61fb5: call 0x2fdce70  ; il2cpp_runtime_helper_02fdce70()
// asm:   0x5d61fba: mov rdi, rbx
// asm:   0x5d61fbd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d61fc2: mov rdi, rax
// asm:   0x5d61fc5: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorAddVariantPopup__CreateRow
               (UI_MapEditorAddVariantPopup_o *__this,System_Collections_Generic_List_string__o *items,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_String_o *path;
  System_Collections_Generic_List_GameObject__o *__this_01;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  UnityEngine_GameObject_o *__this_02;
  UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Button_o *pUVar8;
  UnityEngine_Events_UnityAction_o *__this_04;
  System_String_o *pSVar9;
  UnityEngine_Texture_o *value;
  UnityEngine_UI_RawImage_o *pUVar10;
  UnityEngine_UI_Text_o *pUVar11;
  UI_MapEditorAddVariantPopup___c__DisplayClass21_0_Fields *targetAddress;
  float spacing;
  UnityEngine_Color_o UVar12;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  System_String_o *local_58;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07547f7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorAddVariantPopup_c__DisplayClass21_0_CreateRow_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorAddVariantPopup_c__DisplayClass21_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/MapEditorObjectButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Previews/");
    Il2CppMethodInitialized_07547f7d = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (System_String_o *)0x0;
  pUVar7 = (__this->fields).SinglePanel;
  spacing = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                      (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
  __this_02 = UI_ElementFactory__CreateHorizontalGroup(pUVar7,spacing,3,(MethodInfo *)0x0);
  if (items != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)items,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_58 = local_38;
    local_68 = (undefined1  [8])local_48._0_8_;
    puStack_60 = (undefined1 *)local_48._8_8_;
    local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_48._8_8_ = local_68;
    if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
      if (bVar5) {
        pUVar6 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_UI_MapEditorAddVariantPopup_c__DisplayClass21_0);
        System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
        if (pUVar6 != (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o *)0x0) {
          (pUVar6->fields).__4__this = __this;
          Il2CppCodeGenWriteBarrier(&(pUVar6->fields).__4__this);
          (pUVar6->fields).item = local_58;
          Il2CppCodeGenWriteBarrier(&(pUVar6->fields).item);
          ThrowNullReferenceException();
        }
label_05d61ed8:
        ThrowNullReferenceException();
      }
    }
    else {
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        if (!bVar5) break;
        pUVar6 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_UI_MapEditorAddVariantPopup_c__DisplayClass21_0);
        System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
        if (pUVar6 == (UI_MapEditorAddVariantPopup___c__DisplayClass21_0_o *)0x0) goto label_05d61ed8;
        (pUVar6->fields).__4__this = __this;
        Il2CppCodeGenWriteBarrier(&(pUVar6->fields).__4__this);
        targetAddress = &pUVar6->fields;
        (pUVar6->fields).item = local_58;
        Il2CppCodeGenWriteBarrier(&targetAddress->item);
        pUVar7 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
        __this_03 = UI_ElementFactory__InstantiateAndBind(pUVar7,"Prefabs/Misc/MapEditorObjectButton",(MethodInfo *)0x0);
        if (__this_03 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar8 = UnityEngine_GameObject__GetComponent_object_
                           (__this_03,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
        if (pUVar8 == (UnityEngine_UI_Button_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar8->fields).m_OnClick;
        __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (__this_04,(Il2CppObject *)pUVar6,
                   (intptr_t)MethodInfo_UI_MapEditorAddVariantPopup_c__DisplayClass21_0_CreateRow_b__0,
                   (MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_04,(MethodInfo *)0x0);
        pSVar9 = (*(__this->klass->vtable)._62_GetPreviewName.methodPtr)
                           (__this,targetAddress->item,(__this->klass->vtable)._62_GetPreviewName.method);
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
        pSVar9 = System_String__Concat_52f0320("Previews/",pSVar9,(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        value = (UnityEngine_Texture_o *)
                ApplicationManagers_ResourceManager__LoadAsset(path,pSVar9,false,false,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          pUVar7 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = UnityEngine_Transform__Find(pUVar7,"Icon",(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar10 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar7,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
          if (pUVar10 == (UnityEngine_UI_RawImage_o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((value != (UnityEngine_Texture_o *)0x0) &&
             (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
            il2cpp_codegen_raise_invalid_cast_exception(value);
          }
          UnityEngine_UI_RawImage__set_texture(pUVar10,value,(MethodInfo *)0x0);
        }
        else {
          pUVar7 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = UnityEngine_Transform__Find(pUVar7,"Icon",(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar10 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar7,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
          if (pUVar10 == (UnityEngine_UI_RawImage_o *)0x0) {
            ThrowNullReferenceException();
          }
          UVar12.fields.b = 0.32;
          UVar12.fields.a = 1.0;
          UVar12.fields.r = 0.32;
          UVar12.fields.g = 0.32;
          (*(pUVar10->klass->vtable)._23_set_color.methodPtr)
                    (pUVar10,UVar12,(pUVar10->klass->vtable)._23_set_color.method);
        }
        pUVar7 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar7 = UnityEngine_Transform__Find(pUVar7,"Text",(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar11 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar7,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        if (pUVar11 == (UnityEngine_UI_Text_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(pUVar11->klass->vtable)._75_set_text.methodPtr)
                  (pUVar11,targetAddress->item,(pUVar11->klass->vtable)._75_set_text.method);
        pUVar7 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar7 = UnityEngine_Transform__Find(pUVar7,"Text",(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar11 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar7,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        UVar12 = UI_UIManager__GetThemeColor
                           ("DefaultPanel","DefaultLabel","TextColor",
                            "DefaultPanel",(MethodInfo *)0x0);
        if (pUVar11 == (UnityEngine_UI_Text_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                  (pUVar11,UVar12,(pUVar11->klass->vtable)._23_set_color.method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
    __this_01 = (__this->fields)._rows;
    if (__this_01 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_01->fields)._items;
      if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2] = __this_02;
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_02,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddVariantPopup$$GetPreviewName
// il2cpp: System_String_o* UI_MapEditorAddVariantPopup__GetPreviewName (UI_MapEditorAddVariantPopup_o* __this, System_String_o* item, const MethodInfo* method);
// 0x5d61fe0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d62013: jmp 0x5d620e4

System_String_o *
UI_MapEditorAddVariantPopup__GetPreviewName
          (UI_MapEditorAddVariantPopup_o *__this,System_String_o *item,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547f7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    Il2CppMethodInitialized_07547f7e = '\x01';
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) goto label_05d62062;
label_05d62003:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabPreviews;
  }
  else {
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor != 0) goto label_05d62003;
label_05d62062:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabPreviews;
  }
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05d620e4:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar1,(Il2CppObject *)item,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
  if (bVar2) {
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabPreviews;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d620e4;
    item = System_Collections_Generic_Dictionary_object__object___get_Item
                     (pSVar1,(Il2CppObject *)item,
                      (MethodInfo_4AAD450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
  }
  pSVar3 = System_String__Concat_52f0320(item,"Preview",(MethodInfo *)0x0);
  return pSVar3;
}


// UI.MapEditorAddVariantPopup$$OnSelectObject
// il2cpp: void UI_MapEditorAddVariantPopup__OnSelectObject (UI_MapEditorAddVariantPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d620f0

void UI_MapEditorAddVariantPopup__OnSelectObject
               (UI_MapEditorAddVariantPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  MapEditor_MapEditorBrush_o *pMVar2;
  UI_MapEditorMenu_o *__this_01;
  
  if (Il2CppMethodInitialized_07547f7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547f7f = '\x01';
  }
  __this_00 = (GameManagers_MapEditorGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    pMVar2 = (__this_00->fields).Brush;
    if ((pMVar2 == (MapEditor_MapEditorBrush_o *)0x0) || ((pMVar2->fields).AssetSelectMode == false)) {
      GameManagers_MapEditorGameManager__AddObject(__this_00,name,(MethodInfo *)0x0);
label_05d6222a:
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
    MapEditor_MapEditorBrush__AddEntry(pMVar2,name,(MethodInfo *)0x0);
    pMVar2 = (__this_00->fields).Brush;
    if (pMVar2 != (MapEditor_MapEditorBrush_o *)0x0) {
      (pMVar2->fields).AssetSelectMode = false;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      __this_01 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
        bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
        if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu
           )) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        UI_MapEditorMenu__SyncBrushPanel(__this_01,(MethodInfo *)0x0);
        goto label_05d6222a;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddVariantPopup$$.ctor
// il2cpp: void UI_MapEditorAddVariantPopup___ctor (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x5d62260

void UI_MapEditorAddVariantPopup___ctor(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_07547f80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_07547f80 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._rows = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rows);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddVariantPopup$$<Setup>b__18_0
// il2cpp: void UI_MapEditorAddVariantPopup___Setup_b__18_0 (UI_MapEditorAddVariantPopup_o* __this, const MethodInfo* method);
// 0x5d622e0

void UI_MapEditorAddVariantPopup___Setup_b__18_0(UI_MapEditorAddVariantPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547f81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547f81 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorAddVariantPopup__OnBottomBarButtonClick(__this,(System_String_o *)method,in_RDX);
  return;
}


