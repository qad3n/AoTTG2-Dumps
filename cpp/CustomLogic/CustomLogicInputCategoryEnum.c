// Type: CustomLogic.CustomLogicInputCategoryEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicInputCategoryEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputCategoryEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputCategoryEnum_o* CustomLogic_CustomLogicInputCategoryEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a80a20

CustomLogic_CustomLogicInputCategoryEnum_o *
CustomLogic_CustomLogicInputCategoryEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546683 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputCategoryEnum);
    Il2CppMethodInitialized_07546683 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputCategoryEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum);
  if (Il2CppMethodInitialized_0754667b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754667b = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicInputCategoryEnum_o *)__this;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputCategoryEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a80b40

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicInputCategoryEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546684 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
    Il2CppMethodInitialized_07546684 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"General",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__General
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__General
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Human",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Human
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Human
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Titan",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Titan
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Titan
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Interaction",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Interaction
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"AnnieShifter",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__AnnieShifter
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"ErenShifter",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__ErenShifter
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputCategoryEnum not found");
  pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__General
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__General (const MethodInfo* method);
// 0x5a80db0

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__General(MethodInfo *method)

{
  System_Func_CustomLogicInputCategoryEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546685 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__General_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
    Il2CppMethodInitialized_07546685 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__General_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__Human
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Human (const MethodInfo* method);
// 0x5a80e50

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Human(MethodInfo *method)

{
  System_Func_CustomLogicInputCategoryEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546686 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Human_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
    Il2CppMethodInitialized_07546686 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Human_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__Titan
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Titan (const MethodInfo* method);
// 0x5a80ef0

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Titan(MethodInfo *method)

{
  System_Func_CustomLogicInputCategoryEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546687 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Titan_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
    Il2CppMethodInitialized_07546687 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Titan_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__Interaction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Interaction (const MethodInfo* method);
// 0x5a80f90

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__Interaction(MethodInfo *method)

{
  System_Func_CustomLogicInputCategoryEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546688 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Interaction_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
    Il2CppMethodInitialized_07546688 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Interaction_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__AnnieShifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__AnnieShifter (const MethodInfo* method);
// 0x5a81030

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__AnnieShifter(MethodInfo *method)

{
  System_Func_CustomLogicInputCategoryEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546689 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__AnnieShifter_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
    Il2CppMethodInitialized_07546689 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__AnnieShifter_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__ErenShifter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o* CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__ErenShifter (const MethodInfo* method);
// 0x5a810d0

CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *
CustomLogic_CustomLogicInputCategoryEnum_Bindings____CreatePropertyBinding__ErenShifter(MethodInfo *method)

{
  System_Func_CustomLogicInputCategoryEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754668a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__ErenShifter_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
    Il2CppMethodInitialized_0754668a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputCategoryEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__ErenShifter_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputCategoryEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputCategoryEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a81170

void CustomLogic_CustomLogicInputCategoryEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_0754668b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
    Il2CppMethodInitialized_0754668b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"General",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Human",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titan",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Interaction",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AnnieShifter",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ErenShifter",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__General>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__General_g____getter_2_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x5a812e0

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__General_g____getter_2_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754667c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_0754667c = '\x01';
  }
  return (Il2CppObject *)"General";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__Human>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Human_g____getter_3_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x5a81310

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Human_g____getter_3_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754667d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    Il2CppMethodInitialized_0754667d = '\x01';
  }
  return (Il2CppObject *)"Human";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__Titan>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_4_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x5a81340

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Titan_g____getter_4_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754667e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_0754667e = '\x01';
  }
  return (Il2CppObject *)"Titan";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__Interaction>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Interaction_g____getter_5_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x5a81370

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__Interaction_g____getter_5_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754667f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
    Il2CppMethodInitialized_0754667f = '\x01';
  }
  return (Il2CppObject *)"Interaction";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__AnnieShifter>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__AnnieShifter_g____getter_6_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x5a813a0

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__AnnieShifter_g____getter_6_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546680 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter");
    Il2CppMethodInitialized_07546680 = '\x01';
  }
  return (Il2CppObject *)"AnnieShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__ErenShifter>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__ErenShifter_g____getter_7_0 (CustomLogic_CustomLogicInputCategoryEnum_o* __i, const MethodInfo* method);
// 0x5a813d0

Il2CppObject *
CustomLogic_CustomLogicInputCategoryEnum_Bindings_____CreatePropertyBinding__ErenShifter_g____getter_7_0
          (CustomLogic_CustomLogicInputCategoryEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546681 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter");
    Il2CppMethodInitialized_07546681 = '\x01';
  }
  return (Il2CppObject *)"ErenShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputCategoryEnum___ctor (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x5a80830

void CustomLogic_CustomLogicInputCategoryEnum___ctor
               (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754667b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754667b = '\x01';
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


// CustomLogic.CustomLogicInputCategoryEnum$$get_General
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_General (const MethodInfo* method);
// 0x5a808a0

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_General(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754667c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_0754667c = '\x01';
  }
  return "General";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_Human
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_Human (const MethodInfo* method);
// 0x5a808d0

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_Human(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754667d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    Il2CppMethodInitialized_0754667d = '\x01';
  }
  return "Human";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_Titan
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_Titan (const MethodInfo* method);
// 0x5a80900

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_Titan(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754667e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_0754667e = '\x01';
  }
  return "Titan";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_Interaction
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_Interaction (const MethodInfo* method);
// 0x5a80930

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_Interaction(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754667f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
    Il2CppMethodInitialized_0754667f = '\x01';
  }
  return "Interaction";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_AnnieShifter
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_AnnieShifter (const MethodInfo* method);
// 0x5a80960

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_AnnieShifter(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546680 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter");
    Il2CppMethodInitialized_07546680 = '\x01';
  }
  return "AnnieShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_ErenShifter
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_ErenShifter (const MethodInfo* method);
// 0x5a80990

System_String_o * CustomLogic_CustomLogicInputCategoryEnum__get_ErenShifter(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546681 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter");
    Il2CppMethodInitialized_07546681 = '\x01';
  }
  return "ErenShifter";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputCategoryEnum__get_ClassName (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x5a809c0

System_String_o *
CustomLogic_CustomLogicInputCategoryEnum__get_ClassName
          (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546682 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InputCategoryEnum");
    Il2CppMethodInitialized_07546682 = '\x01';
  }
  return "InputCategoryEnum";
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputCategoryEnum__get_IsAbstract (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x5a809f0

bool CustomLogic_CustomLogicInputCategoryEnum__get_IsAbstract
               (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputCategoryEnum__get_IsStatic (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x5a80a00

bool CustomLogic_CustomLogicInputCategoryEnum__get_IsStatic
               (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputCategoryEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputCategoryEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputCategoryEnum_o* __this, const MethodInfo* method);
// 0x5a80a10

bool CustomLogic_CustomLogicInputCategoryEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicInputCategoryEnum_o *__this,MethodInfo *method)

{
  return true;
}


