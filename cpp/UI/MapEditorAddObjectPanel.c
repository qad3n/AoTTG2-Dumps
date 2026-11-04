// Type: UI.MapEditorAddObjectPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorAddObjectPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddObjectPanel.cs
// --------------------------------

// UI.MapEditorAddObjectPanel.<>c$$.cctor
// il2cpp: void UI_MapEditorAddObjectPanel___c___cctor (const MethodInfo* method);
// 0x1822b9630

void UI_MapEditorAddObjectPanel___c___cctor(MethodInfo *method)

{
  UI_MapEditorAddObjectPanel___c_o *__this;
  
  if (Il2CppMethodInitialized_1843474b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorAddObjectPanel_c);
    Il2CppMethodInitialized_1843474b7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorAddObjectPanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_MapEditorAddObjectPanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorAddObjectPanel_c->static_fields->__9,__this);
  return;
}


// UI.MapEditorAddObjectPanel.<>c$$.ctor
// il2cpp: void UI_MapEditorAddObjectPanel___c___ctor (UI_MapEditorAddObjectPanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorAddObjectPanel___c___ctor(UI_MapEditorAddObjectPanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPanel.<>c$$<GetItems>b__10_0
// il2cpp: System_String_o* UI_MapEditorAddObjectPanel___c___GetItems_b__10_0 (UI_MapEditorAddObjectPanel___c_o* __this, Map_MapScriptBaseObject_o* x, const MethodInfo* method);
// 0x181c43bb0

System_String_o*
UI_MapEditorAddObjectPanel___c___GetItems_b__10_0(UI_MapEditorAddObjectPanel___c_o* __this, Map_MapScriptBaseObject_o* x, MethodInfo* method)

