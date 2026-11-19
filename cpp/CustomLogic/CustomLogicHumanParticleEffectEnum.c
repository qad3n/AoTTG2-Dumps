// Type: CustomLogic.CustomLogicHumanParticleEffectEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanParticleEffectEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHumanParticleEffectEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanParticleEffectEnum_o* CustomLogic_CustomLogicHumanParticleEffectEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a70e50

CustomLogic_CustomLogicHumanParticleEffectEnum_o *
CustomLogic_CustomLogicHumanParticleEffectEnum_Factory__CreateInstance
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
  
  if (Il2CppMethodInitialized_07546483 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum);
    Il2CppMethodInitialized_07546483 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHumanParticleEffectEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum);
  if (Il2CppMethodInitialized_0754647e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754647e = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicHumanParticleEffectEnum_o *)__this;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a70f70

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546484 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Buff2");
    il2cpp_codegen_initialize_runtime_metadata(&"Buff1");
    il2cpp_codegen_initialize_runtime_metadata(&"Fire1");
    Il2CppMethodInitialized_07546484 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Buff1",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
       ) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff1
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff1
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Buff2",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
       ) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings);
      pCVar2 = CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff2
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff2
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Fire1",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHumanParticleEffectEnum not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
  {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings;
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings);
    pCVar2 = CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Fire1
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Fire1
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$__CreatePropertyBinding__Buff1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff1 (const MethodInfo* method);
// 0x5a71100

CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff1(MethodInfo *method)

{
  System_Func_CustomLogicHumanParticleEffectEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546485 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings___CreatePropertyBinding__Buff1_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanParticleEffectEnum_object);
    Il2CppMethodInitialized_07546485 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanParticleEffectEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings___CreatePropertyBinding__Buff1_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$__CreatePropertyBinding__Buff2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff2 (const MethodInfo* method);
// 0x5a711a0

CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Buff2(MethodInfo *method)

{
  System_Func_CustomLogicHumanParticleEffectEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546486 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings___CreatePropertyBinding__Buff2_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanParticleEffectEnum_object);
    Il2CppMethodInitialized_07546486 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanParticleEffectEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings___CreatePropertyBinding__Buff2_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$__CreatePropertyBinding__Fire1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Fire1 (const MethodInfo* method);
// 0x5a71240

CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings____CreatePropertyBinding__Fire1(MethodInfo *method)

{
  System_Func_CustomLogicHumanParticleEffectEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546487 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings___CreatePropertyBinding__Fire1_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicHumanParticleEffectEnum_object);
    Il2CppMethodInitialized_07546487 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanParticleEffectEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings___CreatePropertyBinding__Fire1_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanParticleEffectEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a712e0

void CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546488 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Buff2");
    il2cpp_codegen_initialize_runtime_metadata(&"Buff1");
    il2cpp_codegen_initialize_runtime_metadata(&"Fire1");
    Il2CppMethodInitialized_07546488 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Buff1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Buff2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Fire1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$<__CreatePropertyBinding__Buff1>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_____CreatePropertyBinding__Buff1_g____getter_2_0 (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __i, const MethodInfo* method);
// 0x5a713f0

Il2CppObject *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_____CreatePropertyBinding__Buff1_g____getter_2_0
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754647f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Buff1");
    Il2CppMethodInitialized_0754647f = '\x01';
  }
  return (Il2CppObject *)"Buff1";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$<__CreatePropertyBinding__Buff2>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_____CreatePropertyBinding__Buff2_g____getter_3_0 (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __i, const MethodInfo* method);
// 0x5a71420

Il2CppObject *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_____CreatePropertyBinding__Buff2_g____getter_3_0
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546480 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Buff2");
    Il2CppMethodInitialized_07546480 = '\x01';
  }
  return (Il2CppObject *)"Buff2";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum.Bindings$$<__CreatePropertyBinding__Fire1>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_____CreatePropertyBinding__Fire1_g____getter_4_0 (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __i, const MethodInfo* method);
// 0x5a71450

Il2CppObject *
CustomLogic_CustomLogicHumanParticleEffectEnum_Bindings_____CreatePropertyBinding__Fire1_g____getter_4_0
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546481 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Fire1");
    Il2CppMethodInitialized_07546481 = '\x01';
  }
  return (Il2CppObject *)"Fire1";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanParticleEffectEnum___ctor (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __this, const MethodInfo* method);
// 0x5a70cf0

void CustomLogic_CustomLogicHumanParticleEffectEnum___ctor
               (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754647e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754647e = '\x01';
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


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_Buff1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanParticleEffectEnum__get_Buff1 (const MethodInfo* method);
// 0x5a70d60

System_String_o * CustomLogic_CustomLogicHumanParticleEffectEnum__get_Buff1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754647f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Buff1");
    Il2CppMethodInitialized_0754647f = '\x01';
  }
  return "Buff1";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_Buff2
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanParticleEffectEnum__get_Buff2 (const MethodInfo* method);
// 0x5a70d90

System_String_o * CustomLogic_CustomLogicHumanParticleEffectEnum__get_Buff2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546480 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Buff2");
    Il2CppMethodInitialized_07546480 = '\x01';
  }
  return "Buff2";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_Fire1
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanParticleEffectEnum__get_Fire1 (const MethodInfo* method);
// 0x5a70dc0

System_String_o * CustomLogic_CustomLogicHumanParticleEffectEnum__get_Fire1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546481 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Fire1");
    Il2CppMethodInitialized_07546481 = '\x01';
  }
  return "Fire1";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanParticleEffectEnum__get_ClassName (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __this, const MethodInfo* method);
// 0x5a70df0

System_String_o *
CustomLogic_CustomLogicHumanParticleEffectEnum__get_ClassName
          (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546482 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HumanParticleEffectEnum");
    Il2CppMethodInitialized_07546482 = '\x01';
  }
  return "HumanParticleEffectEnum";
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanParticleEffectEnum__get_IsAbstract (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __this, const MethodInfo* method);
// 0x5a70e20

bool CustomLogic_CustomLogicHumanParticleEffectEnum__get_IsAbstract
               (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanParticleEffectEnum__get_IsStatic (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __this, const MethodInfo* method);
// 0x5a70e30

bool CustomLogic_CustomLogicHumanParticleEffectEnum__get_IsStatic
               (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicHumanParticleEffectEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanParticleEffectEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHumanParticleEffectEnum_o* __this, const MethodInfo* method);
// 0x5a70e40

bool CustomLogic_CustomLogicHumanParticleEffectEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicHumanParticleEffectEnum_o *__this,MethodInfo *method)

{
  return true;
}


