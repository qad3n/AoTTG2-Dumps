// Type: CustomLogic.CustomLogicJsonBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicJsonBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicJsonBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicJsonBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicJsonBuiltin_o* CustomLogic_CustomLogicJsonBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3f3b700

CustomLogic_CustomLogicJsonBuiltin_o *
CustomLogic_CustomLogicJsonBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05703d7c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicJsonBuiltin);
    DAT_05703d7c = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicJsonBuiltin);
      if (DAT_05703d78 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703d78 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,method);
      return (CustomLogic_CustomLogicJsonBuiltin_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicJsonBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicJsonBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3f3bcf0

void CustomLogic_CustomLogicJsonBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703d81 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d81 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3f3bd60

void CustomLogic_CustomLogicJsonBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$<__CreateMethodBinding__LoadFromString>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin_Bindings___c_____CreateMethodBinding__LoadFromString_b__2_0 (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicJsonBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f3bd70

Il2CppObject *
CustomLogic_CustomLogicJsonBuiltin_Bindings_<>c__<__CreateMethodBinding__LoadFromString>b__2_0
          (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicJsonBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *json;
  Il2CppObject *pIVar1;
  System_String_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05703d82 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703d82 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar1 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
  if (__this_00 != (System_String_o *)0x0) {
    System_String__Trim(__this_00,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    json = SimpleJSONFixed_JSON__Parse(__this_00,(MethodInfo *)0x0);
    pIVar1 = CustomLogic_CustomLogicJsonBuiltin__LoadJSON(json,method_00);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveToString>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin_Bindings___c_____CreateMethodBinding__SaveToString_b__3_0 (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicJsonBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f3bdf0

Il2CppObject *
CustomLogic_CustomLogicJsonBuiltin_Bindings_<>c__<__CreateMethodBinding__SaveToString>b__3_0
          (CustomLogic_CustomLogicJsonBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicJsonBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_c *pSVar1;
  Il2CppMethodPointer vtable_dispatch;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  Il2CppObject *pIVar3;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar2 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(__a->m_Items[0],(MethodInfo *)__c);
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar1 = pSVar2->klass;
      vtable_dispatch = (pSVar1->vtable)._30_ToString.methodPtr;
      pIVar3 = (Il2CppObject *)
               (*vtable_dispatch)
                         (pSVar2,4,(pSVar1->vtable)._30_ToString.method,pSVar1,vtable_dispatch
                         );
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicJsonBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3f3b820

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicJsonBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  undefined8 uVar5;
  System_Exception_o *__this;
  System_Func_T__object____object__o *pSVar6;
  CustomLogic_CLMethodBinding_T__o *pCVar7;
  
  if (DAT_05703d7d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"LoadFromString");
    il2cpp_init_method_metadata(&"SaveToString");
    DAT_05703d7d = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"LoadFromString",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"SaveToString",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pSVar4 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
      str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicJsonBuiltin not found");
      pSVar4 = System_String__Concat(pSVar4,name,str2,(MethodInfo *)0x0);
      uVar5 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this = (System_Exception_o *)il2cpp_runtime_glue(uVar5);
      System_Exception___ctor(__this,pSVar4,(MethodInfo *)0x0);
      uVar5 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this,uVar5);
    }
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703d7f == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicJsonBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SaveToString_b__3);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703d7f = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    else {
      pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    }
    if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicJsonBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar6;
      il2cpp_runtime_glue(lVar2 + 0x10,pSVar6);
    }
    pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar7;
  }
  if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703d7e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicJsonBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LoadFromString_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d7e = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicJsonBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar6;
    il2cpp_runtime_glue(lVar2 + 8,pSVar6);
  }
  pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar7;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$__CreateMethodBinding__LoadFromString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o* CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__LoadFromString (const MethodInfo* method);
// 0x3f3b960

CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *
CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__LoadFromString
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *__this;
  
  if (DAT_05703d7e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicJsonBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LoadFromString_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d7e = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicJsonBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
  return __this;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$__CreateMethodBinding__SaveToString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o* CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__SaveToString (const MethodInfo* method);
// 0x3f3bab0

CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *
CustomLogic_CustomLogicJsonBuiltin_Bindings____CreateMethodBinding__SaveToString(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *__this;
  
  if (DAT_05703d7f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicJsonBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SaveToString_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703d7f = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicJsonBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicJsonBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicJsonBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicJsonBuiltin);
  return __this;
}


// CustomLogic.CustomLogicJsonBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3f3bc00

void CustomLogic_CustomLogicJsonBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703d80 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"LoadFromString");
    il2cpp_init_method_metadata(&"SaveToString");
    DAT_05703d80 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"LoadFromString",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SaveToString",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicJsonBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicJsonBuiltin___ctor (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x3f39fb0

void CustomLogic_CustomLogicJsonBuiltin___ctor
               (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703d78 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703d78 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method);
  return;
}


// CustomLogic.CustomLogicJsonBuiltin$$LoadFromString
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin__LoadFromString (System_String_o* json, const MethodInfo* method);
// 0x3f3a010