{
  if (p != (Newtonsoft_Json_Serialization_JsonProperty_o *)0x0) {
    return (p->fields)._propertyName;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddObjectPanel.<>c__DisplayClass13_0$$.ctor
// il2cpp: void UI_MapEditorAddObjectPanel___c__DisplayClass13_0___ctor (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorAddObjectPanel___c__DisplayClass13_0___ctor(UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPanel.<>c__DisplayClass13_0$$<CreateRow>b__0
// il2cpp: void UI_MapEditorAddObjectPanel___c__DisplayClass13_0___CreateRow_b__0 (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o* __this, const MethodInfo* method);
// 0x1822b8eb0

void UI_MapEditorAddObjectPanel___c__DisplayClass13_0___CreateRow_b__0
               (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o *__this,MethodInfo *method)

{
  UI_MapEditorAddObjectPanel_o *pUVar1;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MapEditorAddObjectPanel_o *)0x0) {
    (*(pUVar1->klass->vtable)._37_OnSelectObject.methodPtr)
              (pUVar1,(__this->fields).item,(pUVar1->klass->vtable)._37_OnSelectObject.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddObjectPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorAddObjectPanel__get_ScrollBar (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MapEditorAddObjectPanel__get_ScrollBar(UI_MapEditorAddObjectPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MapEditorAddObjectPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorAddObjectPanel__get_VerticalSpacing (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x1821c0c80

float
UI_MapEditorAddObjectPanel__get_VerticalSpacing(UI_MapEditorAddObjectPanel_o* __this, MethodInfo* method)

{
  return 12.0;
}


// UI.MapEditorAddObjectPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorAddObjectPanel__get_HorizontalPadding (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x181b9be70

int32_t
UI_MapEditorAddObjectPanel__get_HorizontalPadding(UI_MapEditorAddObjectPanel_o* __this, MethodInfo* method)

{
  return 0xf;
}


// UI.MapEditorAddObjectPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorAddObjectPanel__get_VerticalPadding (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x181b56090

int32_t
UI_MapEditorAddObjectPanel__get_VerticalPadding(UI_MapEditorAddObjectPanel_o* __this, MethodInfo* method)

{
  return 10;
}


// UI.MapEditorAddObjectPanel$$Setup
// il2cpp: void UI_MapEditorAddObjectPanel__Setup (UI_MapEditorAddObjectPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18229f280
// eh: try 0x18229f440..0x18229f467 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18229f439: nop dword ptr [rax]
// asm:   0x18229f478: mov rdx, qword ptr [rip + 0x1dd11d9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_List_string_Dispose
// asm:   0x18229f47f: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18229f484: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18229f489: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18229f48e: test rcx, rcx
// asm:   0x18229f491: jne 0x18229f4a3
// asm:   0x18229f4a3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_MapEditorAddObjectPanel__Setup
               (UI_MapEditorAddObjectPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_String_o *a;
  bool bVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_List_string__o *original;
  System_Collections_Generic_List_List_T___o *__this_00;
  undefined1 local_40 [16];
  System_Collections_Generic_List_string__o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843474b0 == '\0') {
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
    Il2CppMethodInitialized_1843474b0 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorAddObjectPopup->_2).typeHierarchyDepth;
    if (((parent->klass->_2).typeHierarchyDepth < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorAddObjectPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception(parent);
    }
    pSVar4 = UI_BasePanel__GetCurrentCategoryName(parent,(MethodInfo *)0x0);
    pUVar2 = (*(uint64_t *)((char *)parent + 0xa8));
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      a = (*(uint64_t *)((char *)pUVar2 + 0x20));
      original = (*(__this->klass->vtable)._35_GetItems.methodPtr)
                           (__this,pSVar4,(__this->klass->vtable)._35_GetItems.method);
      bVar3 = System_String__op_Inequality
                        (a,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
      if (bVar3) {
        original = UI_MapEditorAddObjectPanel__Filter(__this,original,a,(MethodInfo *)0x0);
      }
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      __this_00 = Utility_Util__GroupItems_object_
                            ((System_Collections_Generic_List_T__o *)original,8,
                             (MethodInfo_86AC50 *)MethodInfo_Utility_Util_GroupItems_string);
      if (__this_00 != (System_Collections_Generic_List_List_T___o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                   (System_Collections_Generic_List_T__o *)__this_00,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_List_string_GetEnumerator);
        local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
        local_28.fields._index = local_40._8_4_;
        local_28.fields._version = local_40._12_4_;
        local_28.fields._current = (Il2CppObject *)local_30;
        local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_40._8_8_ = &local_28;
        while( true ) {
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_28,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_List_string_MoveNext);
          if (!bVar3) break;
          UI_MapEditorAddObjectPanel__CreateRow
                    (__this,(System_Collections_Generic_List_string__o *)local_28.fields._current,
                     (MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_List_string_Dispose);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddObjectPanel$$GetItems
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddObjectPanel__GetItems (UI_MapEditorAddObjectPanel_o* __this, System_String_o* category, const MethodInfo* method);
// 0x18229eb30

System_Collections_Generic_List_string__o *
UI_MapEditorAddObjectPanel__GetItems
          (UI_MapEditorAddObjectPanel_o *__this,System_String_o *category,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *object;
  System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o *__this_01;
  bool bVar1;
  Il2CppObject *source;
  System_Func_MapScriptBaseObject__string__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_IEnumerable_TKey__o *source_01;
  System_Collections_Generic_List_string__o *collection;
  
  if (Il2CppMethodInitialized_1843474b1 == '\0') {
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
    Il2CppMethodInitialized_1843474b1 = '\x01';
  }
  bVar1 = System_String__op_Equality(category,"All",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    __this_01 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->AllPrefabs;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__MapScriptBaseObject__o *)0x0) {
      source_01 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             (MethodInfo_13C6500 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBaseObject_get_Keys
                            );
      pSVar2 = (System_Collections_Generic_List_string__o *)
               System_Linq_Enumerable__ToList_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                          (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
      pSVar2 = UI_MapEditorAddObjectPanel__GetItemsNoVariants(__this,pSVar2,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      collection = ApplicationManagers_AssetBundleManager__GetAssetList((MethodInfo *)0x0);
      if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar2,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,
                   (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
        return pSVar2;
      }
    }
  }
  else {
    bVar1 = System_String__op_Equality(category,"Custom",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      pSVar2 = ApplicationManagers_AssetBundleManager__GetAssetList((MethodInfo *)0x0);
      return pSVar2;
    }
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabCategories;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      source = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_00,(Il2CppObject *)category,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_List_MapScriptBaseObject_get_Item
                         );
      if ((TypeInfo_UI_MapEditorAddObjectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorAddObjectPanel_c);
      }
      __this_02 = TypeInfo_UI_MapEditorAddObjectPanel_c->static_fields->__9__10_0;
      if (__this_02 == (System_Func_MapScriptBaseObject__string__o *)0x0) {
        if ((TypeInfo_UI_MapEditorAddObjectPanel_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MapEditorAddObjectPanel_c);
        }
        object = (Il2CppObject *)TypeInfo_UI_MapEditorAddObjectPanel_c->static_fields->__9;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapScriptBaseObject_string);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_02,object,
                   (intptr_t)MethodInfo_UI_MapEditorAddObjectPanel_c_GetItems_b__10_0,
                   (MethodInfo_16E67D0 *)0x0);
        TypeInfo_UI_MapEditorAddObjectPanel_c->static_fields->__9__10_0 = __this_02;
        Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MapEditorAddObjectPanel_c->static_fields->__9__10_0,__this_02);
      }
      source_00 = System_Linq_Enumerable__Select_Vector3__object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__TResult__o *)__this_02,
                             (MethodInfo_6C2170 *)
                             MethodInfo_System_Linq_Enumerable_Select_MapScriptBaseObject_string);
      pSVar2 = (System_Collections_Generic_List_string__o *)
               System_Linq_Enumerable__ToList_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                          (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
      if (__this != (UI_MapEditorAddObjectPanel_o *)0x0) {
        pSVar2 = UI_MapEditorAddObjectPanel__GetItemsNoVariants(__this,pSVar2,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddObjectPanel$$GetItemsNoVariants
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddObjectPanel__GetItemsNoVariants (UI_MapEditorAddObjectPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x18229e940
// eh: try 0x18229ea50..0x18229eb1e -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18229ead6: mov rdx, qword ptr [rip + 0x1df8e3b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x18229eadd: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18229eae2: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18229eae7: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18229eaec: test rcx, rcx
// asm:   0x18229eaef: jne 0x18229eb1e
// asm:   0x18229eaf1: mov rdi, qword ptr [rsp + 0x78]
// asm:   0x18229eb1e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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
UI_MapEditorAddObjectPanel__GetItemsNoVariants
          (UI_MapEditorAddObjectPanel_o *__this,System_Collections_Generic_List_string__o *items,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  Il2CppObject *key;
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_01;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843474b2 == '\0') {
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
    Il2CppMethodInitialized_1843474b2 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (items != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)items,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
      key = local_28.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
        return __this_01;
      }
      if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
      }
      __this_00 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->VariantToBasePrefab;
      if (__this_00 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) break;
      bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,key,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
      if (!bVar1) {
        if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(__this_01,key,MethodInfo_System_Collections_Generic_List_string_Add);
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddObjectPanel$$Filter
// il2cpp: System_Collections_Generic_List_string__o* UI_MapEditorAddObjectPanel__Filter (UI_MapEditorAddObjectPanel_o* __this, System_Collections_Generic_List_string__o* original, System_String_o* search, const MethodInfo* method);
// 0x18229e740
// eh: try 0x18229e870..0x18229e92c -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18229e869: nop dword ptr [rax]
// asm:   0x18229e8de: mov rdx, qword ptr [rip + 0x1df9033]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x18229e8e5: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18229e8ea: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18229e8ef: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18229e8f4: test rcx, rcx
// asm:   0x18229e8f7: jne 0x18229e92c
// asm:   0x18229e8f9: mov rsi, qword ptr [rsp + 0xa0]
// asm:   0x18229e92c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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
UI_MapEditorAddObjectPanel__Filter
          (UI_MapEditorAddObjectPanel_o *__this,System_Collections_Generic_List_string__o *original,
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
  
  if (Il2CppMethodInitialized_1843474b3 == '\0') {
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
    Il2CppMethodInitialized_1843474b3 = '\x01';
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


// UI.MapEditorAddObjectPanel$$CreateRow
// il2cpp: void UI_MapEditorAddObjectPanel__CreateRow (UI_MapEditorAddObjectPanel_o* __this, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x18229e140
// eh: try 0x18229e308..0x18229e730 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18229e694: mov rdx, qword ptr [rip + 0x1df927d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x18229e69b: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18229e6a0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18229e6a5: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18229e6aa: test rcx, rcx
// asm:   0x18229e6ad: jne 0x18229e730
// asm:   0x18229e730: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void UI_MapEditorAddObjectPanel__CreateRow
               (UI_MapEditorAddObjectPanel_o *__this,System_Collections_Generic_List_string__o *items,
               MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_String_o *path;
  bool bVar1;
  UnityEngine_GameObject_o *__this_01;
  UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o *object;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_Events_UnityAction_o *__this_03;
  System_String_o *pSVar4;
  UnityEngine_Texture_o *x;
  UnityEngine_UI_RawImage_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_Color_o *pUVar7;
  UnityEngine_Texture_o *value;
  float spacing;
  UnityEngine_Color_Fields local_88;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_object__o local_60;
  
  if (Il2CppMethodInitialized_1843474b4 == '\0') {
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
    Il2CppMethodInitialized_1843474b4 = '\x01';
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pUVar2 = (__this->fields).SinglePanel;
  spacing = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                      (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
  __this_01 = UI_ElementFactory__CreateHorizontalGroup(pUVar2,spacing,3,(MethodInfo *)0x0);
  if (items == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            (&local_78,(System_Collections_Generic_List_T__o *)items,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  local_60.fields._list = local_78.fields._list;
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._current = local_78.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_60,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_60,
                 MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      return;
    }
    object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorAddObjectPanel_c__DisplayClass13_0)
    ;
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    if (object == (UI_MapEditorAddObjectPanel___c__DisplayClass13_0_o *)0x0) {
      ThrowNullReferenceException();
    }
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).item = (System_String_o *)local_60.fields._current;
    Il2CppCodeGenWriteBarrier(&(object->fields).item,local_60.fields._current);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar2 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
    __this_02 = UI_ElementFactory__InstantiateAndBind(pUVar2,"Prefabs/Misc/MapEditorObjectButton",(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (__this_02,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    if (pUVar3 == (UnityEngine_UI_Button_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_03,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_MapEditorAddObjectPanel_c__DisplayClass13_0_CreateRow_b__0,
               (MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_03,(MethodInfo *)0x0);
    pSVar4 = (*(__this->klass->vtable)._36_GetPreviewName.methodPtr)
                       (__this,(object->fields).item,(__this->klass->vtable)._36_GetPreviewName.method);
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->Map;
    pSVar4 = System_String__Concat_1969e50("Previews/",pSVar4,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    x = (UnityEngine_Texture_o *)
        ApplicationManagers_ResourceManager__LoadAsset(path,pSVar4,false,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar2 = UnityEngine_Transform__Find(pUVar2,"Icon",(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar5 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar2,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
      if (pUVar5 == (UnityEngine_UI_RawImage_o *)0x0) {
        ThrowNullReferenceException();
      }
      value = (UnityEngine_Texture_o *)0x0;
      if (x != (UnityEngine_Texture_o *)0x0) {
        if (x->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
          value = x;
        }
        if (value == (UnityEngine_Texture_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(x,TypeInfo_UnityEngine_Texture2D);
        }
      }
      UnityEngine_UI_RawImage__set_texture(pUVar5,value,(MethodInfo *)0x0);
    }
    else {
      pUVar2 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar2 = UnityEngine_Transform__Find(pUVar2,"Icon",(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar5 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar2,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
      if (pUVar5 == (UnityEngine_UI_RawImage_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_88.r = 0.32;
      local_88.g = 0.32;
      local_88.b = 0.32;
      local_88.a = 1.0;
      (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                (pUVar5,(UnityEngine_Color_o *)&local_88,(pUVar5->klass->vtable)._23_set_color.method);
    }
    pUVar2 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Text",(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) break;
    pUVar6 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar2,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    if (pUVar6 == (UnityEngine_UI_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
              (pUVar6,(object->fields).item,(pUVar6->klass->vtable)._75_set_text.method);
    pUVar2 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Text",(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar6 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar2,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar7 = UI_UIManager__GetThemeColor
                       ((UnityEngine_Color_o *)&local_78,"DefaultPanel","DefaultLabel",
                        "TextColor","DefaultPanel",(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_UI_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_88.r = (pUVar7->fields).r;
    local_88.g = (pUVar7->fields).g;
    local_88.b = (pUVar7->fields).b;
    local_88.a = (pUVar7->fields).a;
    (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
              (pUVar6,(UnityEngine_Color_o *)&local_88,(pUVar6->klass->vtable)._23_set_color.method);
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddObjectPanel$$GetPreviewName
// il2cpp: System_String_o* UI_MapEditorAddObjectPanel__GetPreviewName (UI_MapEditorAddObjectPanel_o* __this, System_String_o* item, const MethodInfo* method);
// 0x18229ee20

System_String_o *
UI_MapEditorAddObjectPanel__GetPreviewName
          (UI_MapEditorAddObjectPanel_o *__this,System_String_o *item,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843474b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    Il2CppMethodInitialized_1843474b5 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
  }
  __this_00 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabPreviews;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)item
                       ,(MethodInfo_1455450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    if (!bVar1) {
      pSVar2 = System_String__Concat_1969e50(item,"Preview",(MethodInfo *)0x0);
      return pSVar2;
    }
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabPreviews;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_01,(Il2CppObject *)item,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      pSVar2 = System_String__Concat_1969e50(pSVar2,"Preview",(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorAddObjectPanel$$OnSelectObject
// il2cpp: void UI_MapEditorAddObjectPanel__OnSelectObject (UI_MapEditorAddObjectPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18229ef20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18229f247: jmp 0x18229f14c

void UI_MapEditorAddObjectPanel__OnSelectObject
               (UI_MapEditorAddObjectPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  System_Collections_Generic_Dictionary_string__List_string___o *pSVar2;
  MapEditor_MapEditorBrush_o *pMVar3;
  UI_MapEditorMenu_o *__this_01;
  UI_MessagePopup_o *__this_02;
  UI_BasePanel_o *pUVar4;
  bool bVar5;
  UI_BaseMenu_o *pUVar6;
  
  if (Il2CppMethodInitialized_1843474b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843474b6 = '\x01';
  }
  __this_00 = (GameManagers_MapEditorGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_18229f24c;
  bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00);
  }
  if (((__this_00->fields).Brush == (MapEditor_MapEditorBrush_o *)0x0) ||
     ((((__this_00->fields).Brush)->fields).AssetSelectMode == false)) {
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    pSVar2 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) goto label_18229f24c;
    bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)name,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
    if (bVar5) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_18229f24c;
      bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
      if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
      }
      goto label_18229f14c;
    }
    GameManagers_MapEditorGameManager__AddObject(__this_00,name,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
    }
    pSVar2 = TypeInfo_Map_BuiltinMapPrefabs->static_fields->PrefabVariants;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__List_string___o *)0x0) goto label_18229f24c;
    bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)name,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_string_ContainsKey);
    if (bVar5) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_18229f24c;
      bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
      if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_MapEditorMenu)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
      }
label_18229f14c:
      __this_02 = (*(uint64_t *)((char *)pUVar6 + 0xc8));
      if (__this_02 == (UI_MessagePopup_o *)0x0) goto label_18229f24c;
      UI_MapEditorAddVariantPopup__Show((UI_MapEditorAddVariantPopup_o *)__this_02,name,(MethodInfo *)0x0);
    }
    else {
      pMVar3 = (__this_00->fields).Brush;
      if (pMVar3 == (MapEditor_MapEditorBrush_o *)0x0) goto label_18229f24c;
      MapEditor_MapEditorBrush__AddEntry(pMVar3,name,(MethodInfo *)0x0);
      pMVar3 = (__this_00->fields).Brush;
      if (pMVar3 == (MapEditor_MapEditorBrush_o *)0x0) goto label_18229f24c;
      (pMVar3->fields).AssetSelectMode = false;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      __this_01 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (__this_01 == (UI_MapEditorMenu_o *)0x0) goto label_18229f24c;
      bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
      if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_UI_MapEditorMenu);
      }
      UI_MapEditorMenu__SyncBrushPanel(__this_01,(MethodInfo *)0x0);
    }
  }
  pUVar4 = (__this->fields).Parent;
  if (pUVar4 != (UI_BasePanel_o *)0x0) {
    (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
    return;
  }
label_18229f24c:
  ThrowNullReferenceException();
}


// UI.MapEditorAddObjectPanel$$.ctor
// il2cpp: void UI_MapEditorAddObjectPanel___ctor (UI_MapEditorAddObjectPanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
UI_MapEditorAddObjectPanel___ctor(UI_MapEditorAddObjectPanel_o* __this, MethodInfo* method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


