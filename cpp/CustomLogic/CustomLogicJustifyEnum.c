// Type: CustomLogic.CustomLogicJustifyEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicJustifyEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicJustifyEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicJustifyEnum_o* CustomLogic_CustomLogicJustifyEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a91360

CustomLogic_CustomLogicJustifyEnum_o *
CustomLogic_CustomLogicJustifyEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_075467d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJustifyEnum);
    Il2CppMethodInitialized_075467d2 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicJustifyEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicJustifyEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJustifyEnum);
  if (Il2CppMethodInitialized_075467d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075467d0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicJustifyEnum_o *)__this;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicJustifyEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a91480

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicJustifyEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicJustifyEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_075467d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceEvenly");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceAround");
    Il2CppMethodInitialized_075467d3 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"FlexStart",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__FlexStart
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__FlexStart
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Center",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__Center
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__Center
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"FlexEnd",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__FlexEnd
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__FlexEnd
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"SpaceBetween",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__SpaceBetween
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"SpaceAround",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__SpaceAround
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"SpaceEvenly",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__SpaceEvenly
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicJustifyEnum not found");
  pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__FlexStart
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o* CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__FlexStart (const MethodInfo* method);
// 0x5a916f0

CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *
CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__FlexStart(MethodInfo *method)

{
  System_Func_CustomLogicJustifyEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__FlexStart_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicJustifyEnum_object);
    Il2CppMethodInitialized_075467d4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicJustifyEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__FlexStart_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__Center
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o* CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__Center (const MethodInfo* method);
// 0x5a91790

CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *
CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__Center(MethodInfo *method)

{
  System_Func_CustomLogicJustifyEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__Center_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicJustifyEnum_object);
    Il2CppMethodInitialized_075467d5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicJustifyEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__Center_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__FlexEnd
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o* CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__FlexEnd (const MethodInfo* method);
// 0x5a91830

CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *
CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__FlexEnd(MethodInfo *method)

{
  System_Func_CustomLogicJustifyEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__FlexEnd_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicJustifyEnum_object);
    Il2CppMethodInitialized_075467d6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicJustifyEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__FlexEnd_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__SpaceBetween
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o* CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__SpaceBetween (const MethodInfo* method);
// 0x5a918d0

CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *
CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__SpaceBetween(MethodInfo *method)

{
  System_Func_CustomLogicJustifyEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__SpaceBetween_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicJustifyEnum_object);
    Il2CppMethodInitialized_075467d7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicJustifyEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__SpaceBetween_g____getter_5
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__SpaceAround
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o* CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__SpaceAround (const MethodInfo* method);
// 0x5a91970

CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *
CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__SpaceAround(MethodInfo *method)

{
  System_Func_CustomLogicJustifyEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__SpaceAround_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicJustifyEnum_object);
    Il2CppMethodInitialized_075467d8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicJustifyEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__SpaceAround_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__SpaceEvenly
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o* CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__SpaceEvenly (const MethodInfo* method);
// 0x5a91a10

CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *
CustomLogic_CustomLogicJustifyEnum_Bindings____CreatePropertyBinding__SpaceEvenly(MethodInfo *method)

{
  System_Func_CustomLogicJustifyEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_075467d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__SpaceEvenly_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicJustifyEnum_object);
    Il2CppMethodInitialized_075467d9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicJustifyEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__SpaceEvenly_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicJustifyEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicJustifyEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a91ab0

void CustomLogic_CustomLogicJustifyEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075467da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceEvenly");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceAround");
    Il2CppMethodInitialized_075467da = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
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
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpaceBetween",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpaceAround",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpaceEvenly",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicJustifyEnum_Bindings->static_fields->MemberNames)
  ;
  return;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__FlexStart>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__FlexStart_g____getter_2_0 (CustomLogic_CustomLogicJustifyEnum_o* __i, const MethodInfo* method);
// 0x5a91c20

Il2CppObject *
CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__FlexStart_g____getter_2_0
          (CustomLogic_CustomLogicJustifyEnum_o *__i,MethodInfo *method)

{
  uint in_EAX;
  Il2CppObject *pIVar1;
  undefined8 uStack_8;
  
  uStack_8 = (ulong)in_EAX;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_8 + 4));
  return pIVar1;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__Center>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__Center_g____getter_3_0 (CustomLogic_CustomLogicJustifyEnum_o* __i, const MethodInfo* method);
// 0x5a91c40

