// Type: CustomLogic.CustomLogicComponentInstance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicComponentInstance.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicComponentInstance.cs
// --------------------------------

// CustomLogic.CustomLogicComponentInstance.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicComponentInstance___c___cctor (const MethodInfo* method);
// 0x5b6ede0

void CustomLogic_CustomLogicComponentInstance___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547331 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicComponentInstance_c);
    Il2CppMethodInitialized_07547331 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicComponentInstance_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicComponentInstance_c->static_fields->__9 =
       (CustomLogic_CustomLogicComponentInstance___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicComponentInstance_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicComponentInstance.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicComponentInstance___c___ctor (CustomLogic_CustomLogicComponentInstance___c_o* __this, const MethodInfo* method);
// 0x5b6ee50

void CustomLogic_CustomLogicComponentInstance___c___ctor
               (CustomLogic_CustomLogicComponentInstance___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicComponentInstance.<>c$$<DeserializeValue>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicComponentInstance___c___DeserializeValue_b__20_0 (CustomLogic_CustomLogicComponentInstance___c_o* __this, System_String_o* item, const MethodInfo* method);
// 0x5b6ee60

Il2CppObject *
CustomLogic_CustomLogicComponentInstance___c___DeserializeValue_b__20_0
          (CustomLogic_CustomLogicComponentInstance___c_o *__this,System_String_o *item,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  System_Int32__Parse(item,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicComponentInstance$$get_Enabled
// il2cpp: bool CustomLogic_CustomLogicComponentInstance__get_Enabled (CustomLogic_CustomLogicComponentInstance_o* __this, const MethodInfo* method);
// 0x5b6c560

bool CustomLogic_CustomLogicComponentInstance__get_Enabled
               (CustomLogic_CustomLogicComponentInstance_o *__this,MethodInfo *method)

{
  return (__this->fields)._Enabled_k__BackingField;
}


// CustomLogic.CustomLogicComponentInstance$$set_Enabled
// il2cpp: void CustomLogic_CustomLogicComponentInstance__set_Enabled (CustomLogic_CustomLogicComponentInstance_o* __this, bool value, const MethodInfo* method);
// 0x5b6c570

void CustomLogic_CustomLogicComponentInstance__set_Enabled
               (CustomLogic_CustomLogicComponentInstance_o *__this,bool value,MethodInfo *method)

{
  undefined3 in_register_00000031;
  uint in_register_00000034;
  
  (__this->fields)._Enabled_k__BackingField = value;
  if (CONCAT31(in_register_00000031,value) == 0) {
    CustomLogic_CustomLogicComponentInstance__DestroyLineRenderers
              (__this,(MethodInfo *)((ulong)in_register_00000034 << 0x20));
    return;
  }
  return;
}


// CustomLogic.CustomLogicComponentInstance$$RegisterLineRenderer
// il2cpp: void CustomLogic_CustomLogicComponentInstance__RegisterLineRenderer (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* lineRenderer, const MethodInfo* method);
// 0x5b6c610

void CustomLogic_CustomLogicComponentInstance__RegisterLineRenderer
               (CustomLogic_CustomLogicComponentInstance_o *__this,
               CustomLogic_CustomLogicLineRendererBuiltin_o *lineRenderer,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_07547323 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_Add);
    Il2CppMethodInitialized_07547323 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._lineRenderers;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            (__this_00,(Il2CppObject *)lineRenderer,
             (MethodInfo_4FB4450 *)
             MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_Add);
  return;
}


// CustomLogic.CustomLogicComponentInstance$$UnregisterLineRenderer
// il2cpp: void CustomLogic_CustomLogicComponentInstance__UnregisterLineRenderer (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* lineRenderer, const MethodInfo* method);
// 0x5b6c660

void CustomLogic_CustomLogicComponentInstance__UnregisterLineRenderer
               (CustomLogic_CustomLogicComponentInstance_o *__this,
               CustomLogic_CustomLogicLineRendererBuiltin_o *lineRenderer,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_07547324 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_Remove);
    Il2CppMethodInitialized_07547324 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._lineRenderers;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Remove
            (__this_00,(Il2CppObject *)lineRenderer,
             (MethodInfo_4FB39F0 *)
             MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_Remove);
  return;
}


// CustomLogic.CustomLogicComponentInstance$$DestroyLineRenderers
// il2cpp: void CustomLogic_CustomLogicComponentInstance__DestroyLineRenderers (CustomLogic_CustomLogicComponentInstance_o* __this, const MethodInfo* method);
// 0x5b6c580

void CustomLogic_CustomLogicComponentInstance__DestroyLineRenderers
               (CustomLogic_CustomLogicComponentInstance_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_07547325 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToArray_CustomLogicLineRendererBuiltin);
    Il2CppMethodInitialized_07547325 = '\x01';
  }
  pSVar2 = System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields)._lineRenderers,
                      (MethodInfo_34FEA80 *)
                      MethodInfo_System_Linq_Enumerable_ToArray_CustomLogicLineRendererBuiltin);
  if (pSVar2 == (System_Object_array *)0x0) {
label_05b6c5ff:
    ThrowNullReferenceException();
  }
  uVar1 = (uint)pSVar2->max_length;
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      if (uVar1 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pSVar2->m_Items[(int)uVar3] ==
          (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) goto label_05b6c5ff;
      CustomLogic_CustomLogicLineRendererBuiltin__Destroy
                ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pSVar2->m_Items[(int)uVar3],(MethodInfo *)0x0
                );
      uVar3 = uVar3 + 1;
      uVar1 = (uint)pSVar2->max_length;
    } while ((int)uVar3 < (int)uVar1);
  }
  return;
}


