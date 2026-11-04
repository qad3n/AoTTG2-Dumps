// Type: Gisketch.Aottg2UI.State.GisketchUIState
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.State/GisketchUIState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.State.GisketchUIState$$add_Changed
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__add_Changed (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_Action_string__o* value, const MethodInfo* method);
// 0x1818be540
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818be579: nop dword ptr [rax]

void Gisketch_Aottg2UI_State_GisketchUIState__add_Changed
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_Action_string__o *value,
               MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_string__o *pSVar3;
  System_Action_string__o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184341f59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    Il2CppMethodInitialized_184341f59 = '\x01';
  }
  a = (__this->fields).Changed;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string;
    pIVar2 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar3 = (System_Action_string__o *)il2cpp_runtime_helper_1804174a0(&(__this->fields).Changed,pIVar2);
    bVar4 = pSVar3 != a;
    a = pSVar3;
  } while (bVar4);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$remove_Changed
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_Action_string__o* value, const MethodInfo* method);
// 0x1818be5f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818be629: nop dword ptr [rax]

void Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_Action_string__o *value,
               MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_string__o *pSVar3;
  System_Action_string__o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184341f5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    Il2CppMethodInitialized_184341f5a = '\x01';
  }
  source = (__this->fields).Changed;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string;
    pIVar2 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar3 = (System_Action_string__o *)il2cpp_runtime_helper_1804174a0(&(__this->fields).Changed,pIVar2);
    bVar4 = pSVar3 != source;
    source = pSVar3;
  } while (bVar4);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$Set
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__Set (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, System_String_o* value, const MethodInfo* method);
// 0x1818be3d0

void Gisketch_Aottg2UI_State_GisketchUIState__Set
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,System_String_o *value,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Action_string__o *pSVar2;
  bool bVar3;
  System_String_o *local_res10;
  
  if (Il2CppMethodInitialized_184341f5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_184341f5b = '\x01';
  }
  local_res10 = (System_String_o *)0x0;
  bVar3 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (!bVar3) {
    if (value == (System_String_o *)0x0) {
      value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar1,(Il2CppObject *)key,(Il2CppObject **)&local_res10,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
      if ((bVar3) && (bVar3 = System_String__op_Equality(local_res10,value,(MethodInfo *)0x0), bVar3)) {
        return;
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)key,(Il2CppObject *)value,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
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
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$SetBool
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__SetBool (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, bool value, const MethodInfo* method);
// 0x1818be350

void Gisketch_Aottg2UI_State_GisketchUIState__SetBool
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,bool value,
               MethodInfo *method)

{
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_184341f5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_184341f5c = '\x01';
  }
  value_00 = "false";
  if (value) {
    value_00 = "true";
  }
  if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,key,value_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIState$$Get
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIState__Get (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x1818be2b0

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIState__Get
          (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,System_String_o *fallback,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_String_o *local_res10;
  
  if (Il2CppMethodInitialized_184341f5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_184341f5d = '\x01';
  }
  local_res10 = (System_String_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)key,(Il2CppObject **)&local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if (bVar1) {
      return local_res10;
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$GetBool
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIState__GetBool (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, bool fallback, const MethodInfo* method);
// 0x1818be1e0

bool Gisketch_Aottg2UI_State_GisketchUIState__GetBool
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,bool fallback,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184341f5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_184341f5e = '\x01';
  }
  pSVar2 = "false";
  if (fallback) {
    pSVar2 = "true";
  }
  if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pSVar2 = Gisketch_Aottg2UI_State_GisketchUIState__Get(__this,key,pSVar2,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar2,"1",(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    if (pSVar2 != (System_String_o *)0x0) {
      bVar1 = System_String__Equals_196c240(pSVar2,"true",5,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.State.GisketchUIState$$.ctor
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState___ctor (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, const MethodInfo* method);
// 0x1818be4c0

void Gisketch_Aottg2UI_State_GisketchUIState___ctor
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  
  if (Il2CppMethodInitialized_184341f5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    Il2CppMethodInitialized_184341f5f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  (__this->fields)._values = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._values,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