Il2CppObject *
CustomLogic_CustomLogicJsonBuiltin__LoadFromString(System_String_o *json,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *json_00;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  
  if (json != (System_String_o *)0x0) {
    System_String__Trim(json,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    json_00 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
    pIVar1 = CustomLogic_CustomLogicJsonBuiltin__LoadJSON(json_00,method_00);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicJsonBuiltin$$SaveToString
// il2cpp: System_String_o* CustomLogic_CustomLogicJsonBuiltin__SaveToString (Il2CppObject* obj, const MethodInfo* method);
// 0x3f3aad0

System_String_o *
CustomLogic_CustomLogicJsonBuiltin__SaveToString(Il2CppObject *obj,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_c *pSVar1;
  Il2CppMethodPointer vtable_dispatch;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  
  pSVar2 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(obj,method);
  if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar1 = pSVar2->klass;
    vtable_dispatch = (pSVar1->vtable)._30_ToString.methodPtr;
    pSVar3 = (System_String_o *)
             (*vtable_dispatch)
                       (pSVar2,4,(pSVar1->vtable)._30_ToString.method,pSVar1,vtable_dispatch);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicJsonBuiltin$$LoadJSON
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJsonBuiltin__LoadJSON (SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x3f3a150

Il2CppObject *
CustomLogic_CustomLogicJsonBuiltin__LoadJSON(SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Object_array *pSVar3;
  System_String_o *a;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_03;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_04;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_05;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_06;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_07;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o __this_08;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_09;
  long lVar4;
  char cVar5;
  bool_conflict bVar6;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a_00;
  CustomLogic_CustomLogicDictBuiltin_o *__this_10;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  Il2CppObject *pIVar8;
  MethodInfo *key;
  System_String_o *pSVar9;
  System_String_array *pSVar10;
  CustomLogic_CustomLogicVector3Builtin_o *__this_11;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_12;
  Utility_Color255_o *__this_13;
  CustomLogic_CustomLogicColorBuiltin_o *__this_14;
  undefined8 uVar11;
  System_Exception_o *__this_15;
  MethodInfo *pMVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o value_00;
  undefined8 in_stack_fffffffffffffe08;
  int32_t in_stack_fffffffffffffe10;
  undefined4 in_stack_fffffffffffffe14;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffe18;
  InvokerMethod in_stack_fffffffffffffe20;
  Il2CppObject *in_stack_fffffffffffffe28;
  Il2CppClass *in_stack_fffffffffffffe30;
  Il2CppType *in_stack_fffffffffffffe38;
  System_Collections_Generic_List_T__o *in_stack_fffffffffffffe40;
  _union_13 in_stack_fffffffffffffe48;
  _union_14 local_1b0;
  undefined1 local_178 [80];
  undefined1 local_128 [80];
  undefined1 local_d8 [80];
  undefined1 local_88 [96];
  
  if (DAT_05703d79 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"int");
    il2cpp_init_method_metadata(&"string");
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&"quaternion");
    il2cpp_init_method_metadata(&"bool");
    il2cpp_init_method_metadata(&"vector3");
    il2cpp_init_method_metadata(&"color");
    il2cpp_init_method_metadata(&"float");
    il2cpp_init_method_metadata(&"1");
    DAT_05703d79 = '\x01';
  }
  local_128._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_128._56_8_ = (Il2CppRGCTXData *)0x0;
  local_128._32_8_ = (Il2CppClass *)0x0;
  local_128._40_8_ = (Il2CppType *)0x0;
  local_128._16_8_ = (InvokerMethod)0x0;
  local_128._24_8_ = (Il2CppObject *)0x0;
  local_128._0_8_ = (Il2CppMethodPointer)0x0;
  local_128._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_128._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_88._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_88._56_8_ = (Il2CppRGCTXData *)0x0;
  local_88._32_8_ = (Il2CppClass *)0x0;
  local_88._40_8_ = (Il2CppType *)0x0;
  local_88._16_8_ = (InvokerMethod)0x0;
  local_88._24_8_ = (Il2CppObject *)0x0;
  local_88._0_8_ = (Il2CppMethodPointer)0x0;
  local_88._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88._64_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_178._48_8_ = (Il2CppType **)0x0;
  local_178._56_8_ = (Il2CppRGCTXData *)0x0;
  local_178._32_8_ = (Il2CppClass *)0x0;
  local_178._40_8_ = (Il2CppType *)0x0;
  local_178._16_8_ = (InvokerMethod)0x0;
  local_178._24_8_ = (char *)0x0;
  local_178._0_8_ = (Il2CppMethodPointer)0x0;
  local_178._8_8_ = (Il2CppMethodPointer)0x0;
  local_178._64_8_ = (void *)0x0;
  local_d8._48_8_ = (Il2CppType **)0x0;
  local_d8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_d8._32_8_ = (Il2CppClass *)0x0;
  local_d8._40_8_ = (Il2CppType *)0x0;
  local_d8._16_8_ = (InvokerMethod)0x0;
  local_d8._24_8_ = (char *)0x0;
  local_d8._0_8_ = (Il2CppMethodPointer)0x0;
  local_d8._8_8_ = (Il2CppMethodPointer)0x0;
  local_d8._64_8_ = (void *)0x0;
  if (json == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_03f3aa35;
  cVar5 = (*(json->klass->vtable)._16_get_IsArray.methodPtr)(json);
  if (cVar5 == '\0') {
    cVar5 = (*(json->klass->vtable)._17_get_IsObject.methodPtr)(json);
    if (cVar5 == '\0') {
      cVar5 = (*(json->klass->vtable)._13_get_IsString.methodPtr)
                        (json,(json->klass->vtable)._13_get_IsString.method);
      if (cVar5 == '\0') {
LAB_03f3aa3f:
        uVar11 = il2cpp_init_method_metadata(&TypeInfo_Exception);
        __this_15 = (System_Exception_o *)il2cpp_runtime_glue(uVar11);
        pSVar9 = (System_String_o *)il2cpp_init_method_metadata(&"Loading invalid json format.");
        System_Exception___ctor(__this_15,pSVar9,(MethodInfo *)0x0);
        uVar11 = il2cpp_init_method_metadata(&MethodInfo_Object_LoadJSON);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_15,uVar11);
      }
      pSVar9 = (System_String_o *)
               (*(json->klass->vtable)._9_get_Value.methodPtr)
                         (json,(json->klass->vtable)._9_get_Value.method);
      if ((pSVar9 == (System_String_o *)0x0) ||
         (pSVar10 = System_String__Split(pSVar9,0x3a,0,(MethodInfo *)0x0),
         pSVar10 == (System_String_array *)0x0)) goto LAB_03f3aa35;
      if ((int)pSVar10->max_length == 0) goto LAB_03f3aa3a;
      a = pSVar10->m_Items[0];
      bVar6 = System_String__op_Equality(a,"float",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        bVar6 = System_String__op_Equality(a,"int",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          bVar6 = System_String__op_Equality(a,"string",(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            pSVar9 = System_String__Substring(pSVar9,7,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar9;
          }
          bVar6 = System_String__op_Equality(a,"bool",(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            bVar6 = System_String__op_Equality(a,"null",(MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              return (Il2CppObject *)0x0;
            }
            bVar6 = System_String__op_Equality(a,"vector3",(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') {
              bVar6 = System_String__op_Equality(a,"quaternion",(MethodInfo *)0x0);
              if ((char)bVar6 == '\0') {
                bVar6 = System_String__op_Equality(a,"color",(MethodInfo *)0x0);
                if ((char)bVar6 == '\0') goto LAB_03f3aa3f;
                pSVar9 = System_String__Substring(pSVar9,6,(MethodInfo *)0x0);
                if ((pSVar9 == (System_String_o *)0x0) ||
                   (pSVar10 = System_String__Split(pSVar9,0x2c,0,(MethodInfo *)0x0),
                   pSVar10 == (System_String_array *)0x0)) goto LAB_03f3aa35;
                if (((int)pSVar10->max_length != 0) &&
                   (((r = System_Int32__Parse(pSVar10->m_Items[0],(MethodInfo *)0x0),
                     1 < (uint)pSVar10->max_length &&
                     (g = System_Int32__Parse(pSVar10->m_Items[1],(MethodInfo *)0x0),
                     2 < (uint)pSVar10->max_length)) &&
                    (b = System_Int32__Parse(pSVar10->m_Items[2],(MethodInfo *)0x0),
                    3 < (uint)pSVar10->max_length)))) {
                  a_00 = System_Int32__Parse(pSVar10->m_Items[3],(MethodInfo *)0x0);
                  __this_13 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
                  Utility_Color255___ctor(__this_13,r,g,b,a_00,(MethodInfo *)0x0);
                  __this_14 = (CustomLogic_CustomLogicColorBuiltin_o *)
                              il2cpp_runtime_glue(TypeInfo_CustomLogicColorBuiltin);
                  CustomLogic_CustomLogicColorBuiltin___ctor(__this_14,__this_13,(MethodInfo *)0x0);
                  return (Il2CppObject *)__this_14;
                }
              }
              else {
                pSVar9 = System_String__Substring(pSVar9,0xb,(MethodInfo *)0x0);
                if ((pSVar9 == (System_String_o *)0x0) ||
                   (pSVar10 = System_String__Split(pSVar9,0x2c,0,(MethodInfo *)0x0),
                   pSVar10 == (System_String_array *)0x0)) goto LAB_03f3aa35;
                if ((((int)pSVar10->max_length != 0) &&
                    ((value_00.fields.x =
                           System_Single__Parse(pSVar10->m_Items[0],(MethodInfo *)0x0),
                     1 < (uint)pSVar10->max_length &&
                     (fVar13 = System_Single__Parse(pSVar10->m_Items[1],(MethodInfo *)0x0),
                     2 < (uint)pSVar10->max_length)))) &&
                   (fVar14 = System_Single__Parse(pSVar10->m_Items[2],(MethodInfo *)0x0),
                   3 < (uint)pSVar10->max_length)) {
                  local_88._80_4_ = System_Single__Parse(pSVar10->m_Items[3],(MethodInfo *)0x0);
                  __this_12 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
                              il2cpp_runtime_glue(TypeInfo_CustomLogicQuaternionBuiltin);
                  value_00.fields.y = fVar13;
                  value_00.fields.w = (float)local_88._80_4_;
                  value_00.fields.z = fVar14;
                  CustomLogic_CustomLogicQuaternionBuiltin___ctor
                            (__this_12,value_00,(MethodInfo *)0x0);
                  return (Il2CppObject *)__this_12;
                }
              }
            }
            else {
              pSVar9 = System_String__Substring(pSVar9,8,(MethodInfo *)0x0);
              if ((pSVar9 == (System_String_o *)0x0) ||
                 (pSVar10 = System_String__Split(pSVar9,0x2c,0,(MethodInfo *)0x0),
                 pSVar10 == (System_String_array *)0x0)) {
LAB_03f3aa35:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if ((((int)pSVar10->max_length != 0) &&
                  (value.fields.x = System_Single__Parse(pSVar10->m_Items[0],(MethodInfo *)0x0),
                  1 < (uint)pSVar10->max_length)) &&
                 (fVar13 = System_Single__Parse(pSVar10->m_Items[1],(MethodInfo *)0x0),
                 2 < (uint)pSVar10->max_length)) {
                fVar14 = System_Single__Parse(pSVar10->m_Items[2],(MethodInfo *)0x0);
                __this_11 = (CustomLogic_CustomLogicVector3Builtin_o *)
                            il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
                value.fields.y = fVar13;
                value.fields.z = fVar14;
                CustomLogic_CustomLogicVector3Builtin___ctor(__this_11,value,(MethodInfo *)0x0);
                return (Il2CppObject *)__this_11;
              }
            }
LAB_03f3aa3a:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar9 = System_String__Substring(pSVar9,5,(MethodInfo *)0x0);
          System_String__op_Equality(pSVar9,"1",(MethodInfo *)0x0);
          uVar11 = DAT_05711048;
        }
        else {
          pSVar9 = System_String__Substring(pSVar9,4,(MethodInfo *)0x0);
          System_Int32__Parse(pSVar9,(MethodInfo *)0x0);
          uVar11 = DAT_05711068;
        }
      }
      else {
        pSVar9 = System_String__Substring(pSVar9,6,(MethodInfo *)0x0);
        System_Single__Parse(pSVar9,(MethodInfo *)0x0);
        uVar11 = DAT_05711098;
      }
      __this_10 = (CustomLogic_CustomLogicDictBuiltin_o *)
                  il2cpp_runtime_glue(uVar11,&stack0xfffffffffffffe10);
    }
    else {
      __this_10 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicDictBuiltin);
      CustomLogic_CustomLogicDictBuiltin___ctor(__this_10,(MethodInfo *)0x0);
      SimpleJSONFixed_JSONNode__get_Keys
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffe10,json,
                 (MethodInfo *)0x0);
      __this_04.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ =
           in_stack_fffffffffffffe10;
      __this_04.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
      __this_04.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
           in_stack_fffffffffffffe14;
      __this_04.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
      __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_fffffffffffffe20;
      __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           in_stack_fffffffffffffe28;
      __this_04.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
      __this_04.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
      __this_04.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
      __this_04.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffe10,__this_04,
                 (MethodInfo *)local_d8);
      __this_05.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ =
           in_stack_fffffffffffffe10;
      __this_05.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
      __this_05.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
           in_stack_fffffffffffffe14;
      __this_05.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
      __this_05.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)in_stack_fffffffffffffe20;
      __this_05.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           in_stack_fffffffffffffe28;
      __this_05.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
      __this_05.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
      __this_05.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
      __this_05.fields.m_Enumerator.fields.m_Array.fields._current =
           (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
      bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_05,(MethodInfo *)local_178);
      if ((char)bVar6 != '\0') {
        if (__this_10 == (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
          __this_09.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ =
               in_stack_fffffffffffffe10;
          __this_09.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
          __this_09.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
               in_stack_fffffffffffffe14;
          __this_09.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
          __this_09.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
               (Il2CppObject *)in_stack_fffffffffffffe20;
          __this_09.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
               in_stack_fffffffffffffe28;
          __this_09.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
          __this_09.fields.m_Enumerator.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
          __this_09.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
          __this_09.fields.m_Enumerator.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
          pMVar12 = (MethodInfo *)
                    SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                              (__this_09,(MethodInfo *)local_178);
          pSVar7 = (SimpleJSONFixed_JSONNode_o *)
                   (*(json->klass->vtable)._7_get_Item.methodPtr)
                             (json,pMVar12,(json->klass->vtable)._7_get_Item.method);
          CustomLogic_CustomLogicJsonBuiltin__LoadJSON(pSVar7,pMVar12);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        do {
          __this_06.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ =
               in_stack_fffffffffffffe10;
          __this_06.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
          __this_06.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
               in_stack_fffffffffffffe14;
          __this_06.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
          __this_06.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
               (Il2CppObject *)in_stack_fffffffffffffe20;
          __this_06.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
               in_stack_fffffffffffffe28;
          __this_06.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
          __this_06.fields.m_Enumerator.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
          __this_06.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
          __this_06.fields.m_Enumerator.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
          key = (MethodInfo *)
                SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                          (__this_06,(MethodInfo *)local_178);
          pMVar12 = key;
          pSVar7 = (SimpleJSONFixed_JSONNode_o *)
                   (*(json->klass->vtable)._7_get_Item.methodPtr)
                             (json,key,(json->klass->vtable)._7_get_Item.method);
          pIVar8 = CustomLogic_CustomLogicJsonBuiltin__LoadJSON(pSVar7,pMVar12);
          CustomLogic_CustomLogicDictBuiltin__Set
                    (__this_10,(Il2CppObject *)key,pIVar8,(MethodInfo *)0x0);
          __this_07.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ =
               in_stack_fffffffffffffe10;
          __this_07.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
          __this_07.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
               in_stack_fffffffffffffe14;
          __this_07.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
          __this_07.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
               (Il2CppObject *)in_stack_fffffffffffffe20;
          __this_07.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
               in_stack_fffffffffffffe28;
          __this_07.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
          __this_07.fields.m_Enumerator.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
          __this_07.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
          __this_07.fields.m_Enumerator.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
          bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            (__this_07,(MethodInfo *)local_178);
        } while ((char)bVar6 != '\0');
      }
    }
  }
  else {
    __this_10 = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor
              ((CustomLogic_CustomLogicListBuiltin_o *)__this_10,(MethodInfo *)0x0);
    SimpleJSONFixed_JSONNode__get_Values
              ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&stack0xfffffffffffffe10,json,
               (MethodInfo *)0x0);
    local_88._64_8_ = local_1b0;
    local_88._0_8_ = CONCAT44(in_stack_fffffffffffffe14,in_stack_fffffffffffffe10);
    __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ =
         in_stack_fffffffffffffe10;
    __this_00.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
         in_stack_fffffffffffffe14;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         (Il2CppObject *)in_stack_fffffffffffffe20;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         in_stack_fffffffffffffe28;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
    local_88._8_8_ = in_stack_fffffffffffffe18;
    local_88._16_8_ = in_stack_fffffffffffffe20;
    local_88._24_8_ = in_stack_fffffffffffffe28;
    local_88._32_8_ = in_stack_fffffffffffffe30;
    local_88._40_8_ = in_stack_fffffffffffffe38;
    local_88._48_8_ = in_stack_fffffffffffffe40;
    local_88._56_8_ = in_stack_fffffffffffffe48;
    SimpleJSONFixed_JSONNode_ValueEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_ValueEnumerator_o *)&stack0xfffffffffffffe10,__this_00,
               (MethodInfo *)local_88);
    local_128._64_8_ = local_1b0;
    local_128._0_8_ = CONCAT44(in_stack_fffffffffffffe14,in_stack_fffffffffffffe10);
    __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ =
         in_stack_fffffffffffffe10;
    __this_01.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
         in_stack_fffffffffffffe14;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         (Il2CppObject *)in_stack_fffffffffffffe20;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         in_stack_fffffffffffffe28;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
         (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
    local_128._8_8_ = in_stack_fffffffffffffe18;
    local_128._16_8_ = in_stack_fffffffffffffe20;
    local_128._24_8_ = in_stack_fffffffffffffe28;
    local_128._32_8_ = in_stack_fffffffffffffe30;
    local_128._40_8_ = in_stack_fffffffffffffe38;
    local_128._48_8_ = in_stack_fffffffffffffe40;
    local_128._56_8_ = in_stack_fffffffffffffe48;
    bVar6 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext(__this_01,(MethodInfo *)local_128);
    if ((char)bVar6 != '\0') {
      if (__this_10 == (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
        __this_08.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ =
             in_stack_fffffffffffffe10;
        __this_08.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
        __this_08.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
             in_stack_fffffffffffffe14;
        __this_08.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
        __this_08.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_fffffffffffffe20;
        __this_08.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             in_stack_fffffffffffffe28;
        __this_08.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
        __this_08.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
        __this_08.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
        __this_08.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
        SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current(__this_08,(MethodInfo *)local_128);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        pMVar12 = (MethodInfo *)0x0;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ =
             in_stack_fffffffffffffe10;
        __this_03.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
             in_stack_fffffffffffffe14;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_fffffffffffffe20;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             in_stack_fffffffffffffe28;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
        pSVar7 = SimpleJSONFixed_JSONNode_ValueEnumerator__get_Current
                           (__this_03,(MethodInfo *)local_128);
        __this = (__this_10->fields)._dict;
        pIVar8 = CustomLogic_CustomLogicJsonBuiltin__LoadJSON(pSVar7,pMVar12);
        lVar4 = MethodInfo_Void_Add;
        if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_03f3aa35;
        piVar1 = (int32_t *)((long)&(__this->fields)._entries + 4);
        *piVar1 = *piVar1 + 1;
        pSVar3 = (System_Object_array *)(__this->fields)._buckets;
        if (pSVar3 == (System_Object_array *)0x0) goto LAB_03f3aa35;
        uVar2 = *(uint *)&(__this->fields)._entries;
        if (uVar2 < (uint)pSVar3->max_length) {
          *(uint *)&(__this->fields)._entries = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar8;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,pIVar8,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary._0_4_ =
             in_stack_fffffffffffffe10;
        __this_02.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffe08;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary._4_4_ =
             in_stack_fffffffffffffe14;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffe18;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
             (Il2CppObject *)in_stack_fffffffffffffe20;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             in_stack_fffffffffffffe28;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffe30;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe38;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_fffffffffffffe40;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
             (SimpleJSONFixed_JSONNode_o *)in_stack_fffffffffffffe48.rgctx_data;
        bVar6 = SimpleJSONFixed_JSONNode_ValueEnumerator__MoveNext
                          (__this_02,(MethodInfo *)local_128);
      } while ((char)bVar6 != '\0');
    }
  }
  return (Il2CppObject *)__this_10;
}


// CustomLogic.CustomLogicJsonBuiltin$$SaveJSON
// il2cpp: SimpleJSONFixed_JSONNode_o* CustomLogic_CustomLogicJsonBuiltin__SaveJSON (Il2CppObject* obj, const MethodInfo* method);
// 0x3f3ab00

SimpleJSONFixed_JSONNode_o *
CustomLogic_CustomLogicJsonBuiltin__SaveJSON(Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_object__o *__this;
  int iVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  System_String_array *values;
  System_String_o *pSVar6;
  CustomLogic_CustomLogicListBuiltin_o *pCVar7;
  Il2CppObject *pIVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  undefined4 *puVar10;
  SimpleJSONFixed_JSONObject_o *__this_05;
  char *pcVar11;
  undefined8 *puVar12;
  System_Type_o *pSVar13;
  System_String_o *str0;
  undefined8 uVar14;
  System_Exception_o *pSVar15;
  Il2CppClass *method_00;
  MethodInfo *pMVar16;
  System_String_o **ppSVar17;
  float fVar18;
  float __this_06;
  _union_247328 _Var19;
  Il2CppClass *pIVar20;
  Il2CppClass *pIVar21;
  Il2CppClass *pIVar22;
  undefined4 local_70;
  undefined4 local_6c;
  Il2CppClass *local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  undefined1 auStack_50 [8];
  _union_247328 local_48;
  Il2CppClass *pIStack_40;
  Il2CppClass *local_38;
  
  if (DAT_05703d7a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColorBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"int:");
    il2cpp_init_method_metadata(&"null:null");
    il2cpp_init_method_metadata(&"bool:");
    il2cpp_init_method_metadata(&"float:");
    il2cpp_init_method_metadata(&"string:");
    il2cpp_init_method_metadata(&"quaternion:");
    il2cpp_init_method_metadata(&",");
    il2cpp_init_method_metadata(&"color:");
    il2cpp_init_method_metadata(&"vector3:");
    il2cpp_init_method_metadata(&"1");
    il2cpp_init_method_metadata(&"0");
    DAT_05703d7a = '\x01';
  }
  local_6c = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = (Il2CppClass *)0x0;
  local_58 = (undefined1  [8])0x0;
  auStack_50 = (undefined1  [8])0x0;
  if (obj == (Il2CppObject *)0x0) {
    __this_05 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONString);
    pSVar6 = "null:null";
LAB_03f3b170:
    SimpleJSONFixed_JSONString___ctor
              ((SimpleJSONFixed_JSONString_o *)__this_05,pSVar6,(MethodInfo *)0x0);
  }
  else {
    pIVar20 = obj->klass;
    bVar1 = (pIVar20->_2).naturalAligment;
    bVar2 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pIVar20->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicDictBuiltin)) {
      bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pIVar20->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicListBuiltin)) {
        pSVar6 = "string:";
        if (pIVar20 == DAT_057110b0) {
LAB_03f3b14e:
          pSVar6 = System_String__Concat(pSVar6,(System_String_o *)obj,(MethodInfo *)0x0);
        }
        else {
          if (pIVar20 == DAT_05711098) {
            puVar10 = (undefined4 *)il2cpp_glue_022c7330(obj);
            local_6c = *puVar10;
            obj = (Il2CppObject *)System_Single__ToString(__this_06,(MethodInfo *)&local_6c);
            puVar12 = &"float:";
LAB_03f3b148:
            pSVar6 = (System_String_o *)*puVar12;
            goto LAB_03f3b14e;
          }
          if (pIVar20 == DAT_05711068) {
            puVar10 = (undefined4 *)il2cpp_glue_022c7330(obj);
            local_70 = *puVar10;
            obj = (Il2CppObject *)System_Int32__ToString((int32_t)&local_70,(MethodInfo *)0x0);
            puVar12 = &"int:";
            goto LAB_03f3b148;
          }
          if (pIVar20 == DAT_05711048) {
            pcVar11 = (char *)il2cpp_glue_022c7330(obj);
            if (*pcVar11 == '\0') {
              puVar12 = &"0";
            }
            else {
              puVar12 = &"1";
            }
            obj = (Il2CppObject *)*puVar12;
            pSVar6 = "bool:";
            goto LAB_03f3b14e;
          }
          bVar2 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
          if ((bVar1 < bVar2) || ((pIVar20->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicVector3Builtin)) {
            bVar2 = (TypeInfo_CustomLogicColorBuiltin->_2).naturalAligment;
            if ((bVar1 < bVar2) || ((pIVar20->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicColorBuiltin))
            {
              bVar2 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
              if ((bVar1 < bVar2) || ((pIVar20->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)
                 ) {
                il2cpp_glue_01f2f1a0(obj);
                pSVar13 = System_Object__GetType(obj,(MethodInfo *)0x0);
                il2cpp_glue_01f2f1a0(pSVar13);
                pSVar6 = (System_String_o *)
                         (*(pSVar13->klass->vtable)._3_ToString.methodPtr)
                                   (pSVar13,(pSVar13->klass->vtable)._3_ToString.method);
                str0 = (System_String_o *)il2cpp_init_method_metadata(&"Saving invalid json type: only list, dict, structs, and primitives allowed, got ");
                pSVar6 = System_String__Concat(str0,pSVar6,(MethodInfo *)0x0);
                uVar14 = il2cpp_init_method_metadata(&TypeInfo_Exception);
                pSVar15 = (System_Exception_o *)il2cpp_runtime_glue(uVar14);
                System_Exception___ctor(pSVar15,pSVar6,(MethodInfo *)0x0);
                uVar14 = il2cpp_init_method_metadata(&MethodInfo_JSONNode_SaveJSON);
                    /* WARNING: Subroutine does not return */
                il2cpp_glue_02274a00(pSVar15,uVar14);
              }
              local_58 = (undefined1  [8])obj[3].klass;
              auStack_50 = (undefined1  [8])obj[3].monitor;
              values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,8);
              if (values == (System_String_array *)0x0) goto LAB_03f3b4b6;
              if ((int)values->max_length == 0) goto LAB_03f3b45a;
              values->m_Items[0] = "quaternion:";
              fVar18 = (float)il2cpp_runtime_glue(values->m_Items);
              pSVar6 = System_Single__ToString(fVar18,(MethodInfo *)local_58);
              if ((uint)values->max_length < 2) goto LAB_03f3b45a;
              values->m_Items[1] = pSVar6;
              il2cpp_runtime_glue(values->m_Items + 1,pSVar6);
              if ((uint)values->max_length < 3) goto LAB_03f3b45a;
              values->m_Items[2] = ",";
              fVar18 = (float)il2cpp_runtime_glue(values->m_Items + 2);
              pSVar6 = System_Single__ToString(fVar18,(MethodInfo *)(local_58 + 4));
              if ((uint)values->max_length < 4) goto LAB_03f3b45a;
              values->m_Items[3] = pSVar6;
              il2cpp_runtime_glue(values->m_Items + 3,pSVar6);
              if ((uint)values->max_length < 5) goto LAB_03f3b45a;
              values->m_Items[4] = ",";
              fVar18 = (float)il2cpp_runtime_glue(values->m_Items + 4);
              pSVar6 = System_Single__ToString(fVar18,(MethodInfo *)auStack_50);
              if ((uint)values->max_length < 6) goto LAB_03f3b45a;
              values->m_Items[5] = pSVar6;
              il2cpp_runtime_glue(values->m_Items + 5,pSVar6);
              if ((uint)values->max_length < 7) goto LAB_03f3b45a;
              values->m_Items[6] = ",";
              fVar18 = (float)il2cpp_runtime_glue(values->m_Items + 6);
              pSVar6 = System_Single__ToString(fVar18,(MethodInfo *)(auStack_50 + 4));
              uVar3 = (uint)values->max_length;
            }
            else {
              pIVar20 = obj[3].klass;
              values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,8);
              if (values == (System_String_array *)0x0) {
LAB_03f3b4b6:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if ((int)values->max_length == 0) goto LAB_03f3b45a;
              values->m_Items[0] = "color:";
              il2cpp_runtime_glue(values->m_Items);
              if (pIVar20 == (Il2CppClass *)0x0) goto LAB_03f3b4b6;
              iVar4 = (int)pIVar20;
              pSVar6 = System_Int32__ToString(iVar4 + 0x10,(MethodInfo *)0x0);
              if ((uint)values->max_length < 2) goto LAB_03f3b45a;
              values->m_Items[1] = pSVar6;
              il2cpp_runtime_glue(values->m_Items + 1,pSVar6);
              if ((uint)values->max_length < 3) goto LAB_03f3b45a;
              values->m_Items[2] = ",";
              il2cpp_runtime_glue(values->m_Items + 2);
              pSVar6 = System_Int32__ToString(iVar4 + 0x14,(MethodInfo *)0x0);
              if ((uint)values->max_length < 4) goto LAB_03f3b45a;
              values->m_Items[3] = pSVar6;
              il2cpp_runtime_glue(values->m_Items + 3,pSVar6);
              if ((uint)values->max_length < 5) goto LAB_03f3b45a;
              values->m_Items[4] = ",";
              il2cpp_runtime_glue(values->m_Items + 4);
              pSVar6 = System_Int32__ToString(iVar4 + 0x18,(MethodInfo *)0x0);
              if ((uint)values->max_length < 6) goto LAB_03f3b45a;
              values->m_Items[5] = pSVar6;
              il2cpp_runtime_glue(values->m_Items + 5,pSVar6);
              if ((uint)values->max_length < 7) goto LAB_03f3b45a;
              values->m_Items[6] = ",";
              il2cpp_runtime_glue(values->m_Items + 6);
              pSVar6 = System_Int32__ToString(iVar4 + 0x1c,(MethodInfo *)0x0);
              uVar3 = (uint)values->max_length;
            }
            if (uVar3 < 8) goto LAB_03f3b45a;
            ppSVar17 = values->m_Items + 7;
            values->m_Items[7] = pSVar6;
          }
          else {
            local_60 = *(undefined4 *)&obj[3].monitor;
            local_68 = obj[3].klass;
            values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,6);
            if (values == (System_String_array *)0x0) goto LAB_03f3b4b6;
            if ((int)values->max_length == 0) {
LAB_03f3b45a:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            values->m_Items[0] = "vector3:";
            fVar18 = (float)il2cpp_runtime_glue(values->m_Items);
            pSVar6 = System_Single__ToString(fVar18,(MethodInfo *)&local_68);
            if ((uint)values->max_length < 2) goto LAB_03f3b45a;
            values->m_Items[1] = pSVar6;
            il2cpp_runtime_glue(values->m_Items + 1,pSVar6);
            if ((uint)values->max_length < 3) goto LAB_03f3b45a;
            values->m_Items[2] = ",";
            fVar18 = (float)il2cpp_runtime_glue(values->m_Items + 2);
            pSVar6 = System_Single__ToString(fVar18,(MethodInfo *)((long)&local_68 + 4));
            if ((uint)values->max_length < 4) goto LAB_03f3b45a;
            values->m_Items[3] = pSVar6;
            il2cpp_runtime_glue(values->m_Items + 3,pSVar6);
            if ((uint)values->max_length < 5) goto LAB_03f3b45a;
            values->m_Items[4] = ",";
            fVar18 = (float)il2cpp_runtime_glue(values->m_Items + 4);
            pSVar6 = System_Single__ToString(fVar18,(MethodInfo *)&local_60);
            if ((uint)values->max_length < 6) goto LAB_03f3b45a;
            ppSVar17 = values->m_Items + 5;
            values->m_Items[5] = pSVar6;
          }
          il2cpp_runtime_glue(ppSVar17);
          pSVar6 = System_String__Concat(values,(MethodInfo *)0x0);
        }
        __this_05 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONString);
        goto LAB_03f3b170;
      }
      __this_05 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
      SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this_05,(MethodInfo *)0x0);
      bVar1 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
      if (((obj->klass->_2).naturalAligment < bVar1) ||
         ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicListBuiltin)) goto LAB_03f3b4ae;
      if (obj[3].klass == (Il2CppClass *)0x0) goto LAB_03f3b4b6;
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
                 (System_Collections_Generic_List_object__o *)obj[3].klass,MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
      _Var19 = local_48;
      pIVar20 = pIStack_40;
      pIVar21 = local_38;
      if (__this_05 == (SimpleJSONFixed_JSONObject_o *)0x0) {
        __this_03.fields._8_8_ = pIStack_40;
        __this_03.fields._list = local_48.genericMethod;
        __this_03.fields._current = (Il2CppObject *)local_38;
        pMVar16 = MethodInfo_Boolean_MoveNext;
        bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffff78);
        if ((char)bVar5 != '\0') {
          CustomLogic_CustomLogicJsonBuiltin__SaveJSON((Il2CppObject *)local_38,pMVar16);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        while (__this_01.fields._8_8_ = pIVar20, __this_01.fields._list = _Var19.genericMethod,
              __this_01.fields._current = (Il2CppObject *)pIVar21, pMVar16 = MethodInfo_Boolean_MoveNext,
              bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff78),
              local_48 = _Var19, pIStack_40 = pIVar20, local_38 = pIVar21, (char)bVar5 != '\0') {
          pSVar9 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON((Il2CppObject *)pIVar21,pMVar16);
          (*(__this_05->klass->vtable)._21_Add.methodPtr)
                    (__this_05,pSVar9,(__this_05->klass->vtable)._21_Add.method);
        }
      }
    }
    else {
      __this_05 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this_05,(MethodInfo *)0x0);
      bVar1 = (TypeInfo_CustomLogicDictBuiltin->_2).naturalAligment;
      if (((obj->klass->_2).naturalAligment < bVar1) ||
         ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicDictBuiltin)) {
LAB_03f3b4ae:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(obj);
      }
      pCVar7 = CustomLogic_CustomLogicDictBuiltin__get_Keys
                         ((CustomLogic_CustomLogicDictBuiltin_o *)obj,(MethodInfo *)0x0);
      if ((pCVar7 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) ||
         (__this = (pCVar7->fields).List, __this == (System_Collections_Generic_List_object__o *)0x0
         )) goto LAB_03f3b4b6;
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,__this,MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
      _Var19 = local_48;
      pIVar20 = pIStack_40;
      pIVar21 = local_38;
      if (__this_05 == (SimpleJSONFixed_JSONObject_o *)0x0) {
        __this_02.fields._8_8_ = pIStack_40;
        __this_02.fields._list = local_48.genericMethod;
        __this_02.fields._current = (Il2CppObject *)local_38;
        bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff78);
        if ((char)bVar5 != '\0') {
          if ((local_38 != (Il2CppClass *)0x0) && ((local_38->_1).image == DAT_057110b0)) {
            pIVar8 = CustomLogic_CustomLogicDictBuiltin__Get
                               ((CustomLogic_CustomLogicDictBuiltin_o *)obj,(Il2CppObject *)local_38
                                ,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            CustomLogic_CustomLogicJsonBuiltin__SaveJSON(pIVar8,(MethodInfo *)local_38);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_03f3b45f:
          uVar14 = il2cpp_init_method_metadata(&TypeInfo_Exception);
          pSVar15 = (System_Exception_o *)il2cpp_runtime_glue(uVar14);
          pSVar6 = (System_String_o *)il2cpp_init_method_metadata(&"Saving invalid json type: dict must have string keys.");
          System_Exception___ctor(pSVar15,pSVar6,(MethodInfo *)0x0);
          uVar14 = il2cpp_init_method_metadata(&MethodInfo_JSONNode_SaveJSON);
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(pSVar15,uVar14);
        }
      }
      else {
        while (__this_00.fields._8_8_ = pIVar20, __this_00.fields._list = _Var19.genericMethod,
              __this_00.fields._current = (Il2CppObject *)pIVar21,
              bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff78),
              local_48 = _Var19, pIStack_40 = pIVar20, local_38 = pIVar21, (char)bVar5 != '\0') {
          if ((pIVar21 == (Il2CppClass *)0x0) || ((pIVar21->_1).image != DAT_057110b0))
          goto LAB_03f3b45f;
          method_00 = pIVar21;
          pIVar22 = pIVar21;
          pIVar8 = CustomLogic_CustomLogicDictBuiltin__Get
                             ((CustomLogic_CustomLogicDictBuiltin_o *)obj,(Il2CppObject *)pIVar21,
                              (Il2CppObject *)0x0,(MethodInfo *)0x0);
          pSVar9 = CustomLogic_CustomLogicJsonBuiltin__SaveJSON(pIVar8,(MethodInfo *)method_00);
          if ((pIVar21->_1).image != DAT_057110b0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pIVar21);
          }
          (*(__this_05->klass->vtable)._20_Add.methodPtr)(__this_05,pIVar21,pSVar9);
          pIVar21 = pIVar22;
        }
      }
    }
    __this_04.fields._8_8_ = pIStack_40;
    __this_04.fields._list = local_48.genericMethod;
    __this_04.fields._current = (Il2CppObject *)local_38;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
  }
  return (SimpleJSONFixed_JSONNode_o *)__this_05;
}


// CustomLogic.CustomLogicJsonBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicJsonBuiltin__get_ClassName (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x3f3b6a0

System_String_o *
CustomLogic_CustomLogicJsonBuiltin__get_ClassName
          (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703d7b == '\0') {
    il2cpp_init_method_metadata(&"Json");
    DAT_05703d7b = '\x01';
  }
  return "Json";
}


// CustomLogic.CustomLogicJsonBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicJsonBuiltin__get_IsAbstract (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x3f3b6d0

bool_conflict
CustomLogic_CustomLogicJsonBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicJsonBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicJsonBuiltin__get_IsStatic (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x3f3b6e0

bool_conflict
CustomLogic_CustomLogicJsonBuiltin__get_IsStatic
          (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicJsonBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicJsonBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicJsonBuiltin_o* __this, const MethodInfo* method);
// 0x3f3b6f0

bool_conflict
CustomLogic_CustomLogicJsonBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicJsonBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