// CustomLogic.CustomLogicComponentInstance$$.ctor
// il2cpp: void CustomLogic_CustomLogicComponentInstance___ctor (CustomLogic_CustomLogicComponentInstance_o* __this, System_String_o* name, Map_MapObject_o* obj, Map_MapScriptComponent_o* script, CustomLogic_CustomLogicNetworkViewBuiltin_o* networkView, const MethodInfo* method);
// 0x5b6c6b0

void CustomLogic_CustomLogicComponentInstance___ctor
               (CustomLogic_CustomLogicComponentInstance_o *__this,System_String_o *name,Map_MapObject_o *obj,
               Map_MapScriptComponent_o *script,CustomLogic_CustomLogicNetworkViewBuiltin_o *networkView,
               MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin__o *__this_01;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547326 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin);
    Il2CppMethodInitialized_07547326 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_4FB2EA0 *)
             MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_ctor);
  (__this->fields)._lineRenderers = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lineRenderers);
  CustomLogic_UserClassInstance___ctor((CustomLogic_UserClassInstance_o *)__this,name,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    method_00 = extraout_RDX_00;
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin(__this_00,obj,method_00);
  (__this->fields).MapObject = pCVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MapObject);
  (__this->fields)._script = script;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._script);
  (__this->fields).NetworkView = networkView;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NetworkView);
  return;
}


// CustomLogic.CustomLogicComponentInstance$$.ctor
// il2cpp: void CustomLogic_CustomLogicComponentInstance___ctor (CustomLogic_CustomLogicComponentInstance_o* __this, System_String_o* name, CustomLogic_CustomLogicMapObjectBuiltin_o* obj, Map_MapScriptComponent_o* script, CustomLogic_CustomLogicNetworkViewBuiltin_o* networkView, const MethodInfo* method);
// 0x5b6c7c0

void CustomLogic_CustomLogicComponentInstance___ctor_5a6c7c0
               (CustomLogic_CustomLogicComponentInstance_o *__this,System_String_o *name,
               CustomLogic_CustomLogicMapObjectBuiltin_o *obj,Map_MapScriptComponent_o *script,
               CustomLogic_CustomLogicNetworkViewBuiltin_o *networkView,MethodInfo *method)

{
  System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547327 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin);
    Il2CppMethodInitialized_07547327 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)
             MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_ctor);
  (__this->fields)._lineRenderers = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lineRenderers);
  CustomLogic_UserClassInstance___ctor((CustomLogic_UserClassInstance_o *)__this,name,(MethodInfo *)0x0);
  (__this->fields).MapObject = obj;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MapObject);
  (__this->fields)._script = script;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._script);
  (__this->fields).NetworkView = networkView;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NetworkView);
  return;
}