Il2CppObject *
CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__Center_g____getter_3_0
          (CustomLogic_CustomLogicJustifyEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__FlexEnd>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__FlexEnd_g____getter_4_0 (CustomLogic_CustomLogicJustifyEnum_o* __i, const MethodInfo* method);
// 0x5a91c60

Il2CppObject *
CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__FlexEnd_g____getter_4_0
          (CustomLogic_CustomLogicJustifyEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__SpaceBetween>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__SpaceBetween_g____getter_5_0 (CustomLogic_CustomLogicJustifyEnum_o* __i, const MethodInfo* method);
// 0x5a91c80

Il2CppObject *
CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__SpaceBetween_g____getter_5_0
          (CustomLogic_CustomLogicJustifyEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__SpaceAround>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__SpaceAround_g____getter_6_0 (CustomLogic_CustomLogicJustifyEnum_o* __i, const MethodInfo* method);
// 0x5a91ca0

Il2CppObject *
CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__SpaceAround_g____getter_6_0
          (CustomLogic_CustomLogicJustifyEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__SpaceEvenly>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__SpaceEvenly_g____getter_7_0 (CustomLogic_CustomLogicJustifyEnum_o* __i, const MethodInfo* method);
// 0x5a91cc0

Il2CppObject *
CustomLogic_CustomLogicJustifyEnum_Bindings_____CreatePropertyBinding__SpaceEvenly_g____getter_7_0
          (CustomLogic_CustomLogicJustifyEnum_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicJustifyEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicJustifyEnum___ctor (CustomLogic_CustomLogicJustifyEnum_o* __this, const MethodInfo* method);
// 0x5a91230

void CustomLogic_CustomLogicJustifyEnum___ctor
               (CustomLogic_CustomLogicJustifyEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075467d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075467d0 = '\x01';
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


// CustomLogic.CustomLogicJustifyEnum$$get_FlexStart
// il2cpp: int32_t CustomLogic_CustomLogicJustifyEnum__get_FlexStart (const MethodInfo* method);
// 0x5a912a0

int32_t CustomLogic_CustomLogicJustifyEnum__get_FlexStart(MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicJustifyEnum$$get_Center
// il2cpp: int32_t CustomLogic_CustomLogicJustifyEnum__get_Center (const MethodInfo* method);
// 0x5a912b0

int32_t CustomLogic_CustomLogicJustifyEnum__get_Center(MethodInfo *method)

{
  return 1;
}


// CustomLogic.CustomLogicJustifyEnum$$get_FlexEnd
// il2cpp: int32_t CustomLogic_CustomLogicJustifyEnum__get_FlexEnd (const MethodInfo* method);
// 0x5a912c0

int32_t CustomLogic_CustomLogicJustifyEnum__get_FlexEnd(MethodInfo *method)

{
  return 2;
}


// CustomLogic.CustomLogicJustifyEnum$$get_SpaceBetween
// il2cpp: int32_t CustomLogic_CustomLogicJustifyEnum__get_SpaceBetween (const MethodInfo* method);
// 0x5a912d0

int32_t CustomLogic_CustomLogicJustifyEnum__get_SpaceBetween(MethodInfo *method)

{
  return 3;
}


// CustomLogic.CustomLogicJustifyEnum$$get_SpaceAround
// il2cpp: int32_t CustomLogic_CustomLogicJustifyEnum__get_SpaceAround (const MethodInfo* method);
// 0x5a912e0

int32_t CustomLogic_CustomLogicJustifyEnum__get_SpaceAround(MethodInfo *method)

{
  return 4;
}


// CustomLogic.CustomLogicJustifyEnum$$get_SpaceEvenly
// il2cpp: int32_t CustomLogic_CustomLogicJustifyEnum__get_SpaceEvenly (const MethodInfo* method);
// 0x5a912f0

int32_t CustomLogic_CustomLogicJustifyEnum__get_SpaceEvenly(MethodInfo *method)

{
  return 5;
}


// CustomLogic.CustomLogicJustifyEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicJustifyEnum__get_ClassName (CustomLogic_CustomLogicJustifyEnum_o* __this, const MethodInfo* method);
// 0x5a91300

System_String_o *
CustomLogic_CustomLogicJustifyEnum__get_ClassName
          (CustomLogic_CustomLogicJustifyEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075467d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"JustifyEnum");
    Il2CppMethodInitialized_075467d1 = '\x01';
  }
  return "JustifyEnum";
}


// CustomLogic.CustomLogicJustifyEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicJustifyEnum__get_IsAbstract (CustomLogic_CustomLogicJustifyEnum_o* __this, const MethodInfo* method);
// 0x5a91330

bool CustomLogic_CustomLogicJustifyEnum__get_IsAbstract
               (CustomLogic_CustomLogicJustifyEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicJustifyEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicJustifyEnum__get_IsStatic (CustomLogic_CustomLogicJustifyEnum_o* __this, const MethodInfo* method);
// 0x5a91340

bool CustomLogic_CustomLogicJustifyEnum__get_IsStatic
               (CustomLogic_CustomLogicJustifyEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicJustifyEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicJustifyEnum__get_InheritBaseMembers (CustomLogic_CustomLogicJustifyEnum_o* __this, const MethodInfo* method);
// 0x5a91350

bool CustomLogic_CustomLogicJustifyEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicJustifyEnum_o *__this,MethodInfo *method)

{
  return true;
}


