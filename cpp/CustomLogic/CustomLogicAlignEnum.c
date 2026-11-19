// Type: CustomLogic.CustomLogicAlignEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAlignEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicAlignEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicAlignEnum_o* CustomLogic_CustomLogicAlignEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a545b0

CustomLogic_CustomLogicAlignEnum_o *
CustomLogic_CustomLogicAlignEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_0754627e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAlignEnum);
    Il2CppMethodInitialized_0754627e = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAlignEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicAlignEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAlignEnum);
  if (Il2CppMethodInitialized_0754627c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754627c = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicAlignEnum_o *)__this;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicAlignEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a546d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicAlignEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicAlignEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_0754627f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Auto");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_0754627f = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Auto",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Auto((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Auto
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"FlexStart",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexStart
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexStart
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Center",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Center
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Center
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"FlexEnd",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexEnd((MethodInfo *)pCVar4)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Stretch",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Stretch((MethodInfo *)pCVar4)
    ;
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAlignEnum not found");
  pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__Auto
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Auto (const MethodInfo* method);
// 0x5a54900

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Auto(MethodInfo *method)

{
  System_Func_CustomLogicAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546280 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Auto_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAlignEnum_object);
    Il2CppMethodInitialized_07546280 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Auto_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__FlexStart
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexStart (const MethodInfo* method);
// 0x5a549a0

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexStart(MethodInfo *method)

{
  System_Func_CustomLogicAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546281 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__FlexStart_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAlignEnum_object);
    Il2CppMethodInitialized_07546281 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__FlexStart_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__Center
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Center (const MethodInfo* method);
// 0x5a54a40

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Center(MethodInfo *method)

{
  System_Func_CustomLogicAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546282 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Center_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAlignEnum_object);
    Il2CppMethodInitialized_07546282 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Center_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__FlexEnd
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexEnd (const MethodInfo* method);
// 0x5a54ae0

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__FlexEnd(MethodInfo *method)

{
  System_Func_CustomLogicAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546283 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__FlexEnd_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAlignEnum_object);
    Il2CppMethodInitialized_07546283 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__FlexEnd_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$__CreatePropertyBinding__Stretch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o* CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Stretch (const MethodInfo* method);
// 0x5a54b80

CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *
CustomLogic_CustomLogicAlignEnum_Bindings____CreatePropertyBinding__Stretch(MethodInfo *method)

{
  System_Func_CustomLogicAlignEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicAlignEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Stretch_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicAlignEnum_object);
    Il2CppMethodInitialized_07546284 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicAlignEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicAlignEnum_Bindings___CreatePropertyBinding__Stretch_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicAlignEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicAlignEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a54c20

void CustomLogic_CustomLogicAlignEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546285 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Auto");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_07546285 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Auto",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FlexStart",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Center",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FlexEnd",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stretch",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicAlignEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__Auto>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Auto_g____getter_2_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x5a54d70

Il2CppObject *
CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Auto_g____getter_2_0
          (CustomLogic_CustomLogicAlignEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__FlexStart>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__FlexStart_g____getter_3_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x5a54d90

Il2CppObject *
CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__FlexStart_g____getter_3_0
          (CustomLogic_CustomLogicAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__Center>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Center_g____getter_4_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x5a54db0

Il2CppObject *
CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Center_g____getter_4_0
          (CustomLogic_CustomLogicAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__FlexEnd>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__FlexEnd_g____getter_5_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x5a54dd0

Il2CppObject *
CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__FlexEnd_g____getter_5_0
          (CustomLogic_CustomLogicAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum.Bindings$$<__CreatePropertyBinding__Stretch>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Stretch_g____getter_6_0 (CustomLogic_CustomLogicAlignEnum_o* __i, const MethodInfo* method);
// 0x5a54df0

Il2CppObject *
CustomLogic_CustomLogicAlignEnum_Bindings_____CreatePropertyBinding__Stretch_g____getter_6_0
          (CustomLogic_CustomLogicAlignEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicAlignEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicAlignEnum___ctor (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x5a54490

void CustomLogic_CustomLogicAlignEnum___ctor(CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754627c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754627c = '\x01';
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


// CustomLogic.CustomLogicAlignEnum$$get_Auto
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_Auto (const MethodInfo* method);
// 0x5a54500

int32_t CustomLogic_CustomLogicAlignEnum__get_Auto(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicAlignEnum$$get_FlexStart
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_FlexStart (const MethodInfo* method);
// 0x5a54510

int32_t CustomLogic_CustomLogicAlignEnum__get_FlexStart(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicAlignEnum$$get_Center
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_Center (const MethodInfo* method);
// 0x5a54520

int32_t CustomLogic_CustomLogicAlignEnum__get_Center(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicAlignEnum$$get_FlexEnd
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_FlexEnd (const MethodInfo* method);
// 0x5a54530

int32_t CustomLogic_CustomLogicAlignEnum__get_FlexEnd(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicAlignEnum$$get_Stretch
// il2cpp: int32_t CustomLogic_CustomLogicAlignEnum__get_Stretch (const MethodInfo* method);
// 0x5a54540

int32_t CustomLogic_CustomLogicAlignEnum__get_Stretch(MethodInfo *method)

{
  return 4;
}


// CustomLogic.CustomLogicAlignEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicAlignEnum__get_ClassName (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x5a54550

System_String_o *
CustomLogic_CustomLogicAlignEnum__get_ClassName(CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754627d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AlignEnum");
    Il2CppMethodInitialized_0754627d = '\x01';
  }
  return "AlignEnum";
}


// CustomLogic.CustomLogicAlignEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicAlignEnum__get_IsAbstract (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x5a54580

bool CustomLogic_CustomLogicAlignEnum__get_IsAbstract
               (CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicAlignEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicAlignEnum__get_IsStatic (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x5a54590

bool CustomLogic_CustomLogicAlignEnum__get_IsStatic
               (CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicAlignEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicAlignEnum__get_InheritBaseMembers (CustomLogic_CustomLogicAlignEnum_o* __this, const MethodInfo* method);
// 0x5a545a0

bool CustomLogic_CustomLogicAlignEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicAlignEnum_o *__this,MethodInfo *method)

{
  return true;
}