// CustomLogic.CustomLogicComponentInstance$$LoadVariables
// il2cpp: void CustomLogic_CustomLogicComponentInstance__LoadVariables (CustomLogic_CustomLogicComponentInstance_o* __this, const MethodInfo* method);
// 0x5b6c890
// eh: try 0x5b6ca2a..0x5b6cd16 -> pad 0x5b6cd45 (+22 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b6cd5d..0x5b6cd62 -> pad 0x5b6cd7f cleanup
// eh: try 0x5b6cd82..0x5b6cd8c -> pad 0x5b6cde3 catch (...) [compiler noexcept guard]
// eh: try 0x5b6cda6..0x5b6cdab -> pad 0x5b6cdce cleanup
// eh: try 0x5b6cdd1..0x5b6cddb -> pad 0x5b6cde3 catch (...) [compiler noexcept guard]
// asm: 63 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6cd1b: jmp 0x5b6cd8e
// asm:   0x5b6cd1d: jmp 0x5b6cd45
// asm:   0x5b6cd1f: jmp 0x5b6cd45
// asm:   0x5b6cd21: jmp 0x5b6cd8e
// asm:   0x5b6cd23: jmp 0x5b6cd8e
// asm:   0x5b6cd25: jmp 0x5b6cd8e
// asm:   0x5b6cd27: jmp 0x5b6cd8e
// asm:   0x5b6cd29: jmp 0x5b6cd8e
// asm:   0x5b6cd2b: jmp 0x5b6cd45
// asm:   0x5b6cd2d: jmp 0x5b6cd8e
// asm:   0x5b6cd2f: jmp 0x5b6cd45
// asm:   0x5b6cd31: jmp 0x5b6cd8e
// asm:   0x5b6cd33: jmp 0x5b6cd45
// asm:   0x5b6cd35: jmp 0x5b6cd45
// asm:   0x5b6cd37: jmp 0x5b6cd45
// asm:   0x5b6cd39: jmp 0x5b6cd45
// asm:   0x5b6cd3b: jmp 0x5b6cd45
// asm:   0x5b6cd3d: jmp 0x5b6cd45
// asm:   0x5b6cd3f: jmp 0x5b6cd45
// asm:   0x5b6cd41: jmp 0x5b6cd8e
// asm:   0x5b6cd43: jmp 0x5b6cd8e
// asm:   0x5b6cd45: mov r12, rax
// asm:   0x5b6cd48: cmp edx, 1
// asm:   0x5b6cd4b: jne 0x5b6cd82
// asm:   0x5b6cd4d: mov rdi, r12
// asm:   0x5b6cd50: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b6cd55: mov rbx, qword ptr [rax]
// asm:   0x5b6cd58: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5b6cd5d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b6cd62: lea rax, [rip + 0x1721d8f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5b6cd69: mov rsi, qword ptr [rax]
// asm:   0x5b6cd6c: mov rdi, rsp
// asm:   0x5b6cd6f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b6cd74: test rbx, rbx
// asm:   0x5b6cd77: je 0x5b6cb32
// asm:   0x5b6cd7d: jmp 0x5b6cdc6
// asm:   0x5b6cd7f: mov r12, rax
// asm:   0x5b6cd82: lea rdi, [rsp + 0x20]
// asm:   0x5b6cd87: call 0x2fd74f0  ; il2cpp_runtime_helper_02fd74f0()
// asm:   0x5b6cd8c: jmp 0x5b6cddb
// asm:   0x5b6cd8e: mov r12, rax
// asm:   0x5b6cd91: cmp edx, 1
// asm:   0x5b6cd94: jne 0x5b6cdd1
// asm:   0x5b6cd96: mov rdi, r12
// asm:   0x5b6cd99: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b6cd9e: mov rbx, qword ptr [rax]
// asm:   0x5b6cda1: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5b6cda6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b6cdab: lea rax, [rip + 0x1721d46]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5b6cdb2: mov rsi, qword ptr [rax]
// asm:   0x5b6cdb5: mov rdi, rsp
// asm:   0x5b6cdb8: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b6cdbd: test rbx, rbx
// asm:   0x5b6cdc0: je 0x5b6ccd5
// asm:   0x5b6cdc6: mov rdi, rbx
// asm:   0x5b6cdc9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b6cdce: mov r12, rax
// asm:   0x5b6cdd1: lea rdi, [rsp + 0x20]
// asm:   0x5b6cdd6: call 0x2fd7520  ; il2cpp_runtime_helper_02fd7520()
// asm:   0x5b6cddb: mov rdi, r12
// asm:   0x5b6cdde: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b6cde3: mov rdi, rax
// asm:   0x5b6cde6: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicComponentInstance__LoadVariables
               (CustomLogic_CustomLogicComponentInstance_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *value;
  Map_MapScriptComponent_o *pMVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar4;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  bool bVar5;
  System_String_array *pSVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Collections_Generic_List_TSource__o *__this_03;
  System_String_o *pSVar8;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  System_String_o *local_58;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07547328 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    il2cpp_codegen_initialize_runtime_metadata(&"MapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"NetworkView");
    Il2CppMethodInitialized_07547328 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (System_String_o *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar2,(Il2CppObject *)"MapObject",(Il2CppObject *)(__this->fields).MapObject,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    value = (__this->fields).NetworkView;
    if (value != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05b6cd16;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar2,(Il2CppObject *)"NetworkView",(Il2CppObject *)value,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    }
    pMVar3 = (__this->fields)._script;
    if ((pMVar3 != (Map_MapScriptComponent_o *)0x0) &&
       (__this_00 = (pMVar3->fields).Parameters, __this_00 != (System_Collections_Generic_List_string__o *)0x0
       )) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_58 = local_38;
      local_68 = (undefined1  [8])local_48._0_8_;
      puStack_60 = (undefined1 *)local_48._8_8_;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_48._8_8_ = local_68;
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        if (!bVar5) break;
        if (local_58 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar6 = System_String__Split(local_58,0x3a,0,(MethodInfo *)0x0);
        if (pSVar6 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        iVar1 = (int)pSVar6->max_length;
        if (iVar1 == 0) {
          ThrowIndexOutOfRangeException();
        }
        if (iVar1 == 1) {
          ThrowIndexOutOfRangeException();
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = pSVar6->m_Items[0];
        pSVar8 = pSVar6->m_Items[1];
        bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar2,(Il2CppObject *)pSVar4,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
        if (bVar5) {
          if (Il2CppMethodInitialized_07547356 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"Type");
            Il2CppMethodInitialized_07547356 = '\x01';
          }
          bVar5 = System_String__op_Equality(pSVar4,"Type",(MethodInfo *)0x0);
          if ((!bVar5) || ((__this->fields)._containsTypeOverride != false)) {
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,(Il2CppObject *)pSVar4,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
            pIVar7 = CustomLogic_CustomLogicComponentInstance__DeserializeValue(pIVar7,pSVar8,method_00);
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar2,(Il2CppObject *)pSVar4,pIVar7,
                       (MethodInfo_4AAD4C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        source = System_Collections_Generic_Dictionary_object__object___get_Keys
                           (pSVar2,(MethodInfo_4AAD0F0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
        __this_03 = System_Linq_Enumerable__ToList_object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                               (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
        if (__this_03 != (System_Collections_Generic_List_TSource__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                     (System_Collections_Generic_List_object__o *)__this_03,
                     (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
          local_58 = local_38;
          local_68 = (undefined1  [8])local_48._0_8_;
          puStack_60 = (undefined1 *)local_48._8_8_;
          local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_48._8_8_ = local_68;
          while( true ) {
            do {
              do {
                bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                   (MethodInfo_4C45C50 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
                pSVar4 = local_58;
                if (!bVar5) {
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                             (MethodInfo_4C45C40 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
                  return;
                }
                if (local_58 == (System_String_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar5 = System_String__StartsWith(local_58,"_",(MethodInfo *)0x0);
              } while (bVar5);
              if (Il2CppMethodInitialized_07547356 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&"Type");
                Il2CppMethodInitialized_07547356 = '\x01';
              }
              bVar5 = System_String__op_Equality(pSVar4,"Type",(MethodInfo *)0x0);
            } while ((bVar5) && ((__this->fields)._containsTypeOverride == false));
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
            pSVar8 = (*(__this->klass->vtable)._6_get_ClassName.methodPtr)
                               (__this,(__this->klass->vtable)._6_get_ClassName.method);
            __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
            if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (__this_02,(Il2CppObject *)pSVar4,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
            if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar7 = CustomLogic_CustomLogicEvaluator__ApplyComponentInspectorRules
                               (__this_01,pSVar8,pSVar4,pIVar7,in_R8);
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar2,(Il2CppObject *)pSVar4,pIVar7,
                       (MethodInfo_4AAD4C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
label_05b6cd16:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicComponentInstance$$UsesCollider
// il2cpp: bool CustomLogic_CustomLogicComponentInstance__UsesCollider (CustomLogic_CustomLogicComponentInstance_o* __this, const MethodInfo* method);
// 0x5b6d9c0

bool CustomLogic_CustomLogicComponentInstance__UsesCollider
               (CustomLogic_CustomLogicComponentInstance_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar2;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07547329 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionStay");
    il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionEnter");
    il2cpp_codegen_initialize_runtime_metadata(&"OnGetHit");
    il2cpp_codegen_initialize_runtime_metadata(&"OnGetHooked");
    il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionExit");
    Il2CppMethodInitialized_07547329 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                    (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnCollisionStay",in_RCX);
  if ((((bVar2) ||
       (bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                          (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnCollisionEnter",
                           in_RCX), bVar2)) ||
      (bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                         (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnCollisionExit",
                          in_RCX), bVar2)) ||
     (bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                        (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnGetHit",
                         in_RCX), bVar2)) {
    return true;
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__HasMethod
                    (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnGetHooked",in_RCX);
  return bVar2;
}


// CustomLogic.CustomLogicComponentInstance$$OnCollisionStay
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnCollisionStay (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_BuiltinClassInstance_o* other, CustomLogic_BuiltinClassInstance_o* collision, const MethodInfo* method);
// 0x5b6b820
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6b94e: jmp 0x5b6b99a

void CustomLogic_CustomLogicComponentInstance__OnCollisionStay
               (CustomLogic_CustomLogicComponentInstance_o *__this,CustomLogic_BuiltinClassInstance_o *other,
               CustomLogic_BuiltinClassInstance_o *collision,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_String_o *methodName;
  bool bVar1;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar2;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_0754732a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionStay");
    Il2CppMethodInitialized_0754732a = '\x01';
  }
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameterValues == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((other != (CustomLogic_BuiltinClassInstance_o *)0x0) &&
     (pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)other,(((parameterValues->obj).klass)->_1).element_class),
     pIVar2 == (Il2CppObject *)0x0)) {
label_05b6b9ab:
    pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = (Il2CppObject *)other;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    if ((collision != (CustomLogic_BuiltinClassInstance_o *)0x0) &&
       (pIVar2 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)collision,(((parameterValues->obj).klass)->_1).element_class),
       pIVar2 == (Il2CppObject *)0x0)) goto label_05b6b9ab;
    if ((parameterValues->max_length & 0xfffffffe) != 0) {
      parameterValues->m_Items[1] = (Il2CppObject *)collision;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1);
      methodName = "OnCollisionStay";
      if (Il2CppMethodInitialized_0754732f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_0754732f = '\x01';
      }
      bVar1 = (*(__this->klass->vtable)._4_get_Enabled.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_Enabled.method);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        }
        else {
          __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        }
        if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
           (bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                              (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,method),
           bVar1)) {
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,parameterValues,0,
                     in_R9);
          return;
        }
      }
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicComponentInstance$$OnCollisionEnter
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnCollisionEnter (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_BuiltinClassInstance_o* other, CustomLogic_BuiltinClassInstance_o* collision, const MethodInfo* method);
// 0x5b6b510
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6b63e: jmp 0x5b6b68a

void CustomLogic_CustomLogicComponentInstance__OnCollisionEnter
               (CustomLogic_CustomLogicComponentInstance_o *__this,CustomLogic_BuiltinClassInstance_o *other,
               CustomLogic_BuiltinClassInstance_o *collision,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_String_o *methodName;
  bool bVar1;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar2;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_0754732b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionEnter");
    Il2CppMethodInitialized_0754732b = '\x01';
  }
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameterValues == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((other != (CustomLogic_BuiltinClassInstance_o *)0x0) &&
     (pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)other,(((parameterValues->obj).klass)->_1).element_class),
     pIVar2 == (Il2CppObject *)0x0)) {
label_05b6b69b:
    pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = (Il2CppObject *)other;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    if ((collision != (CustomLogic_BuiltinClassInstance_o *)0x0) &&
       (pIVar2 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)collision,(((parameterValues->obj).klass)->_1).element_class),
       pIVar2 == (Il2CppObject *)0x0)) goto label_05b6b69b;
    if ((parameterValues->max_length & 0xfffffffe) != 0) {
      parameterValues->m_Items[1] = (Il2CppObject *)collision;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1);
      methodName = "OnCollisionEnter";
      if (Il2CppMethodInitialized_0754732f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_0754732f = '\x01';
      }
      bVar1 = (*(__this->klass->vtable)._4_get_Enabled.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_Enabled.method);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        }
        else {
          __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        }
        if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
           (bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                              (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,method),
           bVar1)) {
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,parameterValues,0,
                     in_R9);
          return;
        }
      }
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicComponentInstance$$OnCollisionExit
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnCollisionExit (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_BuiltinClassInstance_o* other, CustomLogic_BuiltinClassInstance_o* collision, const MethodInfo* method);
// 0x5b6bb30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6bc5e: jmp 0x5b6bcaa

void CustomLogic_CustomLogicComponentInstance__OnCollisionExit
               (CustomLogic_CustomLogicComponentInstance_o *__this,CustomLogic_BuiltinClassInstance_o *other,
               CustomLogic_BuiltinClassInstance_o *collision,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_String_o *methodName;
  bool bVar1;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar2;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_0754732c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionExit");
    Il2CppMethodInitialized_0754732c = '\x01';
  }
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameterValues == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((other != (CustomLogic_BuiltinClassInstance_o *)0x0) &&
     (pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)other,(((parameterValues->obj).klass)->_1).element_class),
     pIVar2 == (Il2CppObject *)0x0)) {
label_05b6bcbb:
    pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = (Il2CppObject *)other;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    if ((collision != (CustomLogic_BuiltinClassInstance_o *)0x0) &&
       (pIVar2 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)collision,(((parameterValues->obj).klass)->_1).element_class),
       pIVar2 == (Il2CppObject *)0x0)) goto label_05b6bcbb;
    if ((parameterValues->max_length & 0xfffffffe) != 0) {
      parameterValues->m_Items[1] = (Il2CppObject *)collision;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1);
      methodName = "OnCollisionExit";
      if (Il2CppMethodInitialized_0754732f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_0754732f = '\x01';
      }
      bVar1 = (*(__this->klass->vtable)._4_get_Enabled.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_Enabled.method);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        }
        else {
          __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        }
        if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
           (bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                              (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,method),
           bVar1)) {
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,parameterValues,0,
                     in_R9);
          return;
        }
      }
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicComponentInstance$$OnGetHit
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnGetHit (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* character, System_String_o* name, int32_t damage, System_String_o* type, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x5b6ad70

void CustomLogic_CustomLogicComponentInstance__OnGetHit
               (CustomLogic_CustomLogicComponentInstance_o *__this,
               CustomLogic_CustomLogicCharacterBuiltin_o *character,System_String_o *name,int32_t damage,
               System_String_o *type,CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_String_o *methodName;
  CustomLogic_CustomLogicComponentInstance_o *classInstance;
  bool bVar1;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined4 in_register_0000000c;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t local_3c;
  CustomLogic_CustomLogicComponentInstance_o *local_38;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_0000000c,damage);
  method_01 = (MethodInfo *)position;
  local_38 = __this;
  if (Il2CppMethodInitialized_0754732d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnGetHit");
    Il2CppMethodInitialized_0754732d = '\x01';
  }
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
  if (parameterValues == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (character != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst
                       ((Il2CppObject *)character,(((parameterValues->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) goto label_05b6afbb;
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = (Il2CppObject *)character;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    if (name != (System_String_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)name,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_05b6afbb;
    }
    if ((parameterValues->max_length & 0xfffffffe) == 0) goto label_05b6afb6;
    parameterValues->m_Items[1] = (Il2CppObject *)name;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1);
    local_3c = damage;
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&local_3c);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_05b6afbb;
    }
    if ((uint)parameterValues->max_length < 3) goto label_05b6afb6;
    parameterValues->m_Items[2] = pIVar2;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 2);
    if (type != (System_String_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)type,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_05b6afbb;
    }
    if ((parameterValues->max_length & 0xfffffffc) != 0) {
      parameterValues->m_Items[3] = (Il2CppObject *)type;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 3);
      if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)position,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
label_05b6afbb:
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (4 < (uint)parameterValues->max_length) {
        parameterValues->m_Items[4] = (Il2CppObject *)position;
        Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 4);
        methodName = "OnGetHit";
        if (Il2CppMethodInitialized_0754732f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
          Il2CppMethodInitialized_0754732f = '\x01';
        }
        classInstance = local_38;
        bVar1 = (*(local_38->klass->vtable)._4_get_Enabled.methodPtr)
                          (local_38,(local_38->klass->vtable)._4_get_Enabled.method);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
          if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                              (__this_00,(CustomLogic_CustomLogicClassInstance_o *)classInstance,methodName,
                               method_00);
            if (bVar1) {
              CustomLogic_CustomLogicEvaluator__EvaluateMethod
                        (__this_00,(CustomLogic_CustomLogicClassInstance_o *)classInstance,methodName,
                         parameterValues,0,method_01);
            }
          }
        }
        return;
      }
    }
  }
