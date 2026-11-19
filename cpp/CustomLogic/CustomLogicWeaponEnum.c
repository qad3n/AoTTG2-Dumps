// Type: CustomLogic.CustomLogicWeaponEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicWeaponEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicWeaponEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicWeaponEnum_o* CustomLogic_CustomLogicWeaponEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5ac3700

CustomLogic_CustomLogicWeaponEnum_o *
CustomLogic_CustomLogicWeaponEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546c4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWeaponEnum);
    Il2CppMethodInitialized_07546c4c = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicWeaponEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicWeaponEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWeaponEnum);
  if (Il2CppMethodInitialized_07546c44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546c44 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicWeaponEnum_o *)__this;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicWeaponEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5ac3820

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicWeaponEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicWeaponEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546c4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"Civilian");
    il2cpp_codegen_initialize_runtime_metadata(&"APG");
    il2cpp_codegen_initialize_runtime_metadata(&"Unarmed");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_07546c4d = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Blade",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Blade
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Blade
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"AHSS",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__AHSS((MethodInfo *)pCVar4)
      ;
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__AHSS
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"APG",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__APG((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__APG
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Thunderspear",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Thunderspear
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Unarmed",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Unarmed
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Civilian",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Civilian
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicWeaponEnum not found");
  pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Blade
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Blade (const MethodInfo* method);
// 0x5ac3a90

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Blade(MethodInfo *method)

{
  System_Func_CustomLogicWeaponEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Blade_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
    Il2CppMethodInitialized_07546c4e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Blade_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__AHSS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__AHSS (const MethodInfo* method);
// 0x5ac3b30

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__AHSS(MethodInfo *method)

{
  System_Func_CustomLogicWeaponEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__AHSS_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
    Il2CppMethodInitialized_07546c4f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__AHSS_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__APG
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__APG (const MethodInfo* method);
// 0x5ac3bd0

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__APG(MethodInfo *method)

{
  System_Func_CustomLogicWeaponEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__APG_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
    Il2CppMethodInitialized_07546c50 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__APG_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Thunderspear
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Thunderspear (const MethodInfo* method);
// 0x5ac3c70

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Thunderspear(MethodInfo *method)

{
  System_Func_CustomLogicWeaponEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Thunderspear_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
    Il2CppMethodInitialized_07546c51 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Thunderspear_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Unarmed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Unarmed (const MethodInfo* method);
// 0x5ac3d10

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Unarmed(MethodInfo *method)

{
  System_Func_CustomLogicWeaponEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Unarmed_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
    Il2CppMethodInitialized_07546c52 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Unarmed_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Civilian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Civilian (const MethodInfo* method);
// 0x5ac3db0

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Civilian(MethodInfo *method)

{
  System_Func_CustomLogicWeaponEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Civilian_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
    Il2CppMethodInitialized_07546c53 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Civilian_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicWeaponEnum_Bindings___cctor (const MethodInfo* method);
// 0x5ac3e50

void CustomLogic_CustomLogicWeaponEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546c54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"Civilian");
    il2cpp_codegen_initialize_runtime_metadata(&"APG");
    il2cpp_codegen_initialize_runtime_metadata(&"Unarmed");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_07546c54 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Blade",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSS",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"APG",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Thunderspear",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Unarmed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Civilian",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Blade>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Blade_g____getter_2_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x5ac3fc0

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Blade_g____getter_2_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545fd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07545fd3 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Blade;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__AHSS>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__AHSS_g____getter_3_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x5ac4030

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__AHSS_g____getter_3_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546cd7 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 8);
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__APG>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__APG_g____getter_4_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x5ac40a0

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__APG_g____getter_4_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546cd8 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->APG;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x18);
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Thunderspear>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Thunderspear_g____getter_5_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x5ac4110

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Thunderspear_g____getter_5_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545fd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07545fd4 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x10);
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Unarmed>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Unarmed_g____getter_6_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x5ac4180

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Unarmed_g____getter_6_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546cd9 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x20);
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Civilian>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Civilian_g____getter_7_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x5ac41f0

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Civilian_g____getter_7_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546cda = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x28);
}


// CustomLogic.CustomLogicWeaponEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicWeaponEnum___ctor (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x5ac3390

void CustomLogic_CustomLogicWeaponEnum___ctor(CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546c44 = '\x01';
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


// CustomLogic.CustomLogicWeaponEnum$$get_Blade
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_Blade (const MethodInfo* method);
// 0x5ac3400

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_Blade(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546c45 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return TypeInfo_GameManagers_HumanLoadout->static_fields->Blade;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields;
}


// CustomLogic.CustomLogicWeaponEnum$$get_AHSS
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_AHSS (const MethodInfo* method);
// 0x5ac3470

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_AHSS(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546c46 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 8);
}


// CustomLogic.CustomLogicWeaponEnum$$get_APG
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_APG (const MethodInfo* method);
// 0x5ac34e0

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_APG(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546c47 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return TypeInfo_GameManagers_HumanLoadout->static_fields->APG;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x18);
}


// CustomLogic.CustomLogicWeaponEnum$$get_Thunderspear
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_Thunderspear (const MethodInfo* method);
// 0x5ac3550

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_Thunderspear(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546c48 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x10);
}


// CustomLogic.CustomLogicWeaponEnum$$get_Unarmed
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_Unarmed (const MethodInfo* method);
// 0x5ac35c0

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_Unarmed(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546c49 = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x20);
}


// CustomLogic.CustomLogicWeaponEnum$$get_Civilian
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_Civilian (const MethodInfo* method);
// 0x5ac3630

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_Civilian(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_07546c4a = '\x01';
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    return TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout)->static_fields + 0x28);
}


// CustomLogic.CustomLogicWeaponEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_ClassName (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x5ac36a0

System_String_o *
CustomLogic_CustomLogicWeaponEnum__get_ClassName
          (CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponEnum");
    Il2CppMethodInitialized_07546c4b = '\x01';
  }
  return "WeaponEnum";
}


// CustomLogic.CustomLogicWeaponEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicWeaponEnum__get_IsAbstract (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x5ac36d0

bool CustomLogic_CustomLogicWeaponEnum__get_IsAbstract
               (CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicWeaponEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicWeaponEnum__get_IsStatic (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x5ac36e0

bool CustomLogic_CustomLogicWeaponEnum__get_IsStatic
               (CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicWeaponEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicWeaponEnum__get_InheritBaseMembers (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x5ac36f0

bool CustomLogic_CustomLogicWeaponEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  return true;
}


