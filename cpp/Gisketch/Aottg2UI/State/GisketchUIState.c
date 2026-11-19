// Type: Gisketch.Aottg2UI.State.GisketchUIState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.State/GisketchUIState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.State.GisketchUIState$$add_Changed
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__add_Changed (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_Action_string__o* value, const MethodInfo* method);
// 0x5343de0

void Gisketch_Aottg2UI_State_GisketchUIState__add_Changed
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_Action_string__o *value,
               MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  System_Action_string__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_string__o *a;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075428d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    Il2CppMethodInitialized_075428d4 = '\x01';
  }
  a = (__this->fields).Changed;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&(__this->fields).Changed,value_00,a);
    bVar3 = pSVar2 != a;
    a = pSVar2;
  } while (bVar3);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$remove_Changed
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_Action_string__o* value, const MethodInfo* method);
// 0x5344810

void Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_Action_string__o *value,
               MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  System_Action_string__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_string__o *source;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075428d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    Il2CppMethodInitialized_075428d5 = '\x01';
  }
  source = (__this->fields).Changed;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&(__this->fields).Changed,value_00,source);
    bVar3 = pSVar2 != source;
    source = pSVar2;
  } while (bVar3);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$Set
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__Set (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, System_String_o* value, const MethodInfo* method);
// 0x5346530

void Gisketch_Aottg2UI_State_GisketchUIState__Set
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,System_String_o *value,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Action_string__o *pSVar2;
  bool bVar3;
  System_String_o *local_20;
  
  if (Il2CppMethodInitialized_075428d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_075428d6 = '\x01';
  }
  local_20 = (System_String_o *)0x0;
  bVar3 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)key,(Il2CppObject **)&local_20,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if ((bVar3) && (bVar3 = System_String__op_Equality(local_20,value,(MethodInfo *)0x0), bVar3)) {
      return;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)key,(Il2CppObject *)value,
                 (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      pSVar2 = (__this->fields).Changed;
      if (pSVar2 == (System_Action_string__o *)0x0) {
        return;
      }
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,key,(pSVar2->fields).method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIState$$CopyFrom
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__CopyFrom (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, Gisketch_Aottg2UI_State_GisketchUIState_o* other, const MethodInfo* method);
// 0x53467f0
// eh: try 0x53468d3..0x5346922 -> pad 0x534692b (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5346942..0x5346947 -> pad 0x5346968 cleanup
// eh: try 0x534696b..0x5346973 -> pad 0x534697b catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5346927: jmp 0x534692b
// asm:   0x5346929: jmp 0x534692b
// asm:   0x534692b: mov rbx, rax
// asm:   0x534692e: cmp edx, 1
// asm:   0x5346931: jne 0x534696b
// asm:   0x5346933: mov rdi, rbx
// asm:   0x5346936: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x534693b: mov rbx, qword ptr [rax]
// asm:   0x534693e: mov qword ptr [rsp], rbx
// asm:   0x5346942: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5346947: lea rax, [rip + 0x1f4982a]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose
// asm:   0x534694e: mov rsi, qword ptr [rax]
// asm:   0x5346951: lea rdi, [rsp + 0x10]
// asm:   0x5346956: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x534695b: test rbx, rbx
// asm:   0x534695e: je 0x5346911
// asm:   0x5346960: mov rdi, rbx
// asm:   0x5346963: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5346968: mov rbx, rax
// asm:   0x534696b: mov rdi, rsp
// asm:   0x534696e: call 0x2d4a390  ; il2cpp_runtime_helper_02d4a390()
// asm:   0x5346973: mov rdi, rbx
// asm:   0x5346976: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x534697b: mov rdi, rax
// asm:   0x534697e: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_State_GisketchUIState__CopyFrom
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,
               Gisketch_Aottg2UI_State_GisketchUIState_o *other,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_075428d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Value);
    Il2CppMethodInitialized_075428d7 = '\x01';
  }
  local_48.fields._current.fields.key = (Il2CppObject *)0x0;
  local_48.fields._current.fields.value = (Il2CppObject *)0x0;
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._version = 0;
  local_48.fields._index = 0;
  local_48.fields._getEnumeratorRetType = 0;
  local_48.fields._36_4_ = 0;
  if (other != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(other->fields)._values;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              (&local_48,pSVar1,
               (MethodInfo_4AAD970 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_48,
                         (MethodInfo_4CE66D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext);
      if (!bVar2) break;
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,local_48.fields._current.fields.key,local_48.fields._current.fields.value,
                 (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_48,
               (MethodInfo_4CE67F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$SetBool
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__SetBool (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, bool value, const MethodInfo* method);
// 0x53464c0

void Gisketch_Aottg2UI_State_GisketchUIState__SetBool
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,bool value,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if (Il2CppMethodInitialized_075428d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_075428d8 = '\x01';
  }
  if (__this == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (value) {
    ppSVar1 = &"true";
  }
  else {
    ppSVar1 = &"false";
  }
  Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,key,*ppSVar1,method);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$Get
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIState__Get (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x5344a90

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIState__Get
          (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,System_String_o *fallback,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_String_o *local_20;
  
  if (Il2CppMethodInitialized_075428d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_075428d9 = '\x01';
  }
  local_20 = (System_String_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)key,(Il2CppObject **)&local_20,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if (bVar1) {
      fallback = local_20;
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$GetBool
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIState__GetBool (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, bool fallback, const MethodInfo* method);
// 0x5345b50

bool Gisketch_Aottg2UI_State_GisketchUIState__GetBool
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,bool fallback,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  bool bVar2;
  System_String_o **ppSVar3;
  System_String_o *a;
  System_String_o *local_20;
  
  if (Il2CppMethodInitialized_075428da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_075428da = '\x01';
  }
  if (fallback) {
    ppSVar3 = &"true";
  }
  else {
    ppSVar3 = &"false";
  }
  if (__this == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
label_05345c55:
    ThrowNullReferenceException();
  }
  a = *ppSVar3;
  if (Il2CppMethodInitialized_075428d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_075428d9 = '\x01';
  }
  local_20 = (System_String_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05345c55;
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)key,(Il2CppObject **)&local_20,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if (bVar1) {
      a = local_20;
    }
  }
  bVar1 = System_String__op_Equality(a,"1",(MethodInfo *)0x0);
  bVar2 = true;
  if (!bVar1) {
    if (a == (System_String_o *)0x0) goto label_05345c55;
    bVar2 = System_String__Equals_52ffb20(a,"true",5,(MethodInfo *)0x0);
  }
  return bVar2;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$.ctor
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState___ctor (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, const MethodInfo* method);
// 0x5346990

void Gisketch_Aottg2UI_State_GisketchUIState___ctor
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  
  if (Il2CppMethodInitialized_075428db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    Il2CppMethodInitialized_075428db = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  (__this->fields)._values = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._values);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


