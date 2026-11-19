// Type: CustomLogic.CustomLogicShadowCastingModeEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicShadowCastingModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicShadowCastingModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicShadowCastingModeEnum_o* CustomLogic_CustomLogicShadowCastingModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5aa8620

CustomLogic_CustomLogicShadowCastingModeEnum_o *
CustomLogic_CustomLogicShadowCastingModeEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546a32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum);
    Il2CppMethodInitialized_07546a32 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicShadowCastingModeEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum);
  if (Il2CppMethodInitialized_07546a30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a30 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicShadowCastingModeEnum_o *)__this;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aa8740

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546a33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowsOnly");
    il2cpp_codegen_initialize_runtime_metadata(&"On");
    il2cpp_codegen_initialize_runtime_metadata(&"Off");
    il2cpp_codegen_initialize_runtime_metadata(&"TwoSided");
    Il2CppMethodInitialized_07546a33 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Off",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__Off
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__Off
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"On",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__On
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__On
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"TwoSided",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__TwoSided
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__TwoSided
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"ShadowsOnly",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicShadowCastingModeEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__ShadowsOnly
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__ShadowsOnly
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__Off
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__Off (const MethodInfo* method);
// 0x5aa8920

CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__Off(MethodInfo *method)

{
  System_Func_CustomLogicShadowCastingModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__Off_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
    Il2CppMethodInitialized_07546a34 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__Off_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__On
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__On (const MethodInfo* method);
// 0x5aa89c0

CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__On(MethodInfo *method)

{
  System_Func_CustomLogicShadowCastingModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__On_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
    Il2CppMethodInitialized_07546a35 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__On_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__TwoSided
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__TwoSided (const MethodInfo* method);
// 0x5aa8a60

CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__TwoSided(MethodInfo *method)

{
  System_Func_CustomLogicShadowCastingModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__TwoSided_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
    Il2CppMethodInitialized_07546a36 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__TwoSided_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__ShadowsOnly
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__ShadowsOnly (const MethodInfo* method);
// 0x5aa8b00

CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings____CreatePropertyBinding__ShadowsOnly
          (MethodInfo *method)

{
  System_Func_CustomLogicShadowCastingModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__ShadowsOnly_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
    Il2CppMethodInitialized_07546a37 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShadowCastingModeEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__ShadowsOnly_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShadowCastingModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x5aa8ba0

void CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546a38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowsOnly");
    il2cpp_codegen_initialize_runtime_metadata(&"On");
    il2cpp_codegen_initialize_runtime_metadata(&"Off");
    il2cpp_codegen_initialize_runtime_metadata(&"TwoSided");
    Il2CppMethodInitialized_07546a38 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Off",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"On",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TwoSided",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ShadowsOnly",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__Off>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__Off_g____getter_2_0 (CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, const MethodInfo* method);
// 0x5aa8cd0

Il2CppObject *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__Off_g____getter_2_0
          (CustomLogic_CustomLogicShadowCastingModeEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__On>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__On_g____getter_3_0 (CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, const MethodInfo* method);
// 0x5aa8cf0

Il2CppObject *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__On_g____getter_3_0
          (CustomLogic_CustomLogicShadowCastingModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__TwoSided>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__TwoSided_g____getter_4_0 (CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, const MethodInfo* method);
// 0x5aa8d10

Il2CppObject *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__TwoSided_g____getter_4_0
          (CustomLogic_CustomLogicShadowCastingModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__ShadowsOnly>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__ShadowsOnly_g____getter_5_0 (CustomLogic_CustomLogicShadowCastingModeEnum_o* __i, const MethodInfo* method);
// 0x5aa8d30

Il2CppObject *
CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_____CreatePropertyBinding__ShadowsOnly_g____getter_5_0
          (CustomLogic_CustomLogicShadowCastingModeEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicShadowCastingModeEnum___ctor (CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, const MethodInfo* method);
// 0x5aa8510

void CustomLogic_CustomLogicShadowCastingModeEnum___ctor
               (CustomLogic_CustomLogicShadowCastingModeEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a30 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_Off
// il2cpp: int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_Off (const MethodInfo* method);
// 0x5aa8580

int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_Off(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_On
// il2cpp: int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_On (const MethodInfo* method);
// 0x5aa8590

int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_On(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_TwoSided
// il2cpp: int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_TwoSided (const MethodInfo* method);
// 0x5aa85a0

int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_TwoSided(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_ShadowsOnly
// il2cpp: int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_ShadowsOnly (const MethodInfo* method);
// 0x5aa85b0

int32_t CustomLogic_CustomLogicShadowCastingModeEnum__get_ShadowsOnly(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicShadowCastingModeEnum__get_ClassName (CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, const MethodInfo* method);
// 0x5aa85c0

System_String_o *
CustomLogic_CustomLogicShadowCastingModeEnum__get_ClassName
          (CustomLogic_CustomLogicShadowCastingModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowCastingModeEnum");
    Il2CppMethodInitialized_07546a31 = '\x01';
  }
  return "ShadowCastingModeEnum";
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicShadowCastingModeEnum__get_IsAbstract (CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, const MethodInfo* method);
// 0x5aa85f0

bool CustomLogic_CustomLogicShadowCastingModeEnum__get_IsAbstract
               (CustomLogic_CustomLogicShadowCastingModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicShadowCastingModeEnum__get_IsStatic (CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, const MethodInfo* method);
// 0x5aa8600

bool CustomLogic_CustomLogicShadowCastingModeEnum__get_IsStatic
               (CustomLogic_CustomLogicShadowCastingModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicShadowCastingModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicShadowCastingModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicShadowCastingModeEnum_o* __this, const MethodInfo* method);
// 0x5aa8610

bool CustomLogic_CustomLogicShadowCastingModeEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicShadowCastingModeEnum_o *__this,MethodInfo *method)

{
  return true;
}