label_05b6afb6:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicComponentInstance$$OnGetHooked
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnGetHooked (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* human, CustomLogic_CustomLogicVector3Builtin_o* position, bool left, const MethodInfo* method);
// 0x5b6b1b0

void CustomLogic_CustomLogicComponentInstance__OnGetHooked
               (CustomLogic_CustomLogicComponentInstance_o *__this,
               CustomLogic_CustomLogicHumanBuiltin_o *human,CustomLogic_CustomLogicVector3Builtin_o *position,
               bool left,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_String_o *methodName;
  bool bVar1;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined7 in_register_00000009;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  undefined1 local_29;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000009,left);
  if (Il2CppMethodInitialized_0754732e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnGetHooked");
    Il2CppMethodInitialized_0754732e = '\x01';
  }
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  if (parameterValues == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (human != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)human,(((parameterValues->obj).klass)->_1).element_class)
    ;
    if (pIVar2 == (Il2CppObject *)0x0) goto label_05b6b37a;
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = (Il2CppObject *)human;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)position,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_05b6b37a;
    }
    if ((parameterValues->max_length & 0xfffffffe) != 0) {
      parameterValues->m_Items[1] = (Il2CppObject *)position;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1);
      local_29 = left;
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,&local_29);
      if (pIVar2 != (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameterValues->obj).klass)->_1).element_class);
        if (pIVar3 == (Il2CppObject *)0x0) {
label_05b6b37a:
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)parameterValues->max_length) {
        parameterValues->m_Items[2] = pIVar2;
        Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 2);
        methodName = "OnGetHooked";
        if (Il2CppMethodInitialized_0754732f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
          Il2CppMethodInitialized_0754732f = '\x01';
        }
        bVar1 = (*(__this->klass->vtable)._4_get_Enabled.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_Enabled.method);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
          if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                              (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,method_00
                              );
            if (bVar1) {
              CustomLogic_CustomLogicEvaluator__EvaluateMethod
                        (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,parameterValues
                         ,0,in_R9);
            }
          }
        }
        return;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicComponentInstance$$EvaluateMethodForCallbacks
