// Type: CustomLogic.CustomLogicTSKillSoundEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTSKillSoundEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicTSKillSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTSKillSoundEnum_o* CustomLogic_CustomLogicTSKillSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5aae090

CustomLogic_CustomLogicTSKillSoundEnum_o *
CustomLogic_CustomLogicTSKillSoundEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicTSKillSoundEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546aa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546aa6 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTSKillSoundEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  if (Il2CppMethodInitialized_07546a9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a9d = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aae1b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicTSKillSoundEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546aa7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ArmorHit");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxRangeShot");
    il2cpp_codegen_initialize_runtime_metadata(&"Air");
    il2cpp_codegen_initialize_runtime_metadata(&"Ground");
    il2cpp_codegen_initialize_runtime_metadata(&"CloseShot");
    il2cpp_codegen_initialize_runtime_metadata(&"Kill");
    Il2CppMethodInitialized_07546aa7 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Kill",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Kill
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Kill
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Air",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Air
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Air
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Ground",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Ground
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Ground
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"ArmorHit",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__ArmorHit
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"CloseShot",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__CloseShot
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"MaxRangeShot",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__MaxRangeShot
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTSKillSoundEnum not found");
  pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__Kill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Kill (const MethodInfo* method);
// 0x5aae420

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Kill(MethodInfo *method)

