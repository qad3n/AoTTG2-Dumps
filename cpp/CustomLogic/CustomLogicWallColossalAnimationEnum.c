// Type: CustomLogic.CustomLogicWallColossalAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicWallColossalAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicWallColossalAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicWallColossalAnimationEnum_o* CustomLogic_CustomLogicWallColossalAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5ac24e0

CustomLogic_CustomLogicWallColossalAnimationEnum_o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Factory__CreateInstance
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
  
  if (Il2CppMethodInitialized_07546c38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum);
    Il2CppMethodInitialized_07546c38 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicWallColossalAnimationEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum)
  ;
  if (Il2CppMethodInitialized_07546c2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546c2d = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicWallColossalAnimationEnum_o *)__this;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5ac2600

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546c39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSteam");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap1R");
    il2cpp_codegen_initialize_runtime_metadata(&"StunFallFace");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap2R");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap1L");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap2L");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSweep");
    Il2CppMethodInitialized_07546c39 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x65640d56) {
    if (uVar2 < 0x513bb56c) {
      if (uVar2 == 0x45aa17b3) {
        bVar1 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings->_2).
              cctor_finished_or_no_cctor == 0) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
            pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__Idle
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__Idle
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings
                             );
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x513bb56b) {
        bVar1 = System_String__op_Equality(name,"AttackWallSlap2R",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings->_2).
              cctor_finished_or_no_cctor == 0) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
            pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2R
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2R
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings
                             );
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x5f3bcb75) {
      bVar1 = System_String__op_Equality(name,"AttackWallSlap2L",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings->_2).
            cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2L
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2L
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x65640d55) {
      bVar1 = System_String__op_Equality(name,"StunFallFace",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings->_2).
            cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__StunFallFace
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__StunFallFace
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x7d3e3947) {
    if (uVar2 == 0x67ff8d2b) {
      bVar1 = System_String__op_Equality(name,"AttackSteam",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings->_2).
            cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSteam
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSteam
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x7d3e3946) {
      bVar1 = System_String__op_Equality(name,"AttackWallSlap1L",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings->_2).
            cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1L
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1L
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0x826affcb) {
    bVar1 = System_String__op_Equality(name,"AttackSweep",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
          == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
        pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSweep
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSweep
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0x973e6234) {
    bVar1 = System_String__op_Equality(name,"AttackWallSlap1R",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
          == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
        pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1R
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1R
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xc8f30ee7) {
    bVar1 = System_String__op_Equality(name,"AttackKick",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor
          == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
        pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackKick
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackKick
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicWallColossalAnimationEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x5ac2a60

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_CustomLogicWallColossalAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
    Il2CppMethodInitialized_07546c3a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap1L
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1L (const MethodInfo* method);
// 0x5ac2b00

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1L
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackWallSla
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
    Il2CppMethodInitialized_07546c3b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackWallSla
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap1R
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1R (const MethodInfo* method);
// 0x5ac2ba0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap1R
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackWallSla_71c25f8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
    Il2CppMethodInitialized_07546c3c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackWallSla_71c25f8
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap2L
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2L (const MethodInfo* method);
// 0x5ac2c40

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2L
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackWallSla_71c2600
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
    Il2CppMethodInitialized_07546c3d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackWallSla_71c2600
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackWallSlap2R
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2R (const MethodInfo* method);
// 0x5ac2ce0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackWallSlap2R
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackWallSla_71c2608
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
    Il2CppMethodInitialized_07546c3e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackWallSla_71c2608
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSteam
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSteam (const MethodInfo* method);
// 0x5ac2d80

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSteam
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackSteam_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
    Il2CppMethodInitialized_07546c3f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackSteam_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackSweep
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSweep (const MethodInfo* method);
// 0x5ac2e20

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackSweep
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackSweep_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
    Il2CppMethodInitialized_07546c40 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackSweep_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackKick (const MethodInfo* method);
// 0x5ac2ec0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__AttackKick
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
    Il2CppMethodInitialized_07546c41 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$__CreatePropertyBinding__StunFallFace
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__StunFallFace (const MethodInfo* method);
// 0x5ac2f60

CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings____CreatePropertyBinding__StunFallFace
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546c42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__StunFallFace
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
    Il2CppMethodInitialized_07546c42 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___CreatePropertyBinding__StunFallFace
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalAnimationEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x5ac3000

void CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546c43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSteam");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap1R");
    il2cpp_codegen_initialize_runtime_metadata(&"StunFallFace");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap2R");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap1L");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWallSlap2L");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSweep");
    Il2CppMethodInitialized_07546c43 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackWallSlap1L",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackWallSlap1R",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackWallSlap2L",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackWallSlap2R",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSteam",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSweep",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackKick",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StunFallFace",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ac31e0

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_colossal_idle");
    Il2CppMethodInitialized_07546c2e = '\x01';
  }
  return (Il2CppObject *)"Armature_VER2|wall_colossal_idle";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap1L>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap1L_g____getter_3_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ac3210

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap1L_g____getter_3_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap1_L");
    Il2CppMethodInitialized_07546c2f = '\x01';
  }
  return (Il2CppObject *)"Armature_VER2|wall_attack_slap1_L";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap1R>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap1R_g____getter_4_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ac3240

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap1R_g____getter_4_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap1_R");
    Il2CppMethodInitialized_07546c30 = '\x01';
  }
  return (Il2CppObject *)"Armature_VER2|wall_attack_slap1_R";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap2L>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap2L_g____getter_5_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ac3270

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap2L_g____getter_5_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap2_L");
    Il2CppMethodInitialized_07546c31 = '\x01';
  }
  return (Il2CppObject *)"Armature_VER2|wall_attack_slap2_L";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackWallSlap2R>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap2R_g____getter_6_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ac32a0

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackWallSlap2R_g____getter_6_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap2_R");
    Il2CppMethodInitialized_07546c32 = '\x01';
  }
  return (Il2CppObject *)"Armature_VER2|wall_attack_slap2_R";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSteam>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackSteam_g____getter_7_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ac32d0

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackSteam_g____getter_7_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_steam");
    Il2CppMethodInitialized_07546c33 = '\x01';
  }
  return (Il2CppObject *)"Armature_VER2|wall_attack_steam";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackSweep>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackSweep_g____getter_8_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ac3300

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackSweep_g____getter_8_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_sweep");
    Il2CppMethodInitialized_07546c34 = '\x01';
  }
  return (Il2CppObject *)"Armature_VER2|wall_attack_sweep";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_9_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ac3330

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_9_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_colossal_kick");
    Il2CppMethodInitialized_07546c35 = '\x01';
  }
  return (Il2CppObject *)"Armature_VER2|wall_colossal_kick";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum.Bindings$$<__CreatePropertyBinding__StunFallFace>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__StunFallFace_g____getter_10_0 (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __i, const MethodInfo* method);