// il2cpp: void CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks (CustomLogic_CustomLogicComponentInstance_o* __this, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x5b6dbc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6dc28: jmp 0x5b6dc74

void CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
               (CustomLogic_CustomLogicComponentInstance_o *__this,System_String_o *methodName,
               System_Object_array *parameters,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar1;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_0754732f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_0754732f = '\x01';
  }
  bVar1 = (*(__this->klass->vtable)._4_get_Enabled.methodPtr)
                    (__this,(__this->klass->vtable)._4_get_Enabled.method);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
       (bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                          (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,method),
       bVar1)) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,parameters,0,in_R9);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicComponentInstance$$DeserializeValue
// il2cpp: Il2CppObject* CustomLogic_CustomLogicComponentInstance__DeserializeValue (Il2CppObject* obj, System_String_o* value, const MethodInfo* method);
// 0x5b6ce50
// asm: 66 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6d123: mov r12d, eax
// asm:   0x5b6d126: mov rdi, qword ptr [rbx + 0x38]
// asm:   0x5b6d12a: xor esi, esi
// asm:   0x5b6d12c: call 0x55b7710  ; System_Int32__Parse()
// asm:   0x5b6d131: mov ebx, eax
// asm:   0x5b6d133: lea rax, [rip + 0x17095d6]  ; TypeInfo_Utility_Color255
// asm:   0x5b6d13a: mov rdi, qword ptr [rax]
// asm:   0x5b6d13d: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b6d142: mov rbp, rax
// asm:   0x5b6d145: mov rdi, rax
// asm:   0x5b6d148: mov esi, r14d
// asm:   0x5b6d14b: mov edx, r15d
// asm:   0x5b6d14e: mov ecx, r12d
// asm:   0x5b6d151: mov r8d, ebx
// asm:   0x5b6d154: xor r9d, r9d
// asm:   0x5b6d157: call 0x5de7730  ; Utility_Color255___ctor()
// asm:   0x5b6d15c: mov rdi, qword ptr [r13]
// asm:   0x5b6d160: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b6d165: mov r15, rax
// asm:   0x5b6d168: mov rdi, rax
// asm:   0x5b6d16b: mov rsi, rbp
// asm:   0x5b6d16e: xor edx, edx
// asm:   0x5b6d170: call 0x59aa2e0  ; CustomLogic_CustomLogicColorBuiltin___ctor()
// asm:   0x5b6d175: jmp 0x5b6d096
// asm:   0x5b6d1e1: mov rdi, qword ptr [rbx + 0x30]
// asm:   0x5b6d1e5: xor esi, esi
// asm:   0x5b6d1e7: call 0x55d0c00  ; System_Single__Parse()
// asm:   0x5b6d1ec: movss dword ptr [rsp + 4], xmm0
// asm:   0x5b6d1f2: mov rdi, qword ptr [rbp]
// asm:   0x5b6d1f6: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b6d1fb: mov r15, rax
// asm:   0x5b6d1fe: movaps xmm0, xmmword ptr [rsp + 0x20]
// asm:   0x5b6d203: unpcklps xmm0, xmmword ptr [rsp + 0x10]
// asm:   0x5b6d208: mov rdi, rax
// asm:   0x5b6d20b: movss xmm1, dword ptr [rsp + 4]
// asm:   0x5b6d211: xor esi, esi
// asm:   0x5b6d213: call 0x59df850  ; CustomLogic_CustomLogicVector3Builtin___ctor()
// asm:   0x5b6d218: jmp 0x5b6d096
// asm:   0x5b6d21d: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b6d222: mov r15, rax
// asm:   0x5b6d225: mov rdi, rax
// asm:   0x5b6d228: xor esi, esi
// asm:   0x5b6d22a: call 0x59ad900  ; CustomLogic_CustomLogicDictBuiltin___ctor()
// asm:   0x5b6d22f: jmp 0x5b6d096
// asm:   0x5b6d242: mov rdi, qword ptr [rbx]
// asm:   0x5b6d245: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b6d24a: mov r15, rax
// asm:   0x5b6d24d: mov rdi, rax
// asm:   0x5b6d250: xor esi, esi
// asm:   0x5b6d252: call 0x59b0dd0  ; CustomLogic_CustomLogicListBuiltin___ctor()
// asm:   0x5b6d257: jmp 0x5b6d096
// asm:   0x5b6d306: lea rax, [rip + 0x173b62b]  ; MethodInfo_System_Linq_Enumerable_Select_string_object
// asm:   0x5b6d30d: mov rdx, qword ptr [rax]
// asm:   0x5b6d310: mov rdi, r15
// asm:   0x5b6d313: mov rsi, rbp
// asm:   0x5b6d316: call 0x35f60f0  ; System_Linq_Enumerable__Select_object__object_()
// asm:   0x5b6d31b: mov rbp, rax
// asm:   0x5b6d31e: mov rdi, qword ptr [rbx]
// asm:   0x5b6d321: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b6d326: mov r15, rax
// asm:   0x5b6d329: mov rdi, rax
// asm:   0x5b6d32c: mov rsi, rbp
// asm:   0x5b6d32f: xor edx, edx
// asm:   0x5b6d331: xor ecx, ecx
// asm:   0x5b6d333: call 0x59ae130  ; CustomLogic_CustomLogicListBuiltin___ctor()
// asm:   0x5b6d338: jmp 0x5b6d096

