// Type: CustomLogic.CustomLogicProjectileNameEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicProjectileNameEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicProjectileNameEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicProjectileNameEnum_o* CustomLogic_CustomLogicProjectileNameEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5aa6960

CustomLogic_CustomLogicProjectileNameEnum_o *
CustomLogic_CustomLogicProjectileNameEnum_Factory__CreateInstance
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
  
  if (Il2CppMethodInitialized_07546a16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProjectileNameEnum);
    Il2CppMethodInitialized_07546a16 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicProjectileNameEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum);
  if (Il2CppMethodInitialized_07546a0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a0d = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicProjectileNameEnum_o *)__this;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicProjectileNameEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aa6a80

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicProjectileNameEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546a17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Flare");
    il2cpp_codegen_initialize_runtime_metadata(&"Rock2");
    il2cpp_codegen_initialize_runtime_metadata(&"CannonBall");
    il2cpp_codegen_initialize_runtime_metadata(&"SmokeBomb");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    il2cpp_codegen_initialize_runtime_metadata(&"Rock1");
    Il2CppMethodInitialized_07546a17 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x3c3eb8d8) {
    if (uVar2 == 0x23b28a7f) {
      bVar1 = System_String__op_Equality(name,"Rock1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock1
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock1
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x24b28c12) {
      bVar1 = System_String__op_Equality(name,"Rock2",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock2
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x3c3eb8d7) {
      bVar1 = System_String__op_Equality(name,"Flare",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Flare
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Flare
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x99d03dfb) {
    if (uVar2 == 0x8d87a40b) {
      bVar1 = System_String__op_Equality(name,"BladeThrow",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__BladeThrow
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__BladeThrow
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x99d03dfa) {
      bVar1 = System_String__op_Equality(name,"Thunderspear",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Thunderspear
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Thunderspear
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0x9fc581fa) {
    bVar1 = System_String__op_Equality(name,"SmokeBomb",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
        pCVar3 = CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__SmokeBomb
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__SmokeBomb
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xcd667d01) {
    bVar1 = System_String__op_Equality(name,"CannonBall",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
        pCVar3 = CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__CannonBall
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__CannonBall
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicProjectileNameEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Thunderspear
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Thunderspear (const MethodInfo* method);
// 0x5aa6e00

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Thunderspear(MethodInfo *method)

{
  System_Func_CustomLogicProjectileNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Thunderspear_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
    Il2CppMethodInitialized_07546a18 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Thunderspear_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__CannonBall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__CannonBall (const MethodInfo* method);
// 0x5aa6ea0

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__CannonBall(MethodInfo *method)

{
  System_Func_CustomLogicProjectileNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__CannonBall_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
    Il2CppMethodInitialized_07546a19 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__CannonBall_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Flare
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Flare (const MethodInfo* method);
// 0x5aa6f40

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Flare(MethodInfo *method)

{
  System_Func_CustomLogicProjectileNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Flare_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
    Il2CppMethodInitialized_07546a1a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Flare_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__BladeThrow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__BladeThrow (const MethodInfo* method);
// 0x5aa6fe0

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__BladeThrow(MethodInfo *method)

{
  System_Func_CustomLogicProjectileNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__BladeThrow_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
    Il2CppMethodInitialized_07546a1b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__BladeThrow_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__SmokeBomb
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__SmokeBomb (const MethodInfo* method);
// 0x5aa7080

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__SmokeBomb(MethodInfo *method)

{
  System_Func_CustomLogicProjectileNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__SmokeBomb_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
    Il2CppMethodInitialized_07546a1c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__SmokeBomb_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Rock1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock1 (const MethodInfo* method);
// 0x5aa7120

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock1(MethodInfo *method)

{
  System_Func_CustomLogicProjectileNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Rock1_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
    Il2CppMethodInitialized_07546a1d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Rock1_g____getter_7
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$__CreatePropertyBinding__Rock2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o* CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock2 (const MethodInfo* method);
// 0x5aa71c0

CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *
CustomLogic_CustomLogicProjectileNameEnum_Bindings____CreatePropertyBinding__Rock2(MethodInfo *method)

{
  System_Func_CustomLogicProjectileNameEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Rock2_g____getter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicProjectileNameEnum_object);
    Il2CppMethodInitialized_07546a1e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicProjectileNameEnum_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings___CreatePropertyBinding__Rock2_g____getter_8
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicProjectileNameEnum_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicProjectileNameEnum_Bindings___cctor (const MethodInfo* method);
// 0x5aa7260

void CustomLogic_CustomLogicProjectileNameEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546a1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Flare");
    il2cpp_codegen_initialize_runtime_metadata(&"Rock2");
    il2cpp_codegen_initialize_runtime_metadata(&"CannonBall");
    il2cpp_codegen_initialize_runtime_metadata(&"SmokeBomb");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    il2cpp_codegen_initialize_runtime_metadata(&"Rock1");
    Il2CppMethodInitialized_07546a1f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Thunderspear",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CannonBall",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Flare",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeThrow",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SmokeBomb",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rock1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rock2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicProjectileNameEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Thunderspear>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Thunderspear_g____getter_2_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x5aa7400

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Thunderspear_g____getter_2_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546c92 = '\x01';
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    return (Il2CppObject *)TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Thunderspear;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs)->static_fields;
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__CannonBall>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__CannonBall_g____getter_3_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x5aa7470

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__CannonBall_g____getter_3_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546c93 = '\x01';
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    return (Il2CppObject *)TypeInfo_Projectiles_ProjectilePrefabs->static_fields->CannonBall;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs)->static_fields + 8);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Flare>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Flare_g____getter_4_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x5aa74e0

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Flare_g____getter_4_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546c94 = '\x01';
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    return (Il2CppObject *)TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Flare;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs)->static_fields + 0x10);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__BladeThrow>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__BladeThrow_g____getter_5_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x5aa7550

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__BladeThrow_g____getter_5_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546c95 = '\x01';
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    return (Il2CppObject *)TypeInfo_Projectiles_ProjectilePrefabs->static_fields->BladeThrow;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs)->static_fields + 0x18);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__SmokeBomb>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__SmokeBomb_g____getter_6_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x5aa75c0

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__SmokeBomb_g____getter_6_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546c96 = '\x01';
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    return (Il2CppObject *)TypeInfo_Projectiles_ProjectilePrefabs->static_fields->SmokeBomb;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs)->static_fields + 0x20);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Rock1>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Rock1_g____getter_7_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x5aa7630

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Rock1_g____getter_7_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546c97 = '\x01';
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    return (Il2CppObject *)TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock1;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs)->static_fields + 0x28);
}


// CustomLogic.CustomLogicProjectileNameEnum.Bindings$$<__CreatePropertyBinding__Rock2>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Rock2_g____getter_8_0 (CustomLogic_CustomLogicProjectileNameEnum_o* __i, const MethodInfo* method);
// 0x5aa76a0

Il2CppObject *
CustomLogic_CustomLogicProjectileNameEnum_Bindings_____CreatePropertyBinding__Rock2_g____getter_8_0
          (CustomLogic_CustomLogicProjectileNameEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546c98 = '\x01';
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    return (Il2CppObject *)TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock2;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs)->static_fields + 0x30);
}


// CustomLogic.CustomLogicProjectileNameEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicProjectileNameEnum___ctor (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x5aa6580

void CustomLogic_CustomLogicProjectileNameEnum___ctor
               (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a0d = '\x01';
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


// CustomLogic.CustomLogicProjectileNameEnum$$get_Thunderspear
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Thunderspear (const MethodInfo* method);
// 0x5aa65f0

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Thunderspear(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546a0e = '\x01';
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    return TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Thunderspear;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs)->static_fields;
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_CannonBall
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_CannonBall (const MethodInfo* method);
// 0x5aa6660

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_CannonBall(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546a0f = '\x01';
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    return TypeInfo_Projectiles_ProjectilePrefabs->static_fields->CannonBall;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs)->static_fields + 8);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_Flare
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Flare (const MethodInfo* method);
// 0x5aa66d0

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Flare(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546a10 = '\x01';
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    return TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Flare;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs)->static_fields + 0x10);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_BladeThrow
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_BladeThrow (const MethodInfo* method);
// 0x5aa6740

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_BladeThrow(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546a11 = '\x01';
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    return TypeInfo_Projectiles_ProjectilePrefabs->static_fields->BladeThrow;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs)->static_fields + 0x18);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_SmokeBomb
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_SmokeBomb (const MethodInfo* method);
// 0x5aa67b0

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_SmokeBomb(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546a12 = '\x01';
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    return TypeInfo_Projectiles_ProjectilePrefabs->static_fields->SmokeBomb;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs)->static_fields + 0x20);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_Rock1
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Rock1 (const MethodInfo* method);
// 0x5aa6820

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Rock1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546a13 = '\x01';
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    return TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock1;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs)->static_fields + 0x28);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_Rock2
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_Rock2 (const MethodInfo* method);
// 0x5aa6890

System_String_o * CustomLogic_CustomLogicProjectileNameEnum__get_Rock2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    Il2CppMethodInitialized_07546a14 = '\x01';
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
    return TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock2;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs)->static_fields + 0x30);
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicProjectileNameEnum__get_ClassName (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x5aa6900

System_String_o *
CustomLogic_CustomLogicProjectileNameEnum__get_ClassName
          (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ProjectileNameEnum");
    Il2CppMethodInitialized_07546a15 = '\x01';
  }
  return "ProjectileNameEnum";
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicProjectileNameEnum__get_IsAbstract (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x5aa6930

bool CustomLogic_CustomLogicProjectileNameEnum__get_IsAbstract
               (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicProjectileNameEnum__get_IsStatic (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x5aa6940

bool CustomLogic_CustomLogicProjectileNameEnum__get_IsStatic
               (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicProjectileNameEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicProjectileNameEnum__get_InheritBaseMembers (CustomLogic_CustomLogicProjectileNameEnum_o* __this, const MethodInfo* method);
// 0x5aa6950

bool CustomLogic_CustomLogicProjectileNameEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicProjectileNameEnum_o *__this,MethodInfo *method)

{
  return true;
}


