// Type: Gisketch.Aottg2UI.State.GisketchUIState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.State/GisketchUIState.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.State.GisketchUIState$$add_Changed
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__add_Changed (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_Action_string__o* value, const MethodInfo* method);
// 0x3ada5f0

void Gisketch_Aottg2UI_State_GisketchUIState__add_Changed
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_Action_string__o *value,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_string__o *pSVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *a;
  bool bVar5;
  
  if (DAT_05701388 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    DAT_05701388 = '\x01';
  }
  a = (__this->fields).Changed;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_string;
    lVar4 = 0;
    if (pSVar3 != (System_Delegate_o *)0x0) {
      lVar4 = il2cpp_runtime_glue(pSVar3,TypeInfo_Action_string);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar3,uVar1);
      }
    }
    pSVar2 = (System_Action_string__o *)il2cpp_glue_022c2530(&(__this->fields).Changed,lVar4,a);
    bVar5 = a != pSVar2;
    a = pSVar2;
  } while (bVar5);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$remove_Changed
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_Action_string__o* value, const MethodInfo* method);
// 0x3adac00

void Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_Action_string__o *value,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_string__o *pSVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *source;
  bool bVar5;
  
  if (DAT_05701389 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    DAT_05701389 = '\x01';
  }
  source = (__this->fields).Changed;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_string;
    lVar4 = 0;
    if (pSVar3 != (System_Delegate_o *)0x0) {
      lVar4 = il2cpp_runtime_glue(pSVar3,TypeInfo_Action_string);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar3,uVar1);
      }
    }
    pSVar2 = (System_Action_string__o *)il2cpp_glue_022c2530(&(__this->fields).Changed,lVar4,source);
    bVar5 = source != pSVar2;
    source = pSVar2;
  } while (bVar5);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$Set
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__Set (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, System_String_o* value, const MethodInfo* method);
// 0x3adc1b0

void Gisketch_Aottg2UI_State_GisketchUIState__Set
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,
               System_String_o *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Action_string__o *pSVar2;
  bool_conflict bVar3;
  System_String_o *local_20;
  
  if (DAT_0570138a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_0570138a = '\x01';
  }
  local_20 = (System_String_o *)0x0;
  bVar3 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (value == (System_String_o *)0x0) {
      value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                        (pSVar1,(Il2CppObject *)key,(Il2CppObject **)&local_20,MethodInfo_Boolean_TryGetValue);
      if (((char)bVar3 != '\0') &&
         (bVar3 = System_String__op_Equality(local_20,value,(MethodInfo *)0x0), (char)bVar3 != '\0')
         ) {
        return;
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar1,(Il2CppObject *)key,(Il2CppObject *)value,MethodInfo_Void_set_Item);
        pSVar2 = (__this->fields).Changed;
        if (pSVar2 == (System_Action_string__o *)0x0) {
          return;
        }
        (*(code *)(pSVar2->fields).invoke_impl)
                  ((pSVar2->fields).method_code,key,(pSVar2->fields).method);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$SetBool
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__SetBool (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, bool value, const MethodInfo* method);
// 0x3adc140

void Gisketch_Aottg2UI_State_GisketchUIState__SetBool
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,
               bool_conflict value,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (DAT_0570138b == '\0') {
    il2cpp_init_method_metadata(&"false");
    il2cpp_init_method_metadata(&"true");
    DAT_0570138b = '\x01';
  }
  if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    if ((char)value == '\0') {
      puVar1 = &"false";
    }
    else {
      puVar1 = &"true";
    }
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,key,(System_String_o *)*puVar1,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.State.GisketchUIState$$Get
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIState__Get (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x3adae90

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIState__Get
          (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,
          System_String_o *fallback,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  System_String_o *local_20;
  
  if (DAT_0570138c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_0570138c = '\x01';
  }
  local_20 = (System_String_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,(Il2CppObject *)key,(Il2CppObject **)&local_20,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 != '\0') {
      fallback = local_20;
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$GetBool
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIState__GetBool (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, bool fallback, const MethodInfo* method);
// 0x3adbb20

bool_conflict
Gisketch_Aottg2UI_State_GisketchUIState__GetBool
          (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,
          bool_conflict fallback,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  System_String_o *a;
  System_String_o *local_20;
  
  if (DAT_0570138d == '\0') {
    il2cpp_init_method_metadata(&"false");
    il2cpp_init_method_metadata(&"true");
    il2cpp_init_method_metadata(&"1");
    DAT_0570138d = '\x01';
  }
  if ((char)fallback == '\0') {
    puVar3 = &"false";
  }
  else {
    puVar3 = &"true";
  }
  if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    a = (System_String_o *)*puVar3;
    if (DAT_0570138c == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
      DAT_0570138c = '\x01';
    }
    local_20 = (System_String_o *)0x0;
    bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields)._values;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03adbc2d;
      bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                        (__this_00,(Il2CppObject *)key,(Il2CppObject **)&local_20,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar1 != '\0') {
        a = local_20;
      }
    }
    bVar1 = System_String__op_Equality(a,"1",(MethodInfo *)0x0);
    bVar2 = (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
    if ((char)bVar1 == '\0') {
      if (a == (System_String_o *)0x0) goto LAB_03adbc2d;
      bVar2 = System_String__Equals(a,"true",5,(MethodInfo *)0x0);
    }
    return bVar2;
  }
LAB_03adbc2d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.State.GisketchUIState$$.ctor
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState___ctor (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, const MethodInfo* method);
// 0x3adc470

void Gisketch_Aottg2UI_State_GisketchUIState___ctor
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_0570138e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    DAT_0570138e = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_String);
  (__this->fields)._values = (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  il2cpp_runtime_glue(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


