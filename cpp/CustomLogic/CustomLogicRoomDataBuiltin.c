// Type: CustomLogic.CustomLogicRoomDataBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicRoomDataBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicRoomDataBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicRoomDataBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicRoomDataBuiltin_o* CustomLogic_CustomLogicRoomDataBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3edb170

CustomLogic_CustomLogicRoomDataBuiltin_o *
CustomLogic_CustomLogicRoomDataBuiltin_Factory__CreateInstance
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
  if (DAT_05703a39 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicRoomDataBuiltin);
    DAT_05703a39 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicRoomDataBuiltin);
      if (DAT_05703a34 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703a34 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicRoomDataBuiltin_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicRoomDataBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicRoomDataBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3edb920

void CustomLogic_CustomLogicRoomDataBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703a3f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a3f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3edb990

void CustomLogic_CustomLogicRoomDataBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetProperty>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__SetProperty_b__2_0 (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRoomDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3edb9a0

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings_<>c__<__CreateMethodBinding__SetProperty>b__2_0
          (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRoomDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *property;
  MethodInfo *method_00;
  
  if (DAT_05703a40 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a40 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    property = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      CustomLogic_CustomLogicRoomDataBuiltin__SetProperty(property,__a->m_Items[1],method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetProperty>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__GetProperty_b__3_0 (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRoomDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3edba30

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings_<>c__<__CreateMethodBinding__GetProperty>b__3_0
          (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRoomDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *defaultValue;
  Il2CppObject *pIVar1;
  
  if (DAT_05703a41 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a41 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      defaultValue = __a->m_Items[1];
      if (DAT_05703a36 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object_GetValueOrDefault_String_Object);
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        DAT_05703a36 = '\x01';
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault<object__object>
                         (*(System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o **)
                           (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88),pIVar1,defaultValue,MethodInfo_Object_GetValueOrDefault_String_Object)
      ;
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__4_0 (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRoomDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3edbb30

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings_<>c__<__CreateMethodBinding__Clear>b__4_0
          (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRoomDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_05703a37 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05703a37 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(__this_00,MethodInfo_Void_Clear);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3edb290

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_05703a3a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"SetProperty");
    il2cpp_init_method_metadata(&"GetProperty");
    il2cpp_init_method_metadata(&"Clear");
    DAT_05703a3a = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"SetProperty",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703a3b == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRoomDataBuiltin__object____objec);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetProperty_b__2);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703a3b = '\x01';
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
      pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRoomDataBuiltin__object____objec);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar6;
      il2cpp_runtime_glue(lVar2 + 8,pSVar6);
    }
    pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar7;
  }
  bVar3 = System_String__op_Equality(name,"GetProperty",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703a3c == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRoomDataBuiltin__object____objec);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetProperty_b__3);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703a3c = '\x01';
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
      pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRoomDataBuiltin__object____objec);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar6;
      il2cpp_runtime_glue(lVar2 + 0x10,pSVar6);
    }
    pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar7;
  }
  bVar3 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pSVar4 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicRoomDataBuiltin not found");
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
  if (DAT_05703a3d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRoomDataBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Clear_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a3d = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    pSVar6 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (pSVar6 == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRoomDataBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar6;
    il2cpp_runtime_glue(lVar2 + 0x18,pSVar6);
  }
  pCVar7 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor(pCVar7,pSVar6,MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
  return (CustomLogic_ICLMemberBinding_o *)pCVar7;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$__CreateMethodBinding__SetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__SetProperty (const MethodInfo* method);
// 0x3edb420

CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__SetProperty
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *__this;
  
  if (DAT_05703a3b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRoomDataBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetProperty_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a3b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRoomDataBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$__CreateMethodBinding__GetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__GetProperty (const MethodInfo* method);
// 0x3edb570

CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__GetProperty
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *__this;
  
  if (DAT_05703a3c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRoomDataBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetProperty_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a3c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRoomDataBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x3edb6c0

CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *__this;
  
  if (DAT_05703a3d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRoomDataBuiltin__object____objec);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Clear_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a3d = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRoomDataBuiltin__object____objec);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRoomDataBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRoomDataBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3edb810

void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703a3e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"SetProperty");
    il2cpp_init_method_metadata(&"GetProperty");
    il2cpp_init_method_metadata(&"Clear");
    DAT_05703a3e = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"SetProperty",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetProperty",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Clear",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRoomDataBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin___ctor (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x3edae80

void CustomLogic_CustomLogicRoomDataBuiltin___ctor
               (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703a34 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703a34 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$SetProperty
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin__SetProperty (System_String_o* property, Il2CppObject* value, const MethodInfo* method);
// 0x3edaef0

void CustomLogic_CustomLogicRoomDataBuiltin__SetProperty
               (System_String_o *property,Il2CppObject *value,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  undefined8 uVar2;
  System_Exception_o *__this_00;
  System_String_o *message;
  
  if (DAT_05703a35 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05703a35 = '\x01';
  }
  if ((((value != (Il2CppObject *)0x0) && (pIVar1 = value->klass, pIVar1 != DAT_05711098)) &&
      (pIVar1 != DAT_05711068)) && ((pIVar1 != DAT_057110b0 && (pIVar1 != DAT_05711048)))) {
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar2);
    message = (System_String_o *)il2cpp_init_method_metadata(&"RoomData.SetProperty only supports null, float, int, string, or bool values.");
    System_Exception___ctor(__this_00,message,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_Void_SetProperty);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this,(Il2CppObject *)property,value,MethodInfo_Void_set_Item);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRoomDataBuiltin$$GetProperty
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin__GetProperty (System_String_o* property, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x3edaff0

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin__GetProperty
          (System_String_o *property,Il2CppObject *defaultValue,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (DAT_05703a36 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object_GetValueOrDefault_String_Object);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703a36 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault<object__object>
                     (*(System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o **)
                       (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88),(Il2CppObject *)property,defaultValue
                      ,MethodInfo_Object_GetValueOrDefault_String_Object);
  return pIVar1;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin__Clear (const MethodInfo* method);
// 0x3edb070

void CustomLogic_CustomLogicRoomDataBuiltin__Clear(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_05703a37 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05703a37 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(__this,MethodInfo_Void_Clear);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicRoomDataBuiltin__get_ClassName (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x3edb110

System_String_o *
CustomLogic_CustomLogicRoomDataBuiltin__get_ClassName
          (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703a38 == '\0') {
    il2cpp_init_method_metadata(&"RoomData");
    DAT_05703a38 = '\x01';
  }
  return "RoomData";
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicRoomDataBuiltin__get_IsAbstract (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x3edb140

bool_conflict
CustomLogic_CustomLogicRoomDataBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicRoomDataBuiltin__get_IsStatic (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x3edb150

bool_conflict
CustomLogic_CustomLogicRoomDataBuiltin__get_IsStatic
          (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicRoomDataBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x3edb160

bool_conflict
CustomLogic_CustomLogicRoomDataBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