{
  System_Func_CustomLogicTSKillSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546aa8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Kill_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
    Il2CppMethodInitialized_07546aa8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Kill_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__Air
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Air (const MethodInfo* method);
// 0x5aae4c0

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Air(MethodInfo *method)

{
  System_Func_CustomLogicTSKillSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546aa9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Air_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
    Il2CppMethodInitialized_07546aa9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Air_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__Ground
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Ground (const MethodInfo* method);
// 0x5aae560

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__Ground(MethodInfo *method)

{
  System_Func_CustomLogicTSKillSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546aaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Ground_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
    Il2CppMethodInitialized_07546aaa = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__Ground_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__ArmorHit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__ArmorHit (const MethodInfo* method);
// 0x5aae600

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__ArmorHit(MethodInfo *method)

{
  System_Func_CustomLogicTSKillSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546aab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__ArmorHit_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
    Il2CppMethodInitialized_07546aab = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__ArmorHit_g____getter_5
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__CloseShot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__CloseShot (const MethodInfo* method);
// 0x5aae6a0

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__CloseShot(MethodInfo *method)

{
  System_Func_CustomLogicTSKillSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546aac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__CloseShot_g____getter_6
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
    Il2CppMethodInitialized_07546aac = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__CloseShot_g____getter_6
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$__CreatePropertyBinding__MaxRangeShot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o* CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__MaxRangeShot (const MethodInfo* method);
// 0x5aae740

CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings____CreatePropertyBinding__MaxRangeShot(MethodInfo *method)

{
  System_Func_CustomLogicTSKillSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546aad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__MaxRangeShot_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
    Il2CppMethodInitialized_07546aad = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTSKillSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings___CreatePropertyBinding__MaxRangeShot_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTSKillSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTSKillSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x5aae7e0

void CustomLogic_CustomLogicTSKillSoundEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546aae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ArmorHit");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxRangeShot");
    il2cpp_codegen_initialize_runtime_metadata(&"Air");
    il2cpp_codegen_initialize_runtime_metadata(&"Ground");
    il2cpp_codegen_initialize_runtime_metadata(&"CloseShot");
    il2cpp_codegen_initialize_runtime_metadata(&"Kill");
    Il2CppMethodInitialized_07546aae = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Kill",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Air",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ground",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ArmorHit",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CloseShot",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxRangeShot",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__Kill>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Kill_g____getter_2_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x5aae950
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aae96d: cmp byte ptr [rip + 0x1a9832b], 0
// asm:   0x5aae974: je 0x5aae9c2

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Kill_g____getter_2_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546aaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546aaf = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  if (Il2CppMethodInitialized_07546c9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546c9f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_kill;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->static_fields;
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__Air>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Air_g____getter_3_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x5aaea00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aaea1d: cmp byte ptr [rip + 0x1a9827c], 0
// asm:   0x5aaea24: je 0x5aaea73

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Air_g____getter_3_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ab0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546ab0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  if (Il2CppMethodInitialized_07546ca0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546ca0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_air;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__Ground>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Ground_g____getter_4_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x5aaeab0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aaeacd: cmp byte ptr [rip + 0x1a981cd], 0
// asm:   0x5aaead4: je 0x5aaeb23

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__Ground_g____getter_4_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ab1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546ab1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  if (Il2CppMethodInitialized_07546ca1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546ca1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_ground;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__ArmorHit>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__ArmorHit_g____getter_5_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x5aaeb60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aaeb7d: cmp byte ptr [rip + 0x1a9811e], 0
// asm:   0x5aaeb84: je 0x5aaebd3

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__ArmorHit_g____getter_5_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ab2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546ab2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  if (Il2CppMethodInitialized_07546ca2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546ca2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_armorHit;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__CloseShot>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__CloseShot_g____getter_6_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x5aaec10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aaec2d: cmp byte ptr [rip + 0x1a9806f], 0
// asm:   0x5aaec34: je 0x5aaec83

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__CloseShot_g____getter_6_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ab3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546ab3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  if (Il2CppMethodInitialized_07546ca3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546ca3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_closeShot;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->static_fields + 0x20);
}


// CustomLogic.CustomLogicTSKillSoundEnum.Bindings$$<__CreatePropertyBinding__MaxRangeShot>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__MaxRangeShot_g____getter_7_0 (CustomLogic_CustomLogicTSKillSoundEnum_o* __i, const MethodInfo* method);
// 0x5aaecc0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aaecdd: cmp byte ptr [rip + 0x1a97fc0], 0
// asm:   0x5aaece4: je 0x5aaed33

Il2CppObject *
CustomLogic_CustomLogicTSKillSoundEnum_Bindings_____CreatePropertyBinding__MaxRangeShot_g____getter_7_0
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ab4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546ab4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
  }
  if (Il2CppMethodInitialized_07546ca4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546ca4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_maxRangeShot;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->static_fields + 0x28);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicTSKillSoundEnum___ctor (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x5aadb40

void CustomLogic_CustomLogicTSKillSoundEnum___ctor
               (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a9d = '\x01';
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


// CustomLogic.CustomLogicTSKillSoundEnum$$get_Kill
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_Kill (const MethodInfo* method);
// 0x5aadbb0

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_Kill(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546a9e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    return TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_kill;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->static_fields;
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_Air
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_Air (const MethodInfo* method);
// 0x5aadc20

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_Air(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546a9f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    return TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_air;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_Ground
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_Ground (const MethodInfo* method);
// 0x5aadc90

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_Ground(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546aa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546aa0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    return TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_ground;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_ArmorHit
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_ArmorHit (const MethodInfo* method);
// 0x5aadd00

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_ArmorHit(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546aa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546aa1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    return TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_armorHit;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_CloseShot
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_CloseShot (const MethodInfo* method);
// 0x5aadd70

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_CloseShot(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546aa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546aa2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    return TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_closeShot;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->static_fields + 0x20);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_MaxRangeShot
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_MaxRangeShot (const MethodInfo* method);
// 0x5aadde0

System_String_o * CustomLogic_CustomLogicTSKillSoundEnum__get_MaxRangeShot(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546aa3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    Il2CppMethodInitialized_07546aa3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    return TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_maxRangeShot;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum)->static_fields + 0x28);
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTSKillSoundEnum__get_ClassName (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x5aade50

System_String_o *
CustomLogic_CustomLogicTSKillSoundEnum__get_ClassName
          (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546aa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TSKillSoundEnum");
    Il2CppMethodInitialized_07546aa4 = '\x01';
  }
  return "TSKillSoundEnum";
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTSKillSoundEnum__get_IsAbstract (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x5aade80

bool CustomLogic_CustomLogicTSKillSoundEnum__get_IsAbstract
               (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTSKillSoundEnum__get_IsStatic (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x5aade90

bool CustomLogic_CustomLogicTSKillSoundEnum__get_IsStatic
               (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTSKillSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTSKillSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicTSKillSoundEnum_o* __this, const MethodInfo* method);
// 0x5aadea0

bool CustomLogic_CustomLogicTSKillSoundEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicTSKillSoundEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTSKillSoundEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicTSKillSoundEnum___cctor (const MethodInfo* method);
// 0x5aadeb0

void CustomLogic_CustomLogicTSKillSoundEnum___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicTSKillSoundEnum_StaticFields *pCVar1;
  System_String_o *pSVar2;
  System_Enum_o SStack_a0;
  undefined4 uStack_90;
  System_Enum_o SStack_88;
  undefined4 uStack_78;
  System_Enum_o SStack_70;
  undefined4 uStack_60;
  System_Enum_o SStack_58;
  undefined4 uStack_48;
  System_Enum_o SStack_40;
  undefined4 uStack_30;
  System_Enum_o SStack_28;
  undefined4 uStack_18;
  
  if (Il2CppMethodInitialized_07546aa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_TSKillType);
    Il2CppMethodInitialized_07546aa5 = '\x01';
  }
  SStack_28.klass = (System_Enum_c *)TypeInfo_Projectiles_TSKillType;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  uStack_18 = 2;
  pSVar2 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_kill = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields->_kill);
  SStack_40.klass = (System_Enum_c *)TypeInfo_Projectiles_TSKillType;
  SStack_40.monitor = (void *)0xffffffffffffffff;
  uStack_30 = 0;
  pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields;
  pCVar1->_air = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->_air);
  SStack_58.klass = (System_Enum_c *)TypeInfo_Projectiles_TSKillType;
  SStack_58.monitor = (void *)0xffffffffffffffff;
  uStack_48 = 1;
  pSVar2 = System_Enum__ToString(&SStack_58,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields;
  pCVar1->_ground = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->_ground);
  SStack_70.klass = (System_Enum_c *)TypeInfo_Projectiles_TSKillType;
  SStack_70.monitor = (void *)0xffffffffffffffff;
  uStack_60 = 3;
  pSVar2 = System_Enum__ToString(&SStack_70,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields;
  pCVar1->_armorHit = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->_armorHit);
  SStack_88.klass = (System_Enum_c *)TypeInfo_Projectiles_TSKillType;
  SStack_88.monitor = (void *)0xffffffffffffffff;
  uStack_78 = 4;
  pSVar2 = System_Enum__ToString(&SStack_88,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields;
  pCVar1->_closeShot = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->_closeShot);
  SStack_a0.klass = (System_Enum_c *)TypeInfo_Projectiles_TSKillType;
  SStack_a0.monitor = (void *)0xffffffffffffffff;
  uStack_90 = 5;
  pSVar2 = System_Enum__ToString(&SStack_a0,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicTSKillSoundEnum->static_fields;
  pCVar1->_maxRangeShot = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->_maxRangeShot);
  return;
}