// 0x5ac3360

Il2CppObject *
CustomLogic_CustomLogicWallColossalAnimationEnum_Bindings_____CreatePropertyBinding__StunFallFace_g____getter_10_0
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_colossal_stun");
    Il2CppMethodInitialized_07546c36 = '\x01';
  }
  return (Il2CppObject *)"Armature_VER2|wall_colossal_stun";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicWallColossalAnimationEnum___ctor (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __this, const MethodInfo* method);
// 0x5ac2260

void CustomLogic_CustomLogicWallColossalAnimationEnum___ctor
               (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546c2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546c2d = '\x01';
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


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_Idle (const MethodInfo* method);
// 0x5ac22d0

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_Idle(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_colossal_idle");
    Il2CppMethodInitialized_07546c2e = '\x01';
  }
  return "Armature_VER2|wall_colossal_idle";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap1L
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap1L (const MethodInfo* method);
// 0x5ac2300

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap1L(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap1_L");
    Il2CppMethodInitialized_07546c2f = '\x01';
  }
  return "Armature_VER2|wall_attack_slap1_L";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap1R
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap1R (const MethodInfo* method);
// 0x5ac2330

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap1R(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap1_R");
    Il2CppMethodInitialized_07546c30 = '\x01';
  }
  return "Armature_VER2|wall_attack_slap1_R";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap2L
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap2L (const MethodInfo* method);
// 0x5ac2360

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap2L(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap2_L");
    Il2CppMethodInitialized_07546c31 = '\x01';
  }
  return "Armature_VER2|wall_attack_slap2_L";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackWallSlap2R
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap2R (const MethodInfo* method);
// 0x5ac2390

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackWallSlap2R(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_slap2_R");
    Il2CppMethodInitialized_07546c32 = '\x01';
  }
  return "Armature_VER2|wall_attack_slap2_R";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackSteam
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackSteam (const MethodInfo* method);
// 0x5ac23c0

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackSteam(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_steam");
    Il2CppMethodInitialized_07546c33 = '\x01';
  }
  return "Armature_VER2|wall_attack_steam";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackSweep
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackSweep (const MethodInfo* method);
// 0x5ac23f0

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackSweep(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_attack_sweep");
    Il2CppMethodInitialized_07546c34 = '\x01';
  }
  return "Armature_VER2|wall_attack_sweep";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_AttackKick
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackKick (const MethodInfo* method);
// 0x5ac2420

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_AttackKick(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_colossal_kick");
    Il2CppMethodInitialized_07546c35 = '\x01';
  }
  return "Armature_VER2|wall_colossal_kick";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_StunFallFace
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_StunFallFace (const MethodInfo* method);
// 0x5ac2450

System_String_o * CustomLogic_CustomLogicWallColossalAnimationEnum__get_StunFallFace(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2|wall_colossal_stun");
    Il2CppMethodInitialized_07546c36 = '\x01';
  }
  return "Armature_VER2|wall_colossal_stun";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalAnimationEnum__get_ClassName (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __this, const MethodInfo* method);
// 0x5ac2480

System_String_o *
CustomLogic_CustomLogicWallColossalAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546c37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"WallColossalAnimationEnum");
    Il2CppMethodInitialized_07546c37 = '\x01';
  }
  return "WallColossalAnimationEnum";
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicWallColossalAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __this, const MethodInfo* method);
// 0x5ac24b0

bool CustomLogic_CustomLogicWallColossalAnimationEnum__get_IsAbstract
               (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicWallColossalAnimationEnum__get_IsStatic (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __this, const MethodInfo* method);
// 0x5ac24c0

bool CustomLogic_CustomLogicWallColossalAnimationEnum__get_IsStatic
               (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicWallColossalAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicWallColossalAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicWallColossalAnimationEnum_o* __this, const MethodInfo* method);
// 0x5ac24d0

bool CustomLogic_CustomLogicWallColossalAnimationEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicWallColossalAnimationEnum_o *__this,MethodInfo *method)

{
  return true;
}