Il2CppObject *
CustomLogic_CustomLogicComponentInstance__DeserializeValue
          (Il2CppObject *obj,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  Utility_Color255_o *__this;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  CustomLogic_CustomLogicDictBuiltin_o *__this_02;
  CustomLogic_CustomLogicListBuiltin_o *pCVar6;
  System_String_array *pSVar7;
  CustomLogic_CustomLogicComponentInstance___c_StaticFields *pCVar8;
  System_Func_string__object__o *__this_03;
  System_Collections_Generic_IEnumerable_TResult__o *enumerable;
  float *data;
  UnityEngine_Vector3_o value_00;
  undefined1 local_65;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_48;
  
  if (Il2CppMethodInitialized_07547330 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicComponentInstance_c_DeserializeValue_b__20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicComponentInstance_c);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_07547330 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    pIVar5 = (Il2CppObject *)0x0;
    System_String__op_Equality(value,"null",(MethodInfo *)0x0);
  }
  else {
    pIVar4 = g_data_07556758;
    if (obj->klass != g_data_07556758) {
      bVar3 = System_String__op_Equality(value,"null",(MethodInfo *)0x0);
      if (obj == (Il2CppObject *)0x0) {
        return (Il2CppObject *)0x0;
      }
      if (bVar3) {
        return (Il2CppObject *)0x0;
      }
      pIVar4 = obj->klass;
    }
    if (pIVar4 == g_data_07556710) {
      local_5c = (float)System_Int32__Parse(value,(MethodInfo *)0x0);
      data = &local_5c;
      pIVar4 = g_data_07556710;
    }
    else if (pIVar4 == g_data_07556740) {
      local_60 = System_Single__Parse(value,(MethodInfo *)0x0);
      data = &local_60;
      pIVar4 = g_data_07556740;
    }
    else {
      if (pIVar4 == g_data_07556758) {
        return (Il2CppObject *)value;
      }
      if (pIVar4 != g_data_075566f0) {
        bVar1 = (pIVar4->_2).typeHierarchyDepth;
        bVar2 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
        if ((bVar1 < bVar2) ||
           ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
          bVar2 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
          if ((bVar1 < bVar2) ||
             ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
            bVar2 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin->_2).typeHierarchyDepth;
            if ((bVar2 <= bVar1) &&
               ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin)) {
              __this_02 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin);
              CustomLogic_CustomLogicDictBuiltin___ctor(__this_02,(MethodInfo *)0x0);
              return (Il2CppObject *)__this_02;
            }
            bVar2 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
            if ((bVar1 < bVar2) ||
               ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin)) {
              return (Il2CppObject *)0x0;
            }
            bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
            if (bVar3) {
              pCVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
              CustomLogic_CustomLogicListBuiltin___ctor(pCVar6,(MethodInfo *)0x0);
              return (Il2CppObject *)pCVar6;
            }
            if (value != (System_String_o *)0x0) {
              pSVar7 = System_String__Split(value,0x2f,0,(MethodInfo *)0x0);
              if ((TypeInfo_CustomLogic_CustomLogicComponentInstance_c->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicComponentInstance_c);
              }
              pCVar8 = TypeInfo_CustomLogic_CustomLogicComponentInstance_c->static_fields;
              __this_03 = pCVar8->__9__20_0;
              if (__this_03 == (System_Func_string__object__o *)0x0) {
                if ((TypeInfo_CustomLogic_CustomLogicComponentInstance_c->_2).cctor_finished_or_no_cctor == 0)
                {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicComponentInstance_c);
                  pCVar8 = TypeInfo_CustomLogic_CustomLogicComponentInstance_c->static_fields;
                }
                pIVar5 = (Il2CppObject *)pCVar8->__9;
                __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_object);
                System_Func_object__object____ctor
                          ((System_Func_object__object__o *)__this_03,pIVar5,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicComponentInstance_c_DeserializeValue_b__20_0,
                           (MethodInfo_4F19B50 *)0x0);
                pCVar8 = TypeInfo_CustomLogic_CustomLogicComponentInstance_c->static_fields;
                pCVar8->__9__20_0 = __this_03;
                Il2CppCodeGenWriteBarrier(&pCVar8->__9__20_0);
              }
              enumerable = System_Linq_Enumerable__Select_object__object_
                                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,
                                      (System_Func_TSource__TResult__o *)__this_03,
                                      (MethodInfo_34F60F0 *)
                                      MethodInfo_System_Linq_Enumerable_Select_string_object);
              pCVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
              CustomLogic_CustomLogicListBuiltin___ctor_58ae130
                        (pCVar6,(System_Collections_Generic_IEnumerable_object__o *)enumerable,false,
                         (MethodInfo *)0x0);
              return (Il2CppObject *)pCVar6;
            }
          }
          else if ((value != (System_String_o *)0x0) &&
                  (pSVar7 = System_String__Split(value,0x2f,0,(MethodInfo *)0x0),
                  pSVar7 != (System_String_array *)0x0)) {
            if (((int)pSVar7->max_length != 0) &&
               ((local_48 = System_Single__Parse(pSVar7->m_Items[0],(MethodInfo *)0x0),
                (pSVar7->max_length & 0xfffffffe) != 0 &&
                (local_58 = System_Single__Parse(pSVar7->m_Items[1],(MethodInfo *)0x0),
                2 < (uint)pSVar7->max_length)))) {
              local_64 = System_Single__Parse(pSVar7->m_Items[2],(MethodInfo *)0x0);
              __this_01 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
              value_00.fields.y = local_58;
              value_00.fields.x = local_48;
              value_00.fields.z = local_64;
              CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,value_00,(MethodInfo *)0x0);
              return (Il2CppObject *)__this_01;
            }
            goto label_05b6d33d;
          }
        }
        else if ((value != (System_String_o *)0x0) &&
                (pSVar7 = System_String__Split(value,0x2f,0,(MethodInfo *)0x0),
                pSVar7 != (System_String_array *)0x0)) {
          if (((int)pSVar7->max_length != 0) &&
             (((r = System_Int32__Parse(pSVar7->m_Items[0],(MethodInfo *)0x0),
               (pSVar7->max_length & 0xfffffffe) != 0 &&
               (g = System_Int32__Parse(pSVar7->m_Items[1],(MethodInfo *)0x0), 2 < (uint)pSVar7->max_length))
              && (b = System_Int32__Parse(pSVar7->m_Items[2],(MethodInfo *)0x0),
                 (pSVar7->max_length & 0xfffffffc) != 0)))) {
            a = System_Int32__Parse(pSVar7->m_Items[3],(MethodInfo *)0x0);
            __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
            Utility_Color255___ctor(__this,r,g,b,a,(MethodInfo *)0x0);
            __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)
            ;
            CustomLogic_CustomLogicColorBuiltin___ctor_58aa2e0(__this_00,__this,(MethodInfo *)0x0);
            return (Il2CppObject *)__this_00;
          }
label_05b6d33d:
          ThrowIndexOutOfRangeException();
        }
        ThrowNullReferenceException();
      }
      local_65 = System_String__op_Equality(value,"true",(MethodInfo *)0x0);
      data = (float *)&local_65;
      pIVar4 = g_data_075566f0;
    }
    pIVar5 = il2cpp_vm_Object_Box(pIVar4,data);
  }
  return pIVar5;
}


