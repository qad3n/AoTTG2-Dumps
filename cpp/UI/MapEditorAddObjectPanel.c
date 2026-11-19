// Type: UI.MapEditorAddObjectPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorAddObjectPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddObjectPanel.cs
// --------------------------------

// UI.MapEditorAddObjectPanel.<>c$$.cctor
// il2cpp: void UI_MapEditorAddObjectPanel___c___cctor (const MethodInfo* method);
// 0x5d5ffc0

void UI_MapEditorAddObjectPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547f6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorAddObjectPanel_c);
    Il2CppMethodInitialized_07547f6f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorAddObjectPanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_MapEditorAddObjectPanel_c->static_fields->__9 = (UI_MapEditorAddObjectPanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorAddObjectPanel_c->static_fields->__9);
  return;
}


// UI.MapEditorAddObjectPanel.<>c$$.ctor
// il2cpp: void UI_MapEditorAddObjectPanel___c___ctor (UI_MapEditorAddObjectPanel___c_o* __this, const MethodInfo* method);
// 0x5d60030

void UI_MapEditorAddObjectPanel___c___ctor(UI_MapEditorAddObjectPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPanel.<>c$$<GetItems>b__10_0
// il2cpp: System_String_o* UI_MapEditorAddObjectPanel___c___GetItems_b__10_0 (UI_MapEditorAddObjectPanel___c_o* __this, Map_MapScriptBaseObject_o* x, const MethodInfo* method);
// 0x5d60040

System_String_o *
UI_MapEditorAddObjectPanel___c___GetItems_b__10_0
          (UI_MapEditorAddObjectPanel___c_o *__this,Map_MapScriptBaseObject_o *x,MethodInfo *method)

{
  if (x == (Map_MapScriptBaseObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (x->fields).Name;
}


// UI.MapEditorAddObjectPanel.<>c__DisplayClass13_0$$.ctor
// il2cpp: void UI_MapEditorAddObjectPanel___c__DisplayClass13_0___ctor (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x5d5f720

void UI_MapEditorAddObjectPanel___c__DisplayClass13_0___ctor
               (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPanel.<>c__DisplayClass13_0$$<CreateRow>b__0
// il2cpp: void UI_MapEditorAddObjectPanel___c__DisplayClass13_0___CreateRow_b__0 (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x5d60060

void UI_MapEditorAddObjectPanel___c__DisplayClass13_0___CreateRow_b__0
               (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o *__this,MethodInfo *method)

{
  UI_MapEditorAddObjectPanel_o *pUVar1;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (UI_MapEditorAddObjectPanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._37_OnSelectObject.methodPtr)
            (pUVar1,(__this->fields).item,(pUVar1->klass->vtable)._37_OnSelectObject.method);
  return;
}


// UI.MapEditorAddObjectPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorAddObjectPanel__get_ScrollBar (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x5d5e4f0

bool UI_MapEditorAddObjectPanel__get_ScrollBar(UI_MapEditorAddObjectPanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorAddObjectPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorAddObjectPanel__get_VerticalSpacing (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x5d5e500

float UI_MapEditorAddObjectPanel__get_VerticalSpacing(UI_MapEditorAddObjectPanel_o *__this,MethodInfo *method)

{
  return 12.0;
}


// UI.MapEditorAddObjectPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorAddObjectPanel__get_HorizontalPadding (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x5d5e510

int32_t UI_MapEditorAddObjectPanel__get_HorizontalPadding
                  (UI_MapEditorAddObjectPanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.MapEditorAddObjectPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorAddObjectPanel__get_VerticalPadding (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x5d5e520

int32_t UI_MapEditorAddObjectPanel__get_VerticalPadding
                  (UI_MapEditorAddObjectPanel_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.MapEditorAddObjectPanel$$Setup
// il2cpp: void UI_MapEditorAddObjectPanel__Setup (UI_MapEditorAddObjectPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d5e530
// eh: try 0x5d5e6e3..0x5d5e6fc -> pad 0x5d5e729 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d5e741..0x5d5e746 -> pad 0x5d5e765 cleanup
// eh: try 0x5d5e768..0x5d5e772 -> pad 0x5d5e77a catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5e727: jmp 0x5d5e729
// asm:   0x5d5e729: mov rbx, rax
// asm:   0x5d5e72c: cmp edx, 1
// asm:   0x5d5e72f: jne 0x5d5e768
// asm:   0x5d5e731: mov rdi, rbx
// asm:   0x5d5e734: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d5e739: mov rbx, qword ptr [rax]
// asm:   0x5d5e73c: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d5e741: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d5e746: lea rax, [rip + 0x152ece3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_List_string_Dispose
// asm:   0x5d5e74d: mov rsi, qword ptr [rax]
// asm:   0x5d5e750: mov rdi, rsp
// asm:   0x5d5e753: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d5e758: test rbx, rbx
// asm:   0x5d5e75b: je 0x5d5e710
// asm:   0x5d5e75d: mov rdi, rbx
// asm:   0x5d5e760: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d5e765: mov rbx, rax
// asm:   0x5d5e768: lea rdi, [rsp + 0x20]
// asm:   0x5d5e76d: call 0x2fdccc0  ; il2cpp_runtime_helper_02fdccc0()
// asm:   0x5d5e772: mov rdi, rbx
// asm:   0x5d5e775: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d5e77a: mov rdi, rax
// asm:   0x5d5e77d: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorAddObjectPanel__Setup
               (UI_MapEditorAddObjectPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UI_MapEditorAddObjectPanel_o *a;
  bool bVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_List_string__o *original;
  System_Collections_Generic_List_List_T___o *__this_00;
  UI_MapEditorAddObjectPanel_c *method_00;
  MethodInfo *method_01;
  UI_MapEditorAddObjectPanel_o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  if (Il2CppMethodInitialized_07547f68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_List_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_List_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_List_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorAddObjectPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_GroupItems_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547f68 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorAddObjectPopup->_2).typeHierarchyDepth;
    if (((parent->klass->_2).typeHierarchyDepth < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorAddObjectPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception(parent);
    }
    pSVar4 = UI_BasePanel__GetCurrentCategoryName(parent,(MethodInfo *)0x0);
    pUVar2 = (*(uint64_t *)((char *)parent + 0xa8));
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      a = (*(uint64_t *)((char *)pUVar2 + 0x20));
      method_00 = __this->klass;
      original = (*(method_00->vtable)._35_GetItems.methodPtr)
                           (__this,pSVar4,(method_00->vtable)._35_GetItems.method);
      __this_01 = a;
      bVar3 = System_String__op_Inequality
                        ((System_String_o *)a,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                         (MethodInfo *)0x0);
      if (bVar3) {
        original = UI_MapEditorAddObjectPanel__Filter
                             (__this_01,original,(System_String_o *)a,(MethodInfo *)method_00);
      }
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      __this_00 = Utility_Util__GroupItems_object_
                            ((System_Collections_Generic_List_T__o *)original,8,
                             (MethodInfo_377D5D0 *)MethodInfo_Utility_Util_GroupItems_string);
      if (__this_00 != (System_Collections_Generic_List_List_T___o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_List_string_GetEnumerator)
        ;
        local_28 = 0;
        local_20 = (undefined1 *)&local_48;
        while( true ) {
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_List_string_MoveNext);
          if (!bVar3) break;
          UI_MapEditorAddObjectPanel__CreateRow
                    (__this,(System_Collections_Generic_List_string__o *)local_48.fields._current,method_01);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_List_string_Dispose);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddObjectPanel$$GetItems
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddObjectPanel__GetItems (UI_MapEditorAddObjectPanel_o* __this, System_String_o* category, const MethodInfo* method);
// 0x5d5f160
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5f37c: jmp 0x5d5f397

System_Collections_Generic_List_string__o *
UI_MapEditorAddObjectPanel__GetItems
          (UI_MapEditorAddObjectPanel_o *__this,System_String_o *category,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppObject *object;
  bool bVar2;
  UI_MapEditorAddObjectPanel_o *pUVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Collections_Generic_List_string__o *collection;
  Il2CppObject *source;
  UI_MapEditorAddObjectPanel___c_StaticFields *pUVar5;
  System_Func_MapScriptBaseObject__string__o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07547f69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_MapScriptBaseObject_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapScriptBaseObject_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorAddObjectPanel_c_GetItems_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorAddObjectPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    Il2CppMethodInitialized_07547f69 = '\x01';
  }
  bVar2 = System_String__op_Equality(category,"All",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar3 = (UI_MapEditorAddObjectPanel_o *)
               System_Collections_Generic_Dictionary_object__object___get_Keys
                         (pSVar1,(MethodInfo_4AAD0F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Keys
                         );
      pSVar4 = (System_Collections_Generic_List_string__o *)
               System_Linq_Enumerable__ToList_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar3,
                          (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
      pSVar4 = UI_MapEditorAddObjectPanel__GetItemsNoVariants(pUVar3,pSVar4,method_00);
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      collection = ApplicationManagers_AssetBundleManager__GetAssetList((MethodInfo *)0x0);
      if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar4,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,
                   (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
        return pSVar4;
      }
    }
  }
  else {
    bVar2 = System_String__op_Equality(category,"Custom",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      pSVar4 = ApplicationManagers_AssetBundleManager__GetAssetList((MethodInfo *)0x0);
      return pSVar4;
    }
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabCategories;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      source = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)category,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject_get_Item
                         );
      if ((TypeInfo_UI_MapEditorAddObjectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorAddObjectPanel_c);
        pUVar5 = TypeInfo_UI_MapEditorAddObjectPanel_c->static_fields;
        __this_00 = pUVar5->__9__10_0;
      }
      else {
        pUVar5 = TypeInfo_UI_MapEditorAddObjectPanel_c->static_fields;
        __this_00 = pUVar5->__9__10_0;
      }
      if (__this_00 == (System_Func_MapScriptBaseObject__string__o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_UI_MapEditorAddObjectPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorAddObjectPanel_c);
          pUVar5 = TypeInfo_UI_MapEditorAddObjectPanel_c->static_fields;
        }
        object = (Il2CppObject *)pUVar5->__9;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapScriptBaseObject_string);
        System_Func_object__object____ctor
                  ((System_Func_object__object__o *)__this_00,object,
                   (intptr_t)MethodInfo_UI_MapEditorAddObjectPanel_c_GetItems_b__10_0,
                   (MethodInfo_4F19B50 *)0x0);
        pUVar5 = TypeInfo_UI_MapEditorAddObjectPanel_c->static_fields;
        pUVar5->__9__10_0 = __this_00;
        Il2CppCodeGenWriteBarrier(&pUVar5->__9__10_0);
      }
      pUVar3 = (UI_MapEditorAddObjectPanel_o *)
               System_Linq_Enumerable__Select_object__object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (System_Func_TSource__TResult__o *)__this_00,
                          (MethodInfo_34F60F0 *)
                          MethodInfo_System_Linq_Enumerable_Select_MapScriptBaseObject_string);
      pSVar4 = (System_Collections_Generic_List_string__o *)
               System_Linq_Enumerable__ToList_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pUVar3,
                          (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
      if (__this != (UI_MapEditorAddObjectPanel_o *)0x0) {
        pSVar4 = UI_MapEditorAddObjectPanel__GetItemsNoVariants(pUVar3,pSVar4,method_01);
        return pSVar4;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddObjectPanel$$GetItemsNoVariants
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddObjectPanel__GetItemsNoVariants (UI_MapEditorAddObjectPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x5d5f440
// eh: try 0x5d5f56f..0x5d5f6a9 -> pad 0x5d5f6b2 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d5f6d6..0x5d5f6db -> pad 0x5d5f6fa cleanup
// eh: try 0x5d5f6fd..0x5d5f707 -> pad 0x5d5f70f catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5f548: lea r13, [rip + 0x1516c69]  ; TypeInfo_Map_BuiltinMapPrefabs
// asm:   0x5d5f54f: lea rbp, [rip + 0x152c80a]  ; MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey
// asm:   0x5d5f556: jmp 0x5d5f57a
// asm:   0x5d5f616: lea rbp, [rip + 0x1516b9b]  ; TypeInfo_Map_BuiltinMapPrefabs
// asm:   0x5d5f61d: lea r13, [rip + 0x152c73c]  ; MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey
// asm:   0x5d5f624: nop word ptr cs:[rax + rax]
// asm:   0x5d5f6ae: jmp 0x5d5f6be
// asm:   0x5d5f6b0: jmp 0x5d5f6be
// asm:   0x5d5f6b2: jmp 0x5d5f6be
// asm:   0x5d5f6b4: jmp 0x5d5f6be
// asm:   0x5d5f6b6: jmp 0x5d5f6be
// asm:   0x5d5f6b8: jmp 0x5d5f6be
// asm:   0x5d5f6ba: jmp 0x5d5f6be
// asm:   0x5d5f6bc: jmp 0x5d5f6be
// asm:   0x5d5f6be: mov r14, rax
// asm:   0x5d5f6c1: cmp edx, 1
// asm:   0x5d5f6c4: jne 0x5d5f6fd
// asm:   0x5d5f6c6: mov rdi, r14
// asm:   0x5d5f6c9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d5f6ce: mov rbx, qword ptr [rax]
// asm:   0x5d5f6d1: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d5f6d6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d5f6db: lea rax, [rip + 0x152f416]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d5f6e2: mov rsi, qword ptr [rax]
// asm:   0x5d5f6e5: mov rdi, rsp
// asm:   0x5d5f6e8: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d5f6ed: test rbx, rbx
// asm:   0x5d5f6f0: je 0x5d5f692
// asm:   0x5d5f6f2: mov rdi, rbx
// asm:   0x5d5f6f5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d5f6fa: mov r14, rax
// asm:   0x5d5f6fd: lea rdi, [rsp + 0x20]
// asm:   0x5d5f702: call 0x2fdccf0  ; il2cpp_runtime_helper_02fdccf0()
// asm:   0x5d5f707: mov rdi, r14
// asm:   0x5d5f70a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d5f70f: mov rdi, rax
// asm:   0x5d5f712: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_string__o *
UI_MapEditorAddObjectPanel__GetItemsNoVariants
          (UI_MapEditorAddObjectPanel_o *__this,System_Collections_Generic_List_string__o *items,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_List_Enumerator_object__o *pSVar7;
  bool bVar8;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07547f6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
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
    Il2CppMethodInitialized_07547f6a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (items == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)items,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  local_68.fields._current = (Il2CppObject *)local_38;
  local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
  local_68.fields._index = local_48._8_4_;
  local_68.fields._version = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_48._8_8_ = &local_68;
  pSVar7 = &local_68;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
    while (local_48._8_8_ = pSVar7,
          bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_68,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
          pIVar6 = local_68.fields._current, bVar8) {
      if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_BuiltinMapPrefabs->static_fields->VariantToBasePrefab;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05d5f6a4:
        ThrowNullReferenceException();
      }
      bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar3,pIVar6,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
      pSVar7 = (System_Collections_Generic_List_Enumerator_object__o *)local_48._8_8_;
      if (!bVar8) {
label_05d5f67b:
        ThrowNullReferenceException();
      }
    }
  }
  else {
    while (bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_68,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
          pIVar6 = local_68.fields._current, bVar8) {
      if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_BuiltinMapPrefabs->static_fields->VariantToBasePrefab;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d5f6a4;
      bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar3,pIVar6,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
      pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (!bVar8) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_00->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) goto label_05d5f67b;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (System_String_o *)pIVar6;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,pIVar6,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&local_68,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  return __this_00;
}


// UI.MapEditorAddObjectPanel$$Filter
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddObjectPanel__Filter (UI_MapEditorAddObjectPanel_o* __this, System_Collections_Generic_List_string__o* original, System_String_o* search, const MethodInfo* method);
// 0x5d5e790
// eh: try 0x5d5e8ef..0x5d5e9fa -> pad 0x5d5e9ff (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d5ea29..0x5d5ea2e -> pad 0x5d5ea4d cleanup
// eh: try 0x5d5ea50..0x5d5ea5a -> pad 0x5d5ea62 catch (...) [compiler noexcept guard]
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5e8cd: lea r13, [rip + 0x153022c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext
// asm:   0x5d5e8d4: mov r15, rsp
// asm:   0x5d5e8d7: lea rbp, [rip + 0x153807a]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5d5e8de: jmp 0x5d5e8fa
// asm:   0x5d5e978: lea rbp, [rip + 0x1530181]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext
// asm:   0x5d5e97f: mov rbx, rsp
// asm:   0x5d5e982: nop word ptr cs:[rax + rax]
// asm:   0x5d5e9ff: jmp 0x5d5ea11
// asm:   0x5d5ea01: jmp 0x5d5ea11
// asm:   0x5d5ea03: jmp 0x5d5ea11
// asm:   0x5d5ea05: jmp 0x5d5ea11
// asm:   0x5d5ea07: jmp 0x5d5ea11
// asm:   0x5d5ea09: jmp 0x5d5ea11
// asm:   0x5d5ea0b: jmp 0x5d5ea11
// asm:   0x5d5ea0d: jmp 0x5d5ea11
// asm:   0x5d5ea0f: jmp 0x5d5ea11
// asm:   0x5d5ea11: mov rbx, rax
// asm:   0x5d5ea14: cmp edx, 1
// asm:   0x5d5ea17: jne 0x5d5ea50
// asm:   0x5d5ea19: mov rdi, rbx
// asm:   0x5d5ea1c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d5ea21: mov rbx, qword ptr [rax]
// asm:   0x5d5ea24: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5d5ea29: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d5ea2e: lea rax, [rip + 0x15300c3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d5ea35: mov rsi, qword ptr [rax]
// asm:   0x5d5ea38: mov rdi, rsp
// asm:   0x5d5ea3b: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d5ea40: test rbx, rbx
// asm:   0x5d5ea43: je 0x5d5e9de
// asm:   0x5d5ea45: mov rdi, rbx
// asm:   0x5d5ea48: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d5ea4d: mov rbx, rax
// asm:   0x5d5ea50: lea rdi, [rsp + 0x20]
// asm:   0x5d5ea55: call 0x2fdcd20  ; il2cpp_runtime_helper_02fdcd20()
// asm:   0x5d5ea5a: mov rdi, rbx
// asm:   0x5d5ea5d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d5ea62: mov rdi, rax
// asm:   0x5d5ea65: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_string__o *
UI_MapEditorAddObjectPanel__Filter
          (UI_MapEditorAddObjectPanel_o *__this,System_Collections_Generic_List_string__o *original,
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
  
  if (Il2CppMethodInitialized_07547f6b == '\0') {
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
    Il2CppMethodInitialized_07547f6b = '\x01';
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
        if (!bVar6) goto label_05d5e9cc;
        if ((System_String_o *)local_68.fields._current == (System_String_o *)0x0) goto label_05d5e9f0;
        pSVar7 = System_String__ToLower((System_String_o *)local_68.fields._current,(MethodInfo *)0x0);
        if (pSVar7 == (System_String_o *)0x0) goto label_05d5e9f5;
        bVar6 = System_String__Contains(pSVar7,value,(MethodInfo *)0x0);
        pSVar5 = (System_Collections_Generic_List_Enumerator_object__o *)local_48._8_8_;
      } while (!bVar6);
label_05d5e9c7:
      ThrowNullReferenceException();
    }
    while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_68,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
          item = local_68.fields._current, bVar6) {
      if ((System_String_o *)local_68.fields._current == (System_String_o *)0x0) {
label_05d5e9f0:
        ThrowNullReferenceException();
      }
      pSVar7 = System_String__ToLower((System_String_o *)local_68.fields._current,(MethodInfo *)0x0);
      if (pSVar7 == (System_String_o *)0x0) {
label_05d5e9f5:
        ThrowNullReferenceException();
      }
      bVar6 = System_String__Contains(pSVar7,value,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (bVar6) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 == (System_String_array *)0x0) goto label_05d5e9c7;
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
label_05d5e9cc:
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&local_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  }
  return __this_00;
}


// UI.MapEditorAddObjectPanel$$CreateRow
// il2cpp: void UI_MapEditorAddObjectPanel__CreateRow (UI_MapEditorAddObjectPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x5d5ea70
// eh: try 0x5d5ec3a..0x5d5f09f -> pad 0x5d5f0f9 (+51 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d5f11b..0x5d5f120 -> pad 0x5d5f143 cleanup
// eh: try 0x5d5f146..0x5d5f150 -> pad 0x5d5f158 catch (...) [compiler noexcept guard]
// asm: 74 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5ec2d: nop dword ptr [rax]
// asm:   0x5d5f09f: jmp 0x5d5f103
// asm:   0x5d5f0a1: jmp 0x5d5f103
// asm:   0x5d5f0a3: jmp 0x5d5f103
// asm:   0x5d5f0a5: jmp 0x5d5f103
// asm:   0x5d5f0a7: jmp 0x5d5f103
// asm:   0x5d5f0a9: jmp 0x5d5f103
// asm:   0x5d5f0ab: jmp 0x5d5f103
// asm:   0x5d5f0ad: jmp 0x5d5f103
// asm:   0x5d5f0af: jmp 0x5d5f103
// asm:   0x5d5f0b1: jmp 0x5d5f103
// asm:   0x5d5f0b3: jmp 0x5d5f103
// asm:   0x5d5f0b5: jmp 0x5d5f103
// asm:   0x5d5f0b7: jmp 0x5d5f103
// asm:   0x5d5f0b9: jmp 0x5d5f103
// asm:   0x5d5f0bb: jmp 0x5d5f103
// asm:   0x5d5f0bd: jmp 0x5d5f103
// asm:   0x5d5f0bf: jmp 0x5d5f103
// asm:   0x5d5f0c1: jmp 0x5d5f103
// asm:   0x5d5f0c3: jmp 0x5d5f103
// asm:   0x5d5f0c5: jmp 0x5d5f103
// asm:   0x5d5f0c7: jmp 0x5d5f103
// asm:   0x5d5f0c9: jmp 0x5d5f103
// asm:   0x5d5f0cb: jmp 0x5d5f103
// asm:   0x5d5f0cd: jmp 0x5d5f103
// asm:   0x5d5f0cf: jmp 0x5d5f103
// asm:   0x5d5f0d1: jmp 0x5d5f103
// asm:   0x5d5f0d3: jmp 0x5d5f103
// asm:   0x5d5f0d5: jmp 0x5d5f103
// asm:   0x5d5f0d7: jmp 0x5d5f103
// asm:   0x5d5f0d9: jmp 0x5d5f103
// asm:   0x5d5f0db: jmp 0x5d5f103
// asm:   0x5d5f0dd: jmp 0x5d5f103
// asm:   0x5d5f0df: jmp 0x5d5f103
// asm:   0x5d5f0e1: jmp 0x5d5f103
// asm:   0x5d5f0e3: jmp 0x5d5f103
// asm:   0x5d5f0e5: jmp 0x5d5f103
// asm:   0x5d5f0e7: jmp 0x5d5f103
// asm:   0x5d5f0e9: jmp 0x5d5f103
// asm:   0x5d5f0eb: jmp 0x5d5f103
// asm:   0x5d5f0ed: jmp 0x5d5f103
// asm:   0x5d5f0ef: jmp 0x5d5f103
// asm:   0x5d5f0f1: jmp 0x5d5f103
// asm:   0x5d5f0f3: jmp 0x5d5f103
// asm:   0x5d5f0f5: jmp 0x5d5f103
// asm:   0x5d5f0f7: jmp 0x5d5f103
// asm:   0x5d5f0f9: jmp 0x5d5f103
// asm:   0x5d5f0fb: jmp 0x5d5f103
// asm:   0x5d5f0fd: jmp 0x5d5f103
// asm:   0x5d5f0ff: jmp 0x5d5f103
// asm:   0x5d5f101: jmp 0x5d5f103
// asm:   0x5d5f103: mov rbx, rax
// asm:   0x5d5f106: cmp edx, 1
// asm:   0x5d5f109: jne 0x5d5f146
// asm:   0x5d5f10b: mov rdi, rbx
// asm:   0x5d5f10e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d5f113: mov rbx, qword ptr [rax]
// asm:   0x5d5f116: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d5f11b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d5f120: lea rax, [rip + 0x152f9d1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5d5f127: mov rsi, qword ptr [rax]
// asm:   0x5d5f12a: mov rdi, rsp
// asm:   0x5d5f12d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d5f132: test rbx, rbx
// asm:   0x5d5f135: je 0x5d5efe8
// asm:   0x5d5f13b: mov rdi, rbx
// asm:   0x5d5f13e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d5f143: mov rbx, rax
// asm:   0x5d5f146: lea rdi, [rsp + 0x18]
// asm:   0x5d5f14b: call 0x2fdcd50  ; il2cpp_runtime_helper_02fdcd50()
// asm:   0x5d5f150: mov rdi, rbx
// asm:   0x5d5f153: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d5f158: mov rdi, rax
// asm:   0x5d5f15b: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorAddObjectPanel__CreateRow
               (UI_MapEditorAddObjectPanel_o *__this,System_Collections_Generic_List_string__o *items,
               MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_String_o *path;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Button_o *pUVar5;
  UnityEngine_Events_UnityAction_o *__this_01;
  System_String_o *pSVar6;
  UnityEngine_Texture_o *value;
  UnityEngine_UI_RawImage_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UI_MapEditorAddObjectPanel___c__DisplayClass13_0_Fields *targetAddress;
  float spacing;
  UnityEngine_Color_o UVar9;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_50 [16];
  System_String_o *local_40;
  UnityEngine_GameObject_o *local_38;
  
  if (Il2CppMethodInitialized_07547f6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorAddObjectPanel_c__DisplayClass13_0_CreateRow_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorAddObjectPanel_c__DisplayClass13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/MapEditorObjectButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Previews/");
    Il2CppMethodInitialized_07547f6c = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  pUVar4 = (__this->fields).SinglePanel;
  spacing = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                      (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
  pUVar2 = UI_ElementFactory__CreateHorizontalGroup(pUVar4,spacing,3,(MethodInfo *)0x0);
  if (items == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
             (System_Collections_Generic_List_object__o *)items,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  local_68.fields._current = (Il2CppObject *)local_40;
  local_68.fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
  local_68.fields._index = local_50._8_4_;
  local_68.fields._version = local_50._12_4_;
  local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_50._8_8_ = &local_68;
  local_38 = pUVar2;
  if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
    local_50._8_8_ = &local_68;
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_68,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    if (bVar1) {
      pUVar3 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_UI_MapEditorAddObjectPanel_c__DisplayClass13_0);
      System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
      if (pUVar3 != (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o *)0x0) {
        (pUVar3->fields).__4__this = __this;
        Il2CppCodeGenWriteBarrier(&(pUVar3->fields).__4__this);
        (pUVar3->fields).item = (System_String_o *)local_68.fields._current;
        Il2CppCodeGenWriteBarrier(&(pUVar3->fields).item);
        ThrowNullReferenceException();
      }
label_05d5f070:
      ThrowNullReferenceException();
    }
  }
  else {
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
      if (!bVar1) break;
      pUVar3 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_UI_MapEditorAddObjectPanel_c__DisplayClass13_0);
      System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
      if (pUVar3 == (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o *)0x0) goto label_05d5f070;
      (pUVar3->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(pUVar3->fields).__4__this);
      targetAddress = &pUVar3->fields;
      (pUVar3->fields).item = (System_String_o *)local_68.fields._current;
      Il2CppCodeGenWriteBarrier(&targetAddress->item);
      pUVar4 = UnityEngine_GameObject__get_transform(local_38,(MethodInfo *)0x0);
      pUVar2 = UI_ElementFactory__InstantiateAndBind(pUVar4,"Prefabs/Misc/MapEditorObjectButton",(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar5 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar2,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
      if (pUVar5 == (UnityEngine_UI_Button_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar5->fields).m_OnClick;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (__this_01,(Il2CppObject *)pUVar3,
                 (intptr_t)MethodInfo_UI_MapEditorAddObjectPanel_c__DisplayClass13_0_CreateRow_b__0,
                 (MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_01,(MethodInfo *)0x0);
      pSVar6 = (*(__this->klass->vtable)._36_GetPreviewName.methodPtr)
                         (__this,targetAddress->item,(__this->klass->vtable)._36_GetPreviewName.method);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
      pSVar6 = System_String__Concat_52f0320("Previews/",pSVar6,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(path,pSVar6,false,false,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar4 = UnityEngine_Transform__Find(pUVar4,"Icon",(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar7 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar4,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
        if (pUVar7 == (UnityEngine_UI_RawImage_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((value != (UnityEngine_Texture_o *)0x0) &&
           (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
        UnityEngine_UI_RawImage__set_texture(pUVar7,value,(MethodInfo *)0x0);
      }
      else {
        pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar4 = UnityEngine_Transform__Find(pUVar4,"Icon",(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar7 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar4,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
        if (pUVar7 == (UnityEngine_UI_RawImage_o *)0x0) {
          ThrowNullReferenceException();
        }
        UVar9.fields.b = 0.32;
        UVar9.fields.a = 1.0;
        UVar9.fields.r = 0.32;
        UVar9.fields.g = 0.32;
        (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
                  (pUVar7,UVar9,(pUVar7->klass->vtable)._23_set_color.method);
      }
      pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar8 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar4,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                (pUVar8,targetAddress->item,(pUVar8->klass->vtable)._75_set_text.method);
      pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar8 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar4,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      UVar9 = UI_UIManager__GetThemeColor
                        ("DefaultPanel","DefaultLabel","TextColor",
                         "DefaultPanel",(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_UI_Text_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                (pUVar8,UVar9,(pUVar8->klass->vtable)._23_set_color.method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&local_68,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  return;
}


// UI.MapEditorAddObjectPanel$$GetPreviewName
// il2cpp: System_String_o* UI_MapEditorAddObjectPanel__GetPreviewName (UI_MapEditorAddObjectPanel_o* __this, System_String_o* item, const MethodInfo* method);
// 0x5d5f730
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5f763: jmp 0x5d5f834

System_String_o *
UI_MapEditorAddObjectPanel__GetPreviewName
          (UI_MapEditorAddObjectPanel_o *__this,System_String_o *item,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547f6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    Il2CppMethodInitialized_07547f6d = '\x01';
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) goto label_05d5f7b2;
label_05d5f753:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabPreviews;
  }
  else {
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor != 0) goto label_05d5f753;
label_05d5f7b2:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabPreviews;
  }
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05d5f834:
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
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d5f834;
    item = System_Collections_Generic_Dictionary_object__object___get_Item
                     (pSVar1,(Il2CppObject *)item,
                      (MethodInfo_4AAD450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
  }
  pSVar3 = System_String__Concat_52f0320(item,"Preview",(MethodInfo *)0x0);
  return pSVar3;
}


// UI.MapEditorAddObjectPanel$$OnSelectObject
// il2cpp: void UI_MapEditorAddObjectPanel__OnSelectObject (UI_MapEditorAddObjectPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d5f840
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5f9fe: jmp 0x5d5faf4
// asm:   0x5d5faf9: mov rdi, rbx

void UI_MapEditorAddObjectPanel__OnSelectObject
               (UI_MapEditorAddObjectPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_MapEditorBrushPanel_o *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UI_MapEditorAddVariantPopup_o *__this_00;
  bool bVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  UI_BasePanel_o *pUVar5;
  UI_MapEditorMenu_o *__this_01;
  
  if (Il2CppMethodInitialized_07547f6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547f6e = '\x01';
  }
  __this_01 = (UI_MapEditorMenu_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_01 == (UI_MapEditorMenu_o *)0x0) goto label_05d5faf4;
  bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
  if (((((GameManagers_MapEditorGameManager_c *)__this_01->klass)->_2).typeHierarchyDepth < bVar1) ||
     ((((GameManagers_MapEditorGameManager_c *)__this_01->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) goto label_05d5fafc;
  pUVar2 = (__this_01->fields).BrushPanel;
  if ((pUVar2 == (UI_MapEditorBrushPanel_o *)0x0) ||
     (*(bool *)((long)&(pUVar2->fields).m_CachedPtr + 1) == false)) {
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d5faf4;
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)name,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
    method_00 = extraout_RDX_00;
    if (!bVar4) {
      GameManagers_MapEditorGameManager__AddObject
                ((GameManagers_MapEditorGameManager_o *)__this_01,name,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).Parent;
      if (pUVar5 == (UI_BasePanel_o *)0x0) goto label_05d5faf4;
      goto label_05d5fac0;
    }
label_05d5fa4e:
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      method_00 = extraout_RDX_01;
    }
    __this_01 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this_01 == (UI_MapEditorMenu_o *)0x0) goto label_05d5faf4;
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((GameManagers_MapEditorGameManager_c *)__this_01->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_MapEditorGameManager_c *)__this_01->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
label_05d5fafc:
      il2cpp_codegen_raise_invalid_cast_exception(__this_01);
    }
    __this_00 = (__this_01->fields).AddVariantPopup;
    if (__this_00 == (UI_MapEditorAddVariantPopup_o *)0x0) goto label_05d5faf4;
    UI_MapEditorAddVariantPopup__Show(__this_00,name,method_00);
    pUVar5 = (__this->fields).Parent;
  }
  else {
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05d5faf4;
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)name,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
    method_00 = extraout_RDX;
    if (bVar4) goto label_05d5fa4e;
    pUVar2 = (__this_01->fields).BrushPanel;
    if (pUVar2 == (UI_MapEditorBrushPanel_o *)0x0) goto label_05d5faf4;
    MapEditor_MapEditorBrush__AddEntry((MapEditor_MapEditorBrush_o *)pUVar2,name,(MethodInfo *)0x0);
    pUVar2 = (__this_01->fields).BrushPanel;
    if (pUVar2 == (UI_MapEditorBrushPanel_o *)0x0) goto label_05d5faf4;
    *(bool *)((long)&(pUVar2->fields).m_CachedPtr + 1) = false;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    __this_01 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (__this_01 == (UI_MapEditorMenu_o *)0x0) goto label_05d5faf4;
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu))
    goto label_05d5fafc;
    UI_MapEditorMenu__SyncBrushPanel(__this_01,(MethodInfo *)0x0);
    pUVar5 = (__this->fields).Parent;
  }
  if (pUVar5 != (UI_BasePanel_o *)0x0) {
label_05d5fac0:
    (*(pUVar5->klass->vtable)._22_Hide.methodPtr)(pUVar5,(pUVar5->klass->vtable)._22_Hide.method);
    return;
  }
label_05d5faf4:
  ThrowNullReferenceException();
}


// UI.MapEditorAddObjectPanel$$.ctor
// il2cpp: void UI_MapEditorAddObjectPanel___ctor (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x5d5ffb0

void UI_MapEditorAddObjectPanel___ctor(UI_MapEditorAddObjectPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


